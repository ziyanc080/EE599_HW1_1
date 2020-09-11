#include "src/lib/cpplib.h"

#include <map>
#include <vector>

#include "gtest/gtest.h"

// Add your own tests in this file

TEST(Q7_Test4, CalFactorial) {
    
    CPPLib solution;
    
    int input_int = 4;
    
    double actual_double   = solution.CalFactorial(input_int);
    double expected_double = 24;
    
    EXPECT_EQ(expected_double, actual_double);
    
}

TEST(Q7_Test10, CalFactorial) {
    
    CPPLib solution;
    int input_int = 10;
    
    double actual_double   = solution.CalFactorial(input_int);
    double expected_double = 3628800;
    
    EXPECT_EQ(expected_double, actual_double);
}

TEST(Q7_Test1, CalFactorial) {
    
    CPPLib solution;
        int input_int = 1;
    
    double actual_double   = solution.CalFactorial(input_int);
    double expected_double = 1;
    
    EXPECT_EQ(expected_double, actual_double);
}

TEST(Q7_Test6, CalFactorial) {
    
    CPPLib solution;
    
    int input_int = 6;
    
    double actual_double   = solution.CalFactorial(input_int);
    double expected_double = 720;
    
    EXPECT_EQ(expected_double, actual_double);
}

TEST(Q7_TestNeg, CalFactorial) {
    
    CPPLib solution;
        int input_int = -5;
    
    double actual_double   = solution.CalFactorial(input_int);
    double expected_double = -1;
    
    EXPECT_EQ(expected_double, actual_double);
    
}

TEST(Q7_Test11, CalFactorial) {
    
    
    CPPLib solution;
        int input_int = 11;
    
    double actual_double   = solution.CalFactorial(input_int);
    double expected_double = 39916800;
    
    EXPECT_EQ(expected_double, actual_double);
}

TEST(Q7_Test0, CalFactorial) {
    
    CPPLib solution;
        int input_int = 0;
    
    double actual_double   = solution.CalFactorial(input_int);
    double expected_double = 1;
    
    EXPECT_EQ(expected_double, actual_double);
}

 TEST(Q7_Test2, CalFactorial) {
    
    CPPLib solution;
        int input_int = 2;
    
    double actual_double   = solution.CalFactorial(input_int);
    double expected_double = 2;
    
    EXPECT_EQ(expected_double, actual_double);
    
}
