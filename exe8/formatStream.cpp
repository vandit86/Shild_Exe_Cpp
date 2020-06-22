#include<iostream>

int main(int argc, char const *argv[])
{
    std::cout << 42 << std::endl; 
    
    // unset dec format 
    std::cout.unsetf(std::ios::dec);         
    // change output steram format by putting the flag
    std::cout.setf(std::ios::hex | std::ios::showbase);   
    
    std::cout << 42 << std::endl;

    std::cout << std::dec << 42 << " " << std::hex << 42 << std::endl; 
    
    // new format 

    using namespace std ; 

    cout << uppercase << "ccgccyy"<< endl; 
    cout<< dec << boolalpha << true << "  "<<  scientific << 12.09<< endl ; 

    return 0;
}
