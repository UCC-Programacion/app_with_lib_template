add_executable(app1 main_app1.cpp)
target_link_libraries(app1 PRIVATE mymath)

add_executable(app2 main_app2.cpp)
target_link_libraries(app2 PRIVATE mymath)
