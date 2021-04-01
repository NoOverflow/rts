cmake_minimum_required(VERSION 3.8)

project(rts)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(sources
    include/rts/assets/ImageLoader.hpp
    src/assets/ImageLoader.cpp
    include/rts/memory/MemUtils.hpp
    src/memory/MemUtils.cpp
)

add_library(rts STATIC ${sources})
target_include_directories(rts PUBLIC "include")
