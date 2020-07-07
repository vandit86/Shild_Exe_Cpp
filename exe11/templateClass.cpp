/* 
    Создайте родовой класс input, который при вызове конструктора делает сле 
дующее: 
· выводит на экранстрокуприrлашение, 
· получает данные от пользователя, 
· повторно выводит на экран строкуприrлашение, если вводимые данные 
не соответствуют заданному диапазону. 

 */

#include <iostream>

template <typename T>
class input
{
private:
    T m_max, m_min;
    const char *m_str;

public:
    input(const char *str, T min, T max); // constructor 
    bool ifOut(T val); // return true if out of range
    const char* getStr(){return m_str;}; 
};

template <typename T>
input<T>::input(const char *str, T a, T b) : m_str(str), m_min(a), m_max(b)
{
}

template<typename T>
bool input<T>::ifOut(T val){
    return (val > m_max || val < m_min); 
}

int main(int argc, char const *argv[])
{
    const char *str1 = "Enter nums"; 
    const char *str2 = "Enter chars";
    input<int> in1 (str1, 1,10); 
    input<char> in2 (str2, 'a','z'); 

    int a; 
    while (1){
        std::cout<< in1.getStr()<< std::endl;
        std::cin>>a; 
        if (!in1.ifOut(a)) break;
    }

    char b; 
    while (1){
        std::cout<< in2.getStr()<< std::endl;
        std::cin>>b; 
        if (!in2.ifOut(b)) break;
    }
    return 0;
}
