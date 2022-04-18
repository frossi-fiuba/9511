cmake_minimum_required(VERSION 3.10)

# set the project name
project(tp1)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set( CMAKE_CXX_FLAGS "-Wall -Werror -Wconversion" )

include_directories(include)

file(GLOB SOURCES "src/*.cpp")

add_library(Utils src/utils.cpp)

add_executable(tp1 src/tp1.cpp)

target_link_libraries(tp1 PUBLIC Utils)
