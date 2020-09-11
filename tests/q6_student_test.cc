#include "src/lib/cpplib.h"

#include <map>
#include <vector>

#include "gtest/gtest.h"

// Add your own tests in this file
TEST(Q6_Test0, Flatten2DVector) {
    
    CPPLib solution;
    

    const std::vector<std::vector<int>> input_vector = {{1, 2, 3, 4},
                                                        {5, 6},
                                                        {7, 8}};
    
    std::vector<int> actual_vector   = solution.Flatten2DVector(input_vector);
    std::vector<int> expected_vector = {1,2,3,4,5,6,7,8};
    
    EXPECT_EQ(expected_vector, actual_vector);

}

TEST(Q6_Test1, Flatten2DVector) {
    
    CPPLib solution;
    

    const std::vector<std::vector<int>> input_vector = {{4, 2, 3, 2}};
    
    std::vector<int> actual_vector   = solution.Flatten2DVector(input_vector);
    std::vector<int> expected_vector = {4,2,3,2};
    
    EXPECT_EQ(expected_vector, actual_vector);

}

TEST(Q6_Test2, Flatten2DVector) {
    
    CPPLib solution;
    

    const std::vector<std::vector<int>> input_vector = {{1},
                                                        {5},
                                                        {7}};
    
    std::vector<int> actual_vector   = solution.Flatten2DVector(input_vector);
    std::vector<int> expected_vector = {1,5,7};
    
    EXPECT_EQ(expected_vector, actual_vector);

}

TEST(Q6_Test3, Flatten2DVector) {
    
    CPPLib solution;
    

    const std::vector<std::vector<int>> input_vector = {{}};
    
    std::vector<int> actual_vector   = solution.Flatten2DVector(input_vector);
    std::vector<int> expected_vector = {};
    
    EXPECT_EQ(expected_vector, actual_vector);

}

TEST(Q6_Test4, Flatten2DVector) {
    
    CPPLib solution;
    

    const std::vector<std::vector<int>> input_vector = {{1, 1},
                                                        {1, 1},
                                                        {1, 1}};
    
    std::vector<int> actual_vector   = solution.Flatten2DVector(input_vector);
    std::vector<int> expected_vector = {1,1,1,1,1,1};
    
    EXPECT_EQ(expected_vector, actual_vector);

}
