cmake_minimum_required(VERSION 3.15)

project(hiai VERSION 1.0 LANGUAGES C CXX)

# Set c++ standard to c++17.
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# cmake utils & external deps
list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_LIST_DIR}/build/cmake)

## global options
option(HIAI_RUN_TESTS "If ON, hiai test cases will be run." OFF)

## enable test runtime
if(${HIAI_RUN_TESTS})
  include(CTest)
  enable_testing()
endif()

add_subdirectory(hiai)

if(BUILD_TESTING)
  add_subdirectory(test)
endif()
