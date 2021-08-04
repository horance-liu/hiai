# infra::base::intf
add_library(infra_base_intf INTERFACE)

file(GLOB_RECURSE hdrs CONFIGURE_DEPENDS
    *.h
)

target_sources(infra_base_intf 
  INTERFACE ${hdrs}
)

target_include_directories(infra_base_intf
  INTERFACE "$<BUILD_INTERFACE:${HIAI_INFRA_INC_DIR}>"
)

add_library(infra::base::intf ALIAS infra_base_intf)
