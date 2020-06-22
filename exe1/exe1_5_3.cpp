
/*
--
Создайте класс с циклической очередью целых. Cделайте очередь длиной 100целых. 
В функцию mainO включите краткую демонстрацию ее работы.
*/

#include <iostream>
#define MAX 10
using namespace std ; 

class CircularBuffer
{
private:
    /* data */
    int head=0, tail=0; // pos of cariers
    int arr[MAX];       

public:
    CircularBuffer();
    void push(int val); 
    int pop (); 
};

// constructor 
CircularBuffer::CircularBuffer()
{
    
}

int CircularBuffer::pop(){
    
    if (tail == MAX){
        tail =0 ; 
    }
        
    if (head == tail) {
        cout << "is empty\n";
        return 0; 
    }
    
    return arr[tail++] ; 
}

void CircularBuffer::push(int val){
    if (head == MAX){
        head = 0;
    }
    if (head == tail) {
        cout << "is full\n" ;
        return;  
    }

    arr [head] = val;
    cout << "inserted " << val << endl; 
    return; 
}

int main(int argc, char const *argv[])
{
    /* code */
    CircularBuffer cb; 
    for (size_t i = 0; i < 12; i++)
    {
        /* code */
        cb.push(i);
    }
    
    for (size_t i = 0; i < 12; i++)
    {
        cout<< "removed " << cb.pop() << endl; 
    }
    
    return 0;
}
