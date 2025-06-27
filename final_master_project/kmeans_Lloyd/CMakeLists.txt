cmake_minimum_required(VERSION 3.4)

project(KMeansLloyd)

include_directories(includes)

set(HEADERS
    includes/CSV_reader.h
    includes/dkm_parallel.hpp
    includes/dkm_utils.hpp
    includes/dkm.hpp
)

set(SOURCES
    src/CSV_reader.cpp
)

set(MAIN_SOURCE
    src/main.cpp
)

add_executable(kmeans_Lloyd_ex ${MAIN_SOURCE} ${SOURCES})