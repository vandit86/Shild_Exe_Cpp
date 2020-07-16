#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    string str("test string");
    cout << str << endl;

    string str2(str);

    sort(str.begin(), str.end());
    cout << str << endl;

    str.swap(str2);
    cout << str << endl;
    cout << str2 << endl;

    if (str != str2)
        cout << "not equal \n";
    else
        cout << "equal\n";

    for (auto& i : str){
        cout << i << " ";  
    }
    cout << endl; 

    str = str + str2;       // concat 
    cout << str << endl;

    str2.assign(str,12,5);  // put to str2 5 chars from pos 12 of str
    cout << str2 << endl;
    
    str2.insert(2,5,'0');   // insert 5 '0' from pos 2
    cout << str2 << endl;

    str2.erase(2,2);        // remove 2 chars from pos 2
    cout << str2 << endl;

    str2.find('0'); // find firs occurence of '0'

    cout << "enter string \n"; 
    cin >> str2; 

    cout << str2 << endl;

    return 0;
}
