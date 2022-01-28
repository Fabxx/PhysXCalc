cmake_minimum_required(VERSION 3.10)
project(main)
set(CMAKE_CXX_STANDARD 20)
aux_source_directory(src SOURCES)
include_directories(include)
link_directories(include)
add_executable(main ${SOURCES})


