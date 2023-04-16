cmake_minimum_required(VERSION 3.24)
project(app_with_lib_template LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

enable_testing()

add_subdirectory(src)

add_subdirectory(apps)

add_subdirectory(tests)
