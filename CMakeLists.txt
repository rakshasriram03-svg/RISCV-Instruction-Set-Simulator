cmake_minimum_required(VERSION 3.10)
project(riscv_simulator CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB SOURCES ${CMAKE_SOURCE_DIR}/src/*.cpp)

add_executable(riscv_simulator ${SOURCES})
target_include_directories(riscv_simulator PRIVATE ${CMAKE_SOURCE_DIR}/include)
