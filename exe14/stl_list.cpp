#include <iostream>
#include <list>

// standart c++ iteration style using iterator object 
void printList (const std::list<int> &l){
    for (std::list<int>::const_iterator p = l.cbegin() ; p!=l.cend() ; p++){
        std::cout<< *p << " "; 
    }
    std::cout<< std::endl; 
}

// c11 style of iterating throw list 
void printList_11 (const std::list<int>& l){
    for (auto& val: l){
        std::cout<< val << " "; 
    }
    std::cout<< std::endl; 
}

int main(int argc, char const *argv[])
{
    std::list<int> la; // empty list
    std::list<int> lb; 

    for (int i = 0; i < 10; i += 2)
    {
        la.push_back(i); 
        /* code */
    }
    printList(la);
    for (int i = 1; i < 10; i++)
    {
        lb.push_back (rand()%10); 
    }
    printList_11 (lb); 

    la.insert( (--la.end()), 7);   // insert before last pos
    printList_11 (la); 

    // reverce iteration throw list 
    std::list<int>::reverse_iterator ri = la.rbegin(); 
    for (; ri !=la.rend(); ri++){
        std::cout<< *ri << " ";
    }
    std::cout<< std::endl;

    la.merge(lb);   // merge  
    printList_11 (la); 
    return 0;
}
