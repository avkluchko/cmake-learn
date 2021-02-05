cmake_minimum_required(VERSION 3.10)

project(tutorial VERSION 1.0)

configure_file(tutorial-config.h.in tutorial-config.h)

add_executable(tutorial tutorial.cpp)

target_include_directories(tutorial PUBLIC
        "${PROJECT_BINARY_DIR}"
        )
