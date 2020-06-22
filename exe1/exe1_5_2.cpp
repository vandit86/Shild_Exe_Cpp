/*
    make a class card that support following operation : 
    show(): to show info 
    store() : , and has privit fields : autors name and num of copies 
     
     Создайте класс card, который поддерживает каталоr библиотечных карточек.
     Этот класс должен хранить заrлавие книrи, имя автора и выданное на рукичисло экземпляров книrи. 
     Заrлавие и имя автора храните в виде строки символов, а количество экземпляров  в виде целоrо числа. 
     Используйте OTKpЫтую функциючлен storeO для запоминания информации о книrах и 
     OTKpЫтую функциючлен show() для вывода информации на экран. 
     В функциюmainO включите краткую демонстрацию работы СОЗДанноrо класса.
*/
#include <iostream>
using namespace std;

class card
{
private:
    /* data */
    string title;
    string autor;
    short num; // num of copies
public:
    void store(string title, string name, short num);
    void show();
};

void card::show()
{
    cout << title << " " << autor << " " << num << endl;
}

void card::store(string t, string n, short m)
{
    title = t;
    autor = n;
    num = m;
}

int main(int argc, const char *argv[])
{
    /* test class functionality */
    card c;
    c.store("title", "autor", 5);
    c.show();
    return 0;
}
