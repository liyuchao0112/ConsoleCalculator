cmake_minimum_required(VERSION 3.22.0)

project(ConsoleCalculator VERSION 0.1.0)

add_executable(${CMAKE_PROJECT_NAME} "${PROJECT_SOURCE_DIR}/Sources/main.cpp")

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)