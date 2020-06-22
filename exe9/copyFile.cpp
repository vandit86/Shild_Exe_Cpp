/* 
Напишите проrрамму для копирования текстовorо файла. Эта проrрамма 
должна подсчитывать число копируемых символов и выводить на экран по 
лученный результат. Почему это число отличается от Toro, которое выводит 
ся при просмотре списка файлов каталоrа? 
 */

#include<iostream>
#include<fstream>

#define COPY "_copy"

using namespace std; 

void create_name_copy (string& outF ){
    size_t pos = outF.find('.'); 
    if(pos == string::npos) pos = outF.size(); 
    outF.insert(pos,COPY);  
}

int main(int argc, char const *argv[])
{
    if (argc != 2){ 
        cout<< "Enter file name \n";
        exit(1);  
    }

    string out_name = string(argv[1]);
    create_name_copy(out_name);  
    
    ifstream inF (argv[1]); // open file input stream
    if (! inF) exit(1); 
    //inF.unsetf(ios::skipws); 
    ofstream outF (out_name);
    if (! outF) exit(1); 

    // read and copy file by symbols    
    long count =0 ; // num of symbols 
    char ch; 
    while (!inF.eof()){
        inF.get(ch);
        count ++; 
        outF<<ch; // write to the copy file 
    }

    inF.close();
    outF.close(); 

    cout <<"Number of symbols copyed: "<< count << endl; 

    return 0;
}


