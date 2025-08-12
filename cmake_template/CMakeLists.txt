cmake_minimum_required(VERSION 3.10.0)
project(test VERSION 0.1.0 LANGUAGES C CXX)

add_executable(cmake_test 
    src/main.cpp
    src/test.cpp
    )

target_include_directories(cmake_test PRIVATE ${PROJECT_SOURCE_DIR}/include)

include(CTest)
enable_testing()

