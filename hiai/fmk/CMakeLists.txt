add_subdirectory(inc)
add_subdirectory(src)

# hiai::fmk
add_library(hiai_fmk SHARED "")

target_link_libraries(hiai_fmk
  PUBLIC
    fmk::api
    fmk::graph::core
)

add_library(hiai::fmk ALIAS hiai_fmk)