cmake_minimum_required(VERSION 3.4)
project(knn_project)

set(HEADERS
    includes/CSV_reader.h
    includes/KNN.h
)

set(SOURCES
    src/CSV_reader.cpp
    src/KNN.cpp
)

set(MAIN_SOURCE
    src/main.cpp
)

list(APPEND SOURCES ${HEADERS})

add_library(knn_library STATIC ${SOURCES}) 

target_include_directories(knn_library PUBLIC ${CMAKE_SOURCE_DIR}/includes)

install(TARGETS knn_library
        ARCHIVE DESTINATION lib
        LIBRARY DESTINATION lib
        RUNTIME DESTINATION bin)

install(FILES ${HEADERS} DESTINATION /usr/local/include)

add_executable(knn_ex ${MAIN_SOURCE})

target_link_libraries(knn_ex knn_library)