/*
    test of the sleep() function 
*/
#include <iostream>
#include <unistd.h>
int main(int argc, char const *argv[])
{
    std::cout << "start " << std::endl;
    std::cout.flush(); 
    sleep(5);
    std::cout << "end  " << std::endl;
    return 0;
}
