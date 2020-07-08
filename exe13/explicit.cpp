#include <iostream>
using namespace std; 
class Base
{
public:
    int i;
    explicit Base(int a){i = a;};
    Base (char * s) {i = atoi(s);}
};

int main(int argc, char const *argv[])
{
    Base a(1);
    cout<<a.i<<endl; 
    
    //Base b = 1;           // weel not compile  
    //cout<<b.i<<endl; 
    
    Base b = "123";             
    cout<<b.i<<endl; 
    
    return 0;
}
