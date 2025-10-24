/* 
Recibe en sincronía cuatro geometry_msgs/WrenchStamped (fuerzas en LF, RF, LH, RH), 
calcula la norma de cada fuerza y, con un umbral GRF, publica un 
state_estimator_msgs/ContactDetection con las banderas de contacto/stance 
para cada pata (stance_lf, stance_rf, stance_lh, stance_rh).
*/


// #include "state_estimator/plugin.hpp"
// #include <rclcpp/rclcpp.hpp>

// #include "state_estimator_msgs/msg/contact_detection.hpp"
// #include <geometry_msgs/msg/wrench_stamped.hpp>

// #include <message_filters/time_synchronizer.h>
// #include <message_filters/subscriber.h>
// #include <message_filters/sync_policies/approximate_time.h>
// #include <message_filters/sync_policies/exact_time.h>

// #include <cmath>
// #include <memory>
// #include <functional>


// namespace state_estimator_plugins
// {

// typedef message_filters::sync_policies::ApproximateTime
// <
// 	geometry_msgs::msg::WrenchStamped,
// 	geometry_msgs::msg::WrenchStamped,
// 	geometry_msgs::msg::WrenchStamped,
// 	geometry_msgs::msg::WrenchStamped
// > 
// ApproximateTimePolicy;

// typedef message_filters::sync_policies::ExactTime
// <
// 	geometry_msgs::msg::WrenchStamped,
// 	geometry_msgs::msg::WrenchStamped,
// 	geometry_msgs::msg::WrenchStamped,
// 	geometry_msgs::msg::WrenchStamped
// > 
// ExactTimePolicy;

// #define MySyncPolicy ApproximateTimePolicy

// 	class ContactDetectionPlugin : public PluginBase
// 	{
// 	public:
// 		ContactDetectionPlugin(): 
// 			wrench_lf_sub_(nullptr),
// 			wrench_rf_sub_(nullptr),
// 			wrench_lh_sub_(nullptr),
// 			wrench_rh_sub_(nullptr),
// 			pub_(nullptr), 
// 			sync_(nullptr) 
// 		{ } 
	
// 		~ContactDetectionPlugin() 
// 		{
// 			// Smart pointers will be automatically destroyed
// 		}

// 		std::string getName() override { return std::string("ContactDetection"); }
// 		std::string getDescription() override { return std::string("Contact Detection Plugin"); }

// 		void initialize_() override {

//             // Load parameters from YAML
//             // LF: left front leg, RF: right front leg, LH: left hind leg, RH: right hind leg
//             std::string lf_topic, rf_topic, lh_topic, rh_topic, pub_topic;
            
//             node_->declare_parameter("contact_detection_plugin.wrench_lf_topic", "/state_estimator/contact_force_lf_foot");
//             node_->declare_parameter("contact_detection_plugin.wrench_rf_topic", "/state_estimator/contact_force_rf_foot");
//             node_->declare_parameter("contact_detection_plugin.wrench_lh_topic", "/state_estimator/contact_force_lh_foot");
//             node_->declare_parameter("contact_detection_plugin.wrench_rh_topic", "/state_estimator/contact_force_rh_foot");
//             node_->declare_parameter("contact_detection_plugin.pub_topic", "/state_estimator/contact_detection");
//             node_->declare_parameter("contact_detection_plugin.grf_threshold", 15.0);
            
//             lf_topic = node_->get_parameter("contact_detection_plugin.wrench_lf_topic").as_string();
//             rf_topic = node_->get_parameter("contact_detection_plugin.wrench_rf_topic").as_string();
//             lh_topic = node_->get_parameter("contact_detection_plugin.wrench_lh_topic").as_string();
//             rh_topic = node_->get_parameter("contact_detection_plugin.wrench_rh_topic").as_string();
//             pub_topic = node_->get_parameter("contact_detection_plugin.pub_topic").as_string();
//             grf_threshold_ = node_->get_parameter("contact_detection_plugin.grf_threshold").as_double();

//             RCLCPP_INFO_STREAM(node_->get_logger(), "ContactDetectionPlugin loaded with GRF threshold: " << grf_threshold_);

//             // Set up subscribers
//             wrench_lf_sub_ = std::make_shared<message_filters::Subscriber<geometry_msgs::msg::WrenchStamped>>(node_, lf_topic);
//             wrench_rf_sub_ = std::make_shared<message_filters::Subscriber<geometry_msgs::msg::WrenchStamped>>(node_, rf_topic);
//             wrench_lh_sub_ = std::make_shared<message_filters::Subscriber<geometry_msgs::msg::WrenchStamped>>(node_, lh_topic);
//             wrench_rh_sub_ = std::make_shared<message_filters::Subscriber<geometry_msgs::msg::WrenchStamped>>(node_, rh_topic);

//             // Synchronizer
//             sync_ = std::make_shared<message_filters::Synchronizer<MySyncPolicy>>(MySyncPolicy(250), *wrench_lf_sub_, *wrench_rf_sub_, *wrench_lh_sub_, *wrench_rh_sub_);
//             sync_->registerCallback(std::bind(&ContactDetectionPlugin::callback, this, std::placeholders::_1, std::placeholders::_2, std::placeholders::_3, std::placeholders::_4));

//             // Publisher
//             pub_ = node_->create_publisher<state_estimator_msgs::msg::ContactDetection>(pub_topic, 250);

//         }
// 		void shutdown_() override { }
// 		void pause_() override { }
// 		void resume_() override { }
// 		void reset_() override { }

// 		void callback
// 		(
// 			const geometry_msgs::msg::WrenchStamped::ConstSharedPtr& wrench_lf,
// 			const geometry_msgs::msg::WrenchStamped::ConstSharedPtr& wrench_rf,
// 			const geometry_msgs::msg::WrenchStamped::ConstSharedPtr& wrench_lh,
// 			const geometry_msgs::msg::WrenchStamped::ConstSharedPtr& wrench_rh
// 		)
// 		{
// 			// Calculate the norm of the wrenches
//             wrench_lf_norm = sqrt(pow(wrench_lf->wrench.force.x,2) + pow(wrench_lf->wrench.force.y,2) + pow(wrench_lf->wrench.force.z,2));
//             wrench_rf_norm = sqrt(pow(wrench_rf->wrench.force.x,2) + pow(wrench_rf->wrench.force.y,2) + pow(wrench_rf->wrench.force.z,2));
//             wrench_lh_norm = sqrt(pow(wrench_lh->wrench.force.x,2) + pow(wrench_lh->wrench.force.y,2) + pow(wrench_lh->wrench.force.z,2));
//             wrench_rh_norm = sqrt(pow(wrench_rh->wrench.force.x,2) + pow(wrench_rh->wrench.force.y,2) + pow(wrench_rh->wrench.force.z,2));

//             if (wrench_lf_norm > grf_threshold_) stance_lf = true; else stance_lf = false;
//             if (wrench_rf_norm > grf_threshold_) stance_rf = true; else stance_rf = false;
//             if (wrench_lh_norm > grf_threshold_) stance_lh = true; else stance_lh = false;
//             if (wrench_rh_norm > grf_threshold_) stance_rh = true; else stance_rh = false;


//             // publishing
//             msg_.header.stamp = node_->get_clock()->now();

// 			msg_.stance_lf = stance_lf;
// 			msg_.stance_rf = stance_rf;
// 			msg_.stance_lh = stance_lh;
// 			msg_.stance_rh = stance_rh;

// 			pub_->publish(msg_);

// 		} // end callback


// 	private:
	
// 		std::shared_ptr<message_filters::Subscriber<geometry_msgs::msg::WrenchStamped>> wrench_lf_sub_;
// 		std::shared_ptr<message_filters::Subscriber<geometry_msgs::msg::WrenchStamped>> wrench_rf_sub_;
// 		std::shared_ptr<message_filters::Subscriber<geometry_msgs::msg::WrenchStamped>> wrench_lh_sub_;
// 		std::shared_ptr<message_filters::Subscriber<geometry_msgs::msg::WrenchStamped>> wrench_rh_sub_;
// 		std::shared_ptr<message_filters::Synchronizer<MySyncPolicy>> sync_;
// 		rclcpp::Publisher<state_estimator_msgs::msg::ContactDetection>::SharedPtr pub_;

// 		state_estimator_msgs::msg::ContactDetection msg_;

// 		bool stance_lf;
// 		bool stance_rf;
// 		bool stance_lh;
// 		bool stance_rh;
// 		double wrench_lf_norm;
// 		double wrench_rf_norm;
// 		double wrench_lh_norm;
// 		double wrench_rh_norm;
//         double grf_threshold_;



// 	}; // end class ContactDetectionPlugin

// } //end namespace state_estimator_plugins

// #include <pluginlib/class_list_macros.hpp>
// PLUGINLIB_EXPORT_CLASS(state_estimator_plugins::ContactDetectionPlugin, state_estimator_plugins::PluginBase)


/*  ContactDetectionPlugin
 *  Suscribe a un solo tópico Float32MultiArray con 4 fuerzas [LF, RF, LH, RH]
 *  y publica state_estimator_msgs/ContactDetection con stance_* según umbral.
 */

#include "state_estimator/plugin.hpp"
#include <rclcpp/rclcpp.hpp>

#include "state_estimator_msgs/msg/contact_detection.hpp"
#include <std_msgs/msg/float32_multi_array.hpp>

#include <cmath>
#include <memory>
#include <functional>
#include <string>

namespace state_estimator_plugins
{

class ContactDetectionPlugin : public PluginBase
{
public:
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

  void initialize_() override
  {
    // Parámetros
    node_->declare_parameter("contact_detection_plugin.foot_force_topic", "/foot_force");
    node_->declare_parameter("contact_detection_plugin.pub_topic",        "/state_estimator/contact_detection");
    node_->declare_parameter("contact_detection_plugin.grf_threshold",    15.0);

    const std::string foot_force_topic =
      node_->get_parameter("contact_detection_plugin.foot_force_topic").as_string();
    const std::string pub_topic =
      node_->get_parameter("contact_detection_plugin.pub_topic").as_string();
    grf_threshold_ =
      node_->get_parameter("contact_detection_plugin.grf_threshold").as_double();

    RCLCPP_INFO(node_->get_logger(),
                "ContactDetectionPlugin: topic='%s', pub='%s', GRF threshold=%.3f",
                foot_force_topic.c_str(), pub_topic.c_str(), grf_threshold_);

    // Suscriptor a Float32MultiArray con 4 entradas [LF, RF, LH, RH]
    sub_ = node_->create_subscription<std_msgs::msg::Float32MultiArray>(
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
  void callback(std_msgs::msg::Float32MultiArray::ConstSharedPtr forces_msg)

  {
    // Esperamos exactamente 4 valores: [LF, RF, LH, RH]
    if (!forces_msg || forces_msg->data.size() < 4) {
      RCLCPP_WARN_THROTTLE(node_->get_logger(), *node_->get_clock(), 2000,
                           "foot_force espera 4 valores [LF, RF, LH, RH], recibido %zu",
                           forces_msg ? forces_msg->data.size() : 0);
      return;
    }

    const double force_lf = static_cast<double>(forces_msg->data[0]);
    const double force_rf = static_cast<double>(forces_msg->data[1]);
    const double force_lh = static_cast<double>(forces_msg->data[2]);
    const double force_rh = static_cast<double>(forces_msg->data[3]);

    // Comparación simple contra umbral GRF
    stance_lf = (force_lf > grf_threshold_);
    stance_rf = (force_rf > grf_threshold_);
    stance_lh = (force_lh > grf_threshold_);
    stance_rh = (force_rh > grf_threshold_);

    // Publicación
    msg_.header.stamp = node_->get_clock()->now();
    msg_.stance_lf = stance_lf;
    msg_.stance_rf = stance_rf;
    msg_.stance_lh = stance_lh;
    msg_.stance_rh = stance_rh;

    pub_->publish(msg_);
  }

private:
  rclcpp::Subscription<std_msgs::msg::Float32MultiArray>::SharedPtr sub_;
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

