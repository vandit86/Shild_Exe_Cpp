#include <iostream>

class pr
{
public:
    int printing = 0;
    void setPrinting(int p) { printing = p; }
};

class pr1 : public pr
{
public:
    friend void inUse(pr& o);
};

class pr2 : public pr
{
public:
    friend void inUse(pr& o);
};

void inUse(pr& o) { o.printing = 1; }

int main(int argc, char const *argv[])
{
    /* code */
    pr1 p1;
    pr2 p2;

    std::cout << "p1 printed : " << p1.printing << std::endl;
    std::cout << "p2 printed : " << p2.printing << std::endl;
    inUse(p2);
    std::cout << "p1 printed : " << p1.printing << std::endl;
    std::cout << "p2 printed : " << p2.printing << std::endl;

    return 0;
}
