cmake_minimum_required(VERSION 3.8)

project(KMeansCpp)

file(GLOB SOURCES "src/*.cpp")
file(GLOB HEADERS "includes/*.hpp")

add_library(kmeans_lib STATIC ${SOURCES}) 

add_executable(kmeans_cpp_ex ${SOURCES} ${HEADERS} src/main.cpp)

target_link_libraries(kmeans_cpp_ex PUBLIC kmeans_lib)