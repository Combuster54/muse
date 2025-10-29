/* 
Recibe en sincronía cuatro geometry_msgs/WrenchStamped (fuerzas en LF, RF, LH, RH), 
calcula la norma de cada fuerza y, con un umbral GRF, publica un 
state_estimator_msgs/ContactDetection con las banderas de contacto/stance 
para cada pata (stance_lf, stance_rf, stance_lh, stance_rh).
*/

#include "state_estimator/plugin.hpp"
#include <rclcpp/rclcpp.hpp>

#include "state_estimator_msgs/msg/contact_detection.hpp"
#include "state_estimator_msgs/msg/foot_force.hpp"

#include <cmath>
#include <memory>
#include <functional>
#include <string>

namespace state_estimator_plugins
{

class ContactDetectionPlugin : public PluginBase
{
public:

  std::string foot_force_topic;
  std::string pub_topic;

  ContactDetectionPlugin():
    sub_(nullptr),
    pub_(nullptr),
    grf_threshold_(15.0),
    stance_lf(false),
    stance_rf(false),
    stance_lh(false),
    stance_rh(false)
  {}

  ~ContactDetectionPlugin() override = default;

  std::string getName() override        { return std::string("ContactDetection"); }
  std::string getDescription() override { return std::string("Contact Detection Plugin"); }

  void get_params(){
    foot_force_topic =
      node_->get_parameter("contact_detection_plugin.foot_force_topic").as_string();
    pub_topic =
      node_->get_parameter("contact_detection_plugin.pub_topic").as_string();
    grf_threshold_ =
      node_->get_parameter("contact_detection_plugin.grf_threshold").as_double();
  }
  void initialize_() override
  {
    // Parámetros
    node_->declare_parameter("contact_detection_plugin.foot_force_topic", "/foot_force");
    node_->declare_parameter("contact_detection_plugin.pub_topic","/state_estimator/contact_detection");
    node_->declare_parameter("contact_detection_plugin.grf_threshold",    15.0);

    get_params();
    RCLCPP_INFO(node_->get_logger(),
                "ContactDetectionPlugin: topic='%s', pub='%s', GRF threshold=%.3f",
                foot_force_topic.c_str(), pub_topic.c_str(), grf_threshold_);

    // Suscriptor a FootForce con 4 entradas [LF, RF, LH, RH]
    sub_ = node_->create_subscription<state_estimator_msgs::msg::FootForce>(
      foot_force_topic, rclcpp::SensorDataQoS(),
      std::bind(&ContactDetectionPlugin::callback, this, std::placeholders::_1));

    // Publicador
    pub_ = node_->create_publisher<state_estimator_msgs::msg::ContactDetection>(pub_topic, rclcpp::SystemDefaultsQoS());
  }

  void shutdown_() override {}
  void pause_() override {}
  void resume_() override {}
  void reset_() override {}

private:
  void callback(state_estimator_msgs::msg::FootForce::ConstSharedPtr forces_msg)

  {
    stance_lf = (forces_msg->lf > grf_threshold_);
    stance_rf = (forces_msg->rf > grf_threshold_);
    stance_lh = (forces_msg->lh > grf_threshold_);
    stance_rh = (forces_msg->rh > grf_threshold_);

    msg_.header.stamp = forces_msg->header.stamp;
    msg_.stance_lf = stance_lf;
    msg_.stance_rf = stance_rf;
    msg_.stance_lh = stance_lh;
    msg_.stance_rh = stance_rh;

    pub_->publish(msg_);
  }

private:
  rclcpp::Subscription<state_estimator_msgs::msg::FootForce>::SharedPtr sub_;
  rclcpp::Publisher<state_estimator_msgs::msg::ContactDetection>::SharedPtr pub_;

  state_estimator_msgs::msg::ContactDetection msg_;

  double grf_threshold_;


  bool stance_lf;
  bool stance_rf;
  bool stance_lh;
  bool stance_rh;
};

} // namespace state_estimator_plugins

#include <pluginlib/class_list_macros.hpp>
PLUGINLIB_EXPORT_CLASS(state_estimator_plugins::ContactDetectionPlugin, state_estimator_plugins::PluginBase)