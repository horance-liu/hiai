# fmk::graph::core::intf
add_library(fmk_graph_core_intf INTERFACE)

file(GLOB_RECURSE hdrs CONFIGURE_DEPENDS
    *.h
)

target_sources(fmk_graph_core_intf 
  INTERFACE ${hdrs}
)

target_include_directories(fmk_graph_core_intf
  INTERFACE "$<BUILD_INTERFACE:${HIAI_FMK_INC_DIR}>"
)

add_library(fmk::graph::core::intf ALIAS fmk_graph_core_intf)
