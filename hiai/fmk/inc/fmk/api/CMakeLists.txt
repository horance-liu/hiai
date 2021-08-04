# fmk::graph::api::intf
add_library(fmk_api_intf INTERFACE)

file(GLOB_RECURSE hdrs CONFIGURE_DEPENDS
    *.h
)

target_sources(fmk_api_intf 
  INTERFACE ${hdrs}
)

target_include_directories(fmk_api_intf
  INTERFACE "$<BUILD_INTERFACE:${HIAI_FMK_INC_DIR}>"
)

add_library(fmk::api::intf ALIAS fmk_api_intf)
