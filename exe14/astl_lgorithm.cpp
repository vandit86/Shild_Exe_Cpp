#include <iostream>
#include <vector>
#include <algorithm>

using namespace std ; 

//RETURN TRUE IF imPAR 
bool even (int x){
    return (x%2); 
}

void print_v (const vector<int>& v){
    for (auto& l : v){
        cout<< l << " " ; 
    }
    cout << endl; 
}
int main(int argc, char const *argv[])
{
    vector<int> m_v ; 

    for (size_t i = 0; i < 10; i++)
    {
        m_v.push_back(rand()%10); 
    }
    print_v(m_v); 

    // COUNT ELEMENTS THAT CORRESPOND TO CONDITION IN FUNCTION 
    size_t num = count_if(m_v.begin(), m_v.end(), even); 
    cout << "Even elemenst :" << num << endl; 

    // REPLACE COPY 
    vector<int> m_v2 (10);      // must be sufficiently large   
    replace_copy (m_v.begin(), m_v.end(),m_v2.begin(),3,-1); 
    print_v(m_v2); 

    // REVERCE vector 
    reverse_copy (m_v.begin(), m_v.end(), m_v2.begin()); 
    print_v(m_v2); 

    sort(m_v2.begin(), m_v2.end()); 
    print_v(m_v2); 

    vector<int> m_v3 (10);
    unique_copy(m_v2.begin(), m_v2.end(),m_v3.begin()); 
    print_v(m_v3); 


    return 0;
}
