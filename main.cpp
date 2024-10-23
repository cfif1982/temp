#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    
    string str = "move 50";

    string to_find = " ";
    size_t found = str.find(to_find); //здесь хранится позиция пробела

    string com = str.substr(0, found);
    int num = stoi(str.substr(found + 1));

    return 0;
}