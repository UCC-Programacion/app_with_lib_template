add_library(mymath my_math.cpp)
target_include_directories(mymath PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../include)
