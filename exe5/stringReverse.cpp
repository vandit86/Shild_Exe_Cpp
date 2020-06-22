/* 
Создайте функцию reverse() с двумя параметрами. Первый параметр 
str  это указатель на строку, порядок следования символов в которой, 
после возвращения функцией cBoero значения, должен быть заменен на 
обратный. Второй параметр COU"t задает количество переставляемых в 
строке str символов. Значение COU"t по умолчанию должно быть таким, 
чтобы в случае ero задания функция reverseO меняла порядок следова 
ния символов в целой строке. 

 */

#include<iostream>
#include<string.h>


/* 
    count is number of reverced chars, 0 for all string  
 */
void reverseString (char* str , size_t count = 0 ){
    
    size_t size = strlen(str);  
    size = (size < count || count == 0) ? size : count; 

    for (size_t i = 0, j=size-1; i < j; i++, j--)
    {
        char tmp = str[i];
        str[i] = str[j]; 
        str[j]= tmp;  
    }
    
}

int main(int argc, char const *argv[])
{
    char str [] = "tetst string"; 
    std::cout<< str << std::endl;
    reverseString(str);  
    std::cout<< str << std::endl; 
    reverseString(str,5);  
    std::cout<< str << std::endl; 
    return 0;
}
