
file(GLOB_RECURSE srcs CONFIGURE_DEPENDS
  *.cpp
)

add_executable(fmk_graph_core_test ${srcs})

target_link_libraries(fmk_graph_core_test
  PRIVATE
    # sut
    fmk::graph::core

    # xunit
    cctest
    cctest_main
)

add_test(NAME fmk_graph_core_test COMMAND fmk_graph_core_test)
