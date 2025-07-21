cmake_minimum_required(VERSION 3.14)
project(ParseUtilsTestProject)

set(CMAKE_CXX_STANDARD 17)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/heads/main.zip
)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(test_parse_utils
    test_parse_utils.cpp
)

target_link_libraries(test_parse_utils
    gtest
    gtest_main
)

include(GoogleTest)
gtest_discover_tests(test_parse_utils)
