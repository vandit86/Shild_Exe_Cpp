/*
using queue stl
Создайте класс с циклической очередью целых. Cделайте очередь длиной 100целых. 
В функцию mainO включите краткую демонстрацию ее работы.

output for queue size = 5 : 
0
01
012
0123
01234
12345
23456
34567
45678
56789

*/

#include <iostream>
#include <queue>

using namespace std;

class FixedQueue
{
private:
    /* data */
    int size;
    queue<int> qt;

public:
    FixedQueue(int s);
    ~FixedQueue();
    void push(int val);
    int pop();
    void printQueue();
};

FixedQueue::FixedQueue(int s)
{
    size = s;
}

FixedQueue::~FixedQueue()
{
}

void FixedQueue::push(int val)
{
    if (qt.size() == size)
    {
        qt.pop();
    }
    qt.push(val);
}

int FixedQueue::pop()
{
    return qt.front();
}

void FixedQueue::printQueue()
{
    for (size_t i = 0; i < qt.size(); i++)
    {

        cout << *(&(qt.front()) + i);
    }
    cout<<endl; 
}

int main(int argc, char const *argv[])
{
    /* using stl queue to resolve  */
    FixedQueue q(5);

    for (size_t i = 0; i < 10; i++)
    {
        q.push(i);
        q.printQueue();
    }
    return 0;
}
