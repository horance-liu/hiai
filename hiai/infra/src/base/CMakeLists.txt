# infra::base
file(GLOB_RECURSE srcs CONFIGURE_DEPENDS
    *.cpp
)

add_library(infra_base OBJECT ${srcs})

target_include_directories(infra_base
  PRIVATE "$<BUILD_INTERFACE:${HIAI_INFRA_SRC_DIR}>"
)

target_link_libraries(infra_base
  PUBLIC  infra::base::intf
)

add_library(infra::base ALIAS infra_base)