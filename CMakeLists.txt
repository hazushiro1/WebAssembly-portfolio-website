cmake_minimum_required(VERSION 3.20)

project(WebAssembly_Bastion_Portfolio
    VERSION 0.1.0
    LANGUAGES CXX C
)

# Enforce C++20 Standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Optimization and Warning Flags
if (CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
    add_compile_options(
        -O2
        -Wall
        -Wextra
    )
endif ()

# Public Include Directory
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

# Source Files
set(BASTION_SOURCES
    src/main.cpp
        include/bastion_interface.h
)

# Standalone Executable Target
add_executable(bastion_portfolio ${BASTION_SOURCES})
