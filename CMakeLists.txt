# Set to the current lowest tested version of CMake
cmake_minimum_required (VERSION 3.2.2)
project (BasicCppEnvironment)
if(NOT MSVC)
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Werror")
endif()
set(CMAKE_CXX_STANDARD 14)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
add_subdirectory (googletest)
add_definitions(${MSVC_COMPILER_DEFS})
enable_testing()


add_subdirectory (ExampleCode)

