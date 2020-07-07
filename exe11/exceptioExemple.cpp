
/* 
    try - catch expamle 
 */
#include <iostream>

// the function throw exception
void testFunction(int val)
{
    switch (val)
    {
    case 1:
        throw(std::overflow_error("from function"));
        break;
    case 2:
        throw;
    default:
        break;
    }
}

int main(int argc, char const *argv[])
{
    try
    {
        testFunction(1);
        std::cout << "interval " << std::endl; // never be called
    }
    catch (const std::exception &e)
    {
        std::cerr << "Error std" << '\n';
        std::cerr << e.what() << '\n';
    }
    catch (int i)
    {
        std::cerr << "error " << i << std::endl;
    }
    catch (...)
    {
        std::cerr << "some error \b ";
    }

    std::cout << "End " << std::endl; // never be called
    return 0;
}
