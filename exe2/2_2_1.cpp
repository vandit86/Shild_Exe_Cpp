#include <iostream>

class stack
{
private:
    /* data */
    char *p; // ptr to stack
    int pos = 0, size = 0;

public:
    stack(size_t size);
    ~stack();

    void push(char c)
    {
        if (pos == size && pos!=0 && size > 0)
            return;
        p[pos++] = c;
    }

    void print()
    {
        for (size_t i = 0; i < pos; i++)
        {
            std::cout << p[i] << "  ";
        }

        std::cout << "::: pos "<< pos<<   std::endl;
    }
};

stack::stack(size_t size)
{
    p = new char[size];
}

stack::~stack()
{
    delete[] p;
}

int main(int argc, char const *argv[])
{
    stack s = stack(10);
    for (size_t i = 0; i < 5; i++)
    {
        s.push('a'+i);
        s.print();
    }

    return 0;
}
