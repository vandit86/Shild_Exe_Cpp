/*
    создайте два производных класса rectangle и isosceles, которые наследуют базовый класс areacl. 
    Каждый класс должен включать в себя функцию area(),которая возвращает площадь соответственно прямоуrольника 
    (rectangle) иравнобедренноrо треуrольника (isosceles). Для инициализации переменныхheight и width 
    (высота и длина основания, соответственно) используйте KOHструктор с параметрами 
*/
#include <iostream>

class area_cl
{
public:
    double heigh;
    double width;
};

class rectangle : public area_cl
{

public:
    rectangle(double a, double b)
    {
        heigh = a;
        width = b;
    }
    double area()
    {
        return heigh * width;
    }
};

class isoscales : public area_cl
{

public:
    isoscales(double a, double b)
    {
        heigh = a;
        width = b;
    }
    double area()
    {
        return (heigh * width) / 2;
    }
};

int main(int argc, char const *argv[])
{
    rectangle r = rectangle(4.0, 5.0);
    isoscales a (3,4); 

    std::cout << "area rec " << r.area() << std::endl; 
    std::cout << "area iso " << a.area() << std::endl; 
    return 0;
}
