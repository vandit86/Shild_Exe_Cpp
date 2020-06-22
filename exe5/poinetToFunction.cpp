/* 
Ниже приведены Две переrруженные функции. Покажите, как получить aд 
рес каждой из них. 
 */
#include<iostream>

float diff (float a , float b){
    return a-b; 
}

double diff (double a , double b){
    return a-b ; 
}

int main(int argc, char const *argv[])
{
    /* pointer to the function */
    float (*pf)(float,float) = diff; 
    double (*pd)(double,double) = diff; 

    // diff(5,1); // compilation error: umbigouse 
    std::cout<< pf(5,1) << std::endl; 
    std::cout<< pd(5.0,1) << std::endl; 
    return 0;
}
