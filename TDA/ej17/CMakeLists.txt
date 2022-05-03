cmake_minimum_required(VERSION 3.10)

# set the project name
project(ej17)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set( CMAKE_CXX_FLAGS "-Wall -Werror -Wconversion" )

include_directories(include)

file(GLOB SOURCES "src/*.cpp")

add_library(Employee src/employee.cpp)
add_library(Admin src/admin.cpp)
add_library(Boss src/boss.cpp)
add_library(Director src/director.cpp)

add_executable(ej17 src/main.cpp)

target_link_libraries(ej17 PUBLIC Employee Admin Boss Director)

