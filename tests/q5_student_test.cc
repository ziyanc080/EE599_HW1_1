#include "src/lib/cpplib.h"

#include <map>
#include <vector>

#include "gtest/gtest.h"

// Add your own tests in this file
TEST(Q5_Test, ReturnIntro) {
    
    CPPLib solution;
    
    std::string actual_string   = solution.PrintIntro();
    //std::string expected_string = std::string("name:ZiyanChen") + std::string("email:ziyanc@usc.edu") + std::string("major:Electrical Engineering") + std::string("focus:VLSI Design");
    
    
    std::string expected_string = std::string("name:") + std::string("ZiyanChen.\n") + std::string("email:") + std::string("ziyanc@usc.edu.\n") + std::string("major:") + std::string("Electrical Engineering.\n") + std::string("focus:") + std::string("VLSI Deisgn.\n");
    
    EXPECT_EQ(expected_string, actual_string);
}





