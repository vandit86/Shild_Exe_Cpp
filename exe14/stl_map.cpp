#include <iostream>
#include <map>
using namespace std; 

// just print map using the referance 
void print_map (map<char,int>& m){
    for (auto& v : m){
        cout << v.first << " : " << v.second << endl; 
    }
} 

int main(int argc, char const *argv[])
{
    map<char,int> m_map ; 

    for (int i = 0; i < 10; i++)
    {
        // pair<char,int> p ('a'+i,1); // also work  
        // m_map.insert(p); 
        
        // CANNOT overwrite existing key 
       if (!m_map.insert(make_pair('a'+rand()%10, rand()%10+i)).second){
           cout << "key " << (char)('a'+i) << " exists\n";
           --i;
       }
    }
     
    m_map['a'] = 0;  // CAN overwrite existing key 
    m_map['k'] = 0;  // add new k,v pair to the map 
    
    // FIND ELEMENT IN MAP USING ITERATOR 
    map<char,int>::iterator it_map ; 
    it_map = m_map.find('j'); 
    if (it_map != m_map.end()){
        cout<< " val : " << it_map->second << endl; 
    }
    else {
        cout<< "not found \n" ; 
    }

    // FIND VAL BY KEY, AND INSERT THIS VALUE IF NOT FOUNT IN MAP 
    int val = m_map['m'];            
    cout<< " val : " << val << endl; 

    print_map (m_map); 
    return 0;
}

