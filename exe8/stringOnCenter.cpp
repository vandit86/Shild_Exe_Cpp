#include<iostream>
#include<iomanip>
#include<string.h>

#define SCREEN_SIZE 150
using namespace std; 

int main(int argc, char const *argv[])
{

    cout<< (float) 100/3 << endl; 
    // fixed says that there will be a fixed number of decimal digits after the decimal point
    cout<<setprecision(3)<< fixed<< (double)100/3 << endl; 

    char str [20] = "test string"; 
    int field = (strlen(str) + SCREEN_SIZE)/2; 
    cout<<endl<<setw(field)<< str<<endl<<endl; 
    
    return 0;
}
