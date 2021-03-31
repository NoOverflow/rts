cmake_minimum_required(VERSION 3.8)

project(rts)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_SHARED_MODULE_PREFIX "")

set(rts_SOURCES
    include/Assets/ImageLoader.hpp
    src/Assets/ImageLoader.cpp
)

add_library(rts MODULE ${rts_SOURCES})
target_include_directories(rts PRIVATE "./include")
