cmake_minimum_required(VERSION 2.8)

project({{ cookiecutter.repo_name }})

set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -Wall")

# Set the output folder where your program will be created
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})

# The following folder will be included
include_directories("${PROJECT_SOURCE_DIR}" "${PROJECT_SOURCE_DIR}/../src")

# Add files to compile
file(GLOB SOURCES "*.cpp" "*.hpp" "../src/*.hpp" "../src/*.cpp")
add_executable(${PROJECT_NAME} ${SOURCES})
