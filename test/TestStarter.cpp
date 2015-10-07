#include <iostream>

#include <gtest/gtest.h>
#include "Class.hpp"

// This is a test stub for your first unit test
TEST(TestClass, TestInit)
{
    Class a;

    EXPECT_EQ(a.init(), false);
}
