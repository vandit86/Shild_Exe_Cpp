#include <iostream>
#include <string>
#include "main.hpp"

int main(int argc, char const *argv[])
{
    std::string test_str = "test"; 
    std::cout << "test " << test_str << std::endl; 
    int a =0, b=0; 
    ++ a ; 
    test_function(a); 
    
    for (; a > 0; a--)
    {
        /* code */
        b = a ; 
    }
    
    return 0;
}


void test_function (int &a ){
    a = 10; 
}
