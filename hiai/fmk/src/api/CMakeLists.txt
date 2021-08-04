# fmk::api
file(GLOB_RECURSE srcs CONFIGURE_DEPENDS
    *.cpp
)

add_library(fmk_api OBJECT ${srcs})

target_include_directories(fmk_api
  PRIVATE "$<BUILD_INTERFACE:${HIAI_FMK_SRC_DIR}>"
)

target_link_libraries(fmk_api
  PUBLIC 
    infra::base
    fmk::api::intf
)

add_library(fmk::api ALIAS fmk_api)