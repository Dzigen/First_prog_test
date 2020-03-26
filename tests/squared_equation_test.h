#ifndef SQUARED_EQUATION_TEST
#define SQUARED_EQUATION_TEST

#include <gtest/gtest.h>

extern "C" {
#include "squared_equation.h"
}

TEST(working_positive , discr_grather_zero){
    double properties_of_equation[3];
    squared_equation(1,5,4,properties_of_equation);

    ASSERT_DOUBLE_EQ(properties_of_equation[0],-1);
    ASSERT_DOUBLE_EQ(properties_of_equation[1],-4);
    ASSERT_DOUBLE_EQ(properties_of_equation[2],9);
}

TEST(working_positive , discr_equal_zero){
    double properties_of_equation[3];
    squared_equation(1,2,1,properties_of_equation);

    ASSERT_DOUBLE_EQ(properties_of_equation[0],-1);
    ASSERT_DOUBLE_EQ(properties_of_equation[1],-1);
    ASSERT_DOUBLE_EQ(properties_of_equation[2],0);
}

TEST(working_positive , discr_less_zero){
    double properties_of_equation[3];
    squared_equation(2,2,1,properties_of_equation);

    ASSERT_DOUBLE_EQ(properties_of_equation[0],0);
    ASSERT_DOUBLE_EQ(properties_of_equation[1],0);
    ASSERT_DOUBLE_EQ(properties_of_equation[2],-4);
}

TEST(working_negative , zero_parametrs_of_equation){

    double properties_of_equation[3];
    squared_equation(0,0,0,properties_of_equation);

    ASSERT_DOUBLE_EQ(properties_of_equation[0],-1);
    ASSERT_DOUBLE_EQ(properties_of_equation[1],-1);
    ASSERT_DOUBLE_EQ(properties_of_equation[2],-1);
}
TEST(working_negative , not_integer_roots){

    double properties_of_equation[3];
    squared_equation(1,6,3,properties_of_equation);

    ASSERT_DOUBLE_EQ(properties_of_equation[0],-0.5505102572168221);
    ASSERT_DOUBLE_EQ(properties_of_equation[1],-5.449489742783178);
    ASSERT_DOUBLE_EQ(properties_of_equation[2],24);
}
TEST(working_negative , not_integer_parametrs){

    double properties_of_equation[3];
    squared_equation(1.8, 6.32, 3.2, properties_of_equation);

    ASSERT_DOUBLE_EQ(properties_of_equation[0],-0.6135408748862581);
    ASSERT_DOUBLE_EQ(properties_of_equation[1],-2.897570236224853);
    ASSERT_DOUBLE_EQ(properties_of_equation[2],16.9024);

}

#endif // SQUARED_EQUATION_TEST


