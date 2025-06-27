cmake_minimum_required(VERSION 3.10)
project(googleTestDemo)

add_subdirectory(googletest)

include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(googleTestDemo googleTestDemo.cpp googleTestDemo.h)

target_link_libraries(googleTestDemo gtest gtest_main)

set_property(TARGET googleTestDemo PROPERTY CXX_STANDARD 11)