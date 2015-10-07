cmake_minimum_required(VERSION 2.8)

# Please replace the cpptemplate with your project name
set (PROJECT_NAME cpptemplate)

project(${PROJECT_NAME})

message(STATUS "")
message(STATUS "-----------------------------------------------------------")
message(STATUS "Project ${PROJECT_NAME}")
message(STATUS "-----------------------------------------------------------")
message(STATUS "")

# This statement enables testing (e.g. make test)
enable_testing()

# This will build the GoogleTest suite as a static library
add_subdirectory(contrib)

# Make sure to enable C++11 standard
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

include_directories(
        "${PROJECT_SOURCE_DIR}/contrib/gtest/include"
        ./include
)

# This is one example file to start with the new project
set(SOURCE_FILES test/TestStarter.cpp src/Class.cpp include/Class.hpp)

add_executable(test_${PROJECT_NAME} ${SOURCE_FILES})

target_link_libraries(test_${PROJECT_NAME} gtest_main pthread)

add_test(
    NAME test_${PROJECT_NAME}
    COMMAND test_${PROJECT_NAME}
    )
