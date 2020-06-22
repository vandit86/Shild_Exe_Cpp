#include<iostream>

class A
{
private:
    int a; 
public:
    A(int val){ a = val; };
    int get_A(){return a;};
};

class B
{
private:
    int b ; 
public:
    B(int val){
        b = val;
    };
    int get_B(){return b;};
};


class C : public A, public B
{
private:
    int c; 
public:
    C(int a, int b, int c):A(a),B(b){
        this->c = c;  
    };
    int get_C(){return c;};
};


int main(int argc, char const *argv[])
{
    C cobj(1,2,3);  // pass all the parameters to constructor  
    std::cout << cobj.get_A() << " " << cobj.get_B() << " "<< cobj.get_C() << "\n ";    
    return 0;
}



