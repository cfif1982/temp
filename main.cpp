#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    
    string str = "move 50";
    string command = ""; //Здесь хранится команда
    string number_str = "";
    
    for(size_t i = 0; i < str.size(); i++)
    {
        if(str[i] == ' ')
        {
            number_str = str.substr(i + 1);
            break;
        } else
        {
            command += str[i];
        }
    }
    int num = stoi(number_str); //Здесь хранится значение

    cout << "Команда: " << command << endl;
    cout << "Значение: " << num << endl;

    return 0;
}