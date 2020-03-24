#ifndef SQUARED_EQUATION_TEST
#define SQUARED_EQUATION_TEST

#include <gtest/gtest.h>

extern "C" {
#include "squared_equation.h"
}

TEST(squared_equationTest, working)
{

    ASSERT_FLOAT_EQ(squared_equation(0,0,0),0);

}

#endif // SQUARED_EQUATION_TEST



