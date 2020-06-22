
// random numbers fro 1 to 10

#include <iostream>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    srand((unsigned)time(0)); // used as a seed 
    for (size_t i = 0; i < 100; i++)
    {
        /* code */
        std::cout << rand() % 10 + 1 << " ";
    }
    std::cout << std::endl;

    return 0;
}
