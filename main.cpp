#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

struct Command
{
  string type;
  int value;
};
int main()
{
  SetConsoleOutputCP(CP_UTF8);

  const int INDEX = 10;     // количество элементов в массиве
  string new_command = ";"; // отделяет команды
  string probel = " ";      // отделяет команду и значение

  Command commands[INDEX]; // массив команд

  string str = "move 50;height 30;rotate 40;";
  int j = 0;
  bool flag_type = true;
  string temp = "";

  for (int i = 0; i < str.size(); i++) // цикл пробегается по каждому символу строки и записывает отдельно команду и значение
  {
    if (str.substr(i, 1) == new_command)
    {
      commands[j].value = stoi(temp);
      temp = "";
      flag_type = true;
      j++;
    }
    else if (str.substr(i, 1) == probel)
    {
      flag_type = false;
    }
    else
    {
      if (flag_type == true)
      {
        commands[j].type = commands[j].type + str.substr(i, 1);
      }
      else
      {
        temp += str.substr(i, 1);
      }
    }
  }

  for (int i = 0; i < j; i++)
  {
    cout << "Команда:" << commands[i].type << endl;
    cout << "Значение:" << commands[i].value << endl;
  }

  system("pause");

  return 0;
}