#include <iostream>

class summation
{
private:
    /* data */
    long sum;

public:
    summation(int n);
    ~summation();
    long show_sum(){ return sum; };
};

summation::summation(int n)
{
    sum = 0;
    for (size_t i = 0; i < n; i++)
    {
        sum += i;
    }
}

summation::~summation()
{
}

summation make_sum(int num)
{
    summation s = summation (num); 
    
    return s; 
}

int main(int argc, char const *argv[])
{
    std::cout << "Input number\n";
    int num;
    std::cin >> num;
    summation s = make_sum(num);
    std::cout << "sum is \t"<< s.show_sum() ;
    return 0;
}
