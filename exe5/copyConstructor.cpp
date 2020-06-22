/*
Конструктор копий вызывается и в тех случаях, Korдa ФУНКllИЯ rенерирует 
временный объект, используемый в качестве ее возвращаемоrо значения (для 
тех функций. которые возвращают объекты). Зная это, рассмотрим следую 
щий результат работы проrраммы: 

*/

#include <iostream>

class myClass
{
private:
    int* p ; 
public:
    myClass(int val);
    ~myClass();
    myClass(const myClass &obj); // copy constructor 
    int getP(){return *p;}; 
};

myClass::myClass(int val)
{
    std::cout<< "constructor"<< std::endl; 
    p = new int(val);
    if (!p) exit(1);  
}

myClass::~myClass()
{
    std::cout<< "destructor"<< std::endl; 
    delete p; 
}
// copy constructor 
myClass::myClass( const myClass& obj){
    std::cout<< "copy constructor"<< std::endl; 
    p = new int ((*obj.p)); 
    if (!p) exit(1); 
}

void printMyClass (myClass obj){
    std::cout<< obj.getP()<< std::endl; 
}

int main(int argc, char const *argv[])
{
    myClass c1(10); 
    printMyClass(c1);
    printMyClass(c1);
    return 0;
}
