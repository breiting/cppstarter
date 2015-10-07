include_directories(
    gtest/include
    gtest/
    )

add_library(
    gtest_main STATIC

    gtest/src/gtest-all.cc
    gtest/src/gtest_main.cc
    )
