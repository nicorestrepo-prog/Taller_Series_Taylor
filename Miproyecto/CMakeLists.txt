cmake_minimum_required(VERSION 3.10)
project(TallerTaylor)

set(CMAKE_CXX_STANDARD 11)

include_directories(include)

add_executable(programa src/main.cpp src/utils.cpp)