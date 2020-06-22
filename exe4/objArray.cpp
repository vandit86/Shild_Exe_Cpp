#include <iostream>

class obj
{
private:
    int num;

public:
    obj(int a);
    ~obj();
    int getNum () {return num;};  
};
obj:: obj(int a)
{
    num = a; 
}
obj::~obj()
{
}

int main(int argc, char const *argv[])
{
    obj o [4] = {obj(1), obj(2), obj(3), obj(4) }; // create and initialize 
    for (size_t i = 0; i < 4; i++)
    {
        std::cout<< o[i].getNum()<< "  " ; 
    }
    
    return 0;
}
