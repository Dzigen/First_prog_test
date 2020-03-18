#ifndef SQUARED_EQUATION_TEST
#define SQUARED_EQUATION_TEST

#include <gtest/gtest.h>

extern "C" {
#include "squared_equation.h"
}

TEST(squared_equationTest, working)
{

    ASSERT_DOUBLE_EQ(squared_equation(1, 5, 4),-5.000);

}

#endif // SQUARED_EQUATION_TEST



