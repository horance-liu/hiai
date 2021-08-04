# fmk::graph::core

file(GLOB_RECURSE srcs CONFIGURE_DEPENDS
    *.cpp
)

add_library(fmk_graph_core OBJECT ${srcs})

target_include_directories(fmk_graph_core
  PRIVATE "$<BUILD_INTERFACE:${HIAI_FMK_SRC_DIR}>"
)

target_link_libraries(fmk_graph_core
  PUBLIC
    fmk::graph::core::intf
    infra::base
)

add_library(fmk::graph::core ALIAS fmk_graph_core)