/* 
Напишите родовую функцию min(). возвращающую меньший из двух своих 
apryMeHToB. Например, версия функции min(3, 4) должна возвратить 3, а Bep 
сия min('c t , 'а')  а. Продемонстрируйте работу функции с ПОМОЩЬЮ прораммы. 
 */

#include <iostream>

template <typename T>
T min (T &a, T &b){
    return (a<b)? a : b; 
} 

int main(int argc, char const *argv[])
{
    int a = 10, b = 20; 
    char k = 'a', l = 'c'; 

    std::cout<< min(a,b) << std::endl; 
    std::cout<< min(k,l) << std::endl; 
   // std::cout<< min(k,b) << std::endl; // error  
    return 0;
}
