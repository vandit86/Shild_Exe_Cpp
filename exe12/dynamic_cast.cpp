#include <iostream>

class BaseClass
{
public:
    // we need thi function virtual (or other function) ti make class polymorphyc
    virtual void func1(){
        std::cout << "Base \n";
    }; 
};

class Derived : public BaseClass
{
public:
    void func1()
    {
        std::cout << "Derived \n";
    }

    void func2 (){
        std::cout << "Func 2 \n";

    }
};

int main(int argc, char const *argv[])
{
    BaseClass *p, b; 
    Derived d, *pd; 

    p = &b;     // point to Base
    p->func1();

    p = &d;     // point to the derived 
    p->func1(); // print derived 

    pd = dynamic_cast<Derived*>(p); // point to the derived
    if (!pd) exit(1);  
    pd->func1(); // print derived  
    pd->func2(); // use derived functionality 
    
    p = dynamic_cast<BaseClass*>(&d); // point to base but use virtual functionality of func1()
    if (!p) exit(1);  
    p->func1(); // print derived 
    // p->func2(); // do not have an acess  
    
    return 0;
}