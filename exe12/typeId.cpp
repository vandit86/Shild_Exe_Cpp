#include <iostream>

class BaseClass
{
public:
    virtual void func1(){}; // we need thi function virtual (or other function) ti make class polymorphyc
};

class Derived : public BaseClass
{
public:
    void func1()
    {
        std::cout << "Derived \n";
    }
};

// Оператор typeid может работать с классамишаблонами.
template <typename T>
class Data
{
    T i;

public:
    void setNum(T num) { i = num; }
};

int main(int argc, char const *argv[])
{
    BaseClass *p, b;
    Derived d;

    std::cout << typeid(b).name() << std::endl;
    std::cout << typeid(d).name() << std::endl;

    // dynamic types changes
    p = &b;
    std::cout << typeid(*p).name() << std::endl;
    p = &d;
    std::cout << typeid(*p).name() << std::endl;

    std::cout << (typeid(*p) == typeid(d)) << std::endl;
    // if is the sane type
    std::cout << (typeid(*p) == typeid(Derived)) << std::endl;

    // Оператор typeid может работать с классамишаблонами.
    Data<int> a; 
    std::cout << (typeid(a) == typeid(Data<int>)) << std::endl;
    std::cout << (typeid(float).name()) << std::endl;
    
    return 0;
}
