include(FetchContent)

FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG v1.13.0
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

add_executable(
        mymath_test
        mymath_test.cpp
)
target_link_libraries(
        mymath_test
        PRIVATE
        GTest::gtest_main
        mymath
)

include(GoogleTest)
gtest_discover_tests(mymath_test)
