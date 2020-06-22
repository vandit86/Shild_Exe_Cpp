#include <iostream>

class aType
{
private:
    double a, b;

public:
    void set(double a, double b);
    double get_a() { return a; };
    aType();
    ~aType();
};

void aType::set(double a, double b = 0)
{
    std::cout << "set " << a << b << "\n";
    this->a = a;
    this->b = b;
}
aType::aType()
{
}

aType::~aType()
{
    std::cout << "destcuctor " << a << b << "\n";
}

int main(int argc, char const *argv[])
{
    // static memmory
    {
        aType sArr[2][5];
        for (size_t i = 0; i < 2; i++)
        {
            for (size_t j = 0; j < 5; j++)
            {
                /* initialize objects  */
                sArr[i][j].set(i, j);
            }
        }
    }

    // dynamic memmory allocation
    aType **arr = new aType *[2]; // using explicit constructor
    for (size_t i = 0; i < 2; i++)
    {
        arr[i] = new aType[5];
    }

    for (size_t i = 0; i < 2; i++)
    {
        for (size_t j = 0; j < 5; j++)
        {
            /* initialize objects  */
            arr[i][j].set(i, j);
        }
    }

    for (size_t i = 0; i < 2; i++)
    {
        delete[] arr[i];
    }

    delete[] arr;
    return 0;
}
