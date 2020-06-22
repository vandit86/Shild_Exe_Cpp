/*
    Создайте функцию min(),которая возвращает наименьший из двух численных aprYMeHToB, 
    используемых при вызове функции. Переrрузите функцию min() так, чтобы она воспринимала 
    в качестве apryмeHToB символы, целые и действительные двойной точности.

    and using 
*/

#include <iostream>

char min(char a, char b);
int min(int a, int b);
double min(double a, double b);

int main(int argc, char const *argv[])
{
    {
        using namespace std; 
        cout << min('a', 'b') << endl;
        cout << min(1, 10) << endl;
        cout << min(1.3, 10.1) << endl;
    }

    std::cout << "using stl: " << std::min(1.3, 10.1) << std::endl;
    return 0;
}

char min(char a, char b)
{
    return (a < b) ? a : b;
}

int min(int a, int b)
{
    return (a < b) ? a : b;
}

double min(double a, double b)
{
    return (a < b) ? a : b;
}
