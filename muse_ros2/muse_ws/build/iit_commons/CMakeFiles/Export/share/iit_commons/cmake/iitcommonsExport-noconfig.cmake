#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "iit_commons::iitcommons" for configuration ""
set_property(TARGET iit_commons::iitcommons APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(iit_commons::iitcommons PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libiitcommons.so"
  IMPORTED_SONAME_NOCONFIG "libiitcommons.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS iit_commons::iitcommons )
list(APPEND _IMPORT_CHECK_FILES_FOR_iit_commons::iitcommons "${_IMPORT_PREFIX}/lib/libiitcommons.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
