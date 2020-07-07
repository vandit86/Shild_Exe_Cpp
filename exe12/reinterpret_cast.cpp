#include <iostream>

using namespace std; 

int main(int argc, char const *argv[])
{
    string str ("STR"); 
    cout << str << endl; 
    char *p = "TSR"; 
    cout << p << endl; 
    int i = reinterpret_cast <int>(p); // not compile 
    return 0;
}
