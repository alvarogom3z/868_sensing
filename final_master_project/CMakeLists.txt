cmake_minimum_required(VERSION 3.4)

project(global_Make)

set(LIBRARY_TO_BUILD "lib" CACHE STRING "Library to build (knn_library, kmeans_cpp, kmeans_Lloyd)")

if(NOT LIBRARY_TO_BUILD STREQUAL "knn_library" AND NOT LIBRARY_TO_BUILD STREQUAL "kmeans_cpp" AND NOT LIBRARY_TO_BUILD STREQUAL "kmeans_Lloyd")
    message(FATAL_ERROR "Invalid library selected. Choose one of: knn_library, kmeans_cpp, kmeans_Lloyd")
endif()

add_subdirectory(${LIBRARY_TO_BUILD})