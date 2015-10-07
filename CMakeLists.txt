cmake_minimum_required(VERSION 2.8)

# Please replace the cpptemplate with your project name
set (PROJECT_NAME cpptemplate)

project(${PROJECT_NAME})

# This will build the GoogleTest suite as a static library
add_subdirectory(contrib)

# Make sure to enable C++11 standard
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

include_directories(
"${PROJECT_SOURCE_DIR}/contrib/gtest/include"
)

# This is one example file to start with the new project
set(SOURCE_FILES test/TestStarter.cpp)

add_executable(${PROJECT_NAME} ${SOURCE_FILES})

target_link_libraries(${PROJECT_NAME} gtest_main pthread)
