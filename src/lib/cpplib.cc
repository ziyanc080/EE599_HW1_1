#include "cpplib.h"
#include "limits"
#include <iostream>
std::string CPPLib::PrintHelloWorld() { return "**** Hello World ****"; }

// Question 5 Print your self-introduction
std::string CPPLib::PrintIntro() {
    // Please fill up this function
    
    std::string output;
    
    output = std::string("name:") + std::string("ZiyanChen.\n") + std::string("email:") + std::string("ziyanc@usc.edu.\n") + std::string("major:") + std::string("Electrical Engineering.\n") + std::string("focus:") + std::string("VLSI Deisgn.\n");
    
    
    
    std::cout<<"name:"<<"ZiyanChen.\n";
    std::cout<<"email:"<<"ziyanc@usc.edu.\n";
    std::cout<<"major:"<<"Electrical Engineering.\n";
    std::cout<<"focus:"<<"VLSI Deisgn.\n";
    
    return output;
}


// Question 6  Flatten a 2D vector
std::vector<int> CPPLib::Flatten2DVector(const std::vector<std::vector<int>> &input) {
    // Please fill up this function.
    std::vector<int> res = {};
    
    int Vector_Row = input.size();
    
    for (int i=0; i<Vector_Row; i++){
        
        int Vector_Col = input[i].size();
        
        for (int j=0; j<Vector_Col; j++){
            
               res.push_back(input[i][j]);
        }
        
    }
    
    return res;
}

// Question 7 Calculate the factorial number
double CPPLib::CalFactorial(int N) {
    // Please fill up this function.
    
    double output=1;//Initialize the output
    
    if (N<0)
        output = -1;
    
    else if (N==0)
        output = 1;
    
    else {
        
        for (int i=1; i<=N; i++){
            
            output = output * i;
            
        }
    }
    return output;
}
