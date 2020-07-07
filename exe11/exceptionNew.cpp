#include <iostream>

int main(int argc, char const *argv[])
{
    double *p; 
    int i =0; 
    while (1){
        try
        {
            //throw std::bad_alloc(); 
             p = new double[1000000];
            std::cout<< ++i << std::endl;  
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
            return 1; 
        }
        
    }
    return 0;
}
