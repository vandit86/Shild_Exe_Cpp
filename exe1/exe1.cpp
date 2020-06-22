
#include <iostream>
/*
    write a programm that receive price per houre and number of ours all employers 
    print the summ of salary of all employers 
*/
int main(int argc, char const *argv[])
{
    /* code */
    double sum=0.0, h=0.0, p=0.0; 
    std::cout << "For each employe: Enter num of hours and price per hour [Num Price], to stup em«nter [0 0] " << std::endl;  
    
    while(1){
        std::cin>> h >> p ; // get hour and price 
        std::cout << h << "  "<< p << std::endl;  
        if (h == 0) break; 
        sum+=h*p; 
    }
    std::cout<< "sum to pay is  " << sum << std::endl ; 
    return 0;
}
