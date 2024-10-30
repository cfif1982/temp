#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

struct Command
{
  string type;
  int value;
} int main()
{
  SetConsoleOutputCP(CP_UTF8);

  Command com;

  string str = "move 50";
  string strCommand = ""; // Здесь хранится команда
  string number_str = "";
  int num = 0;

  for (size_t i = 0; i < str.size(); i++)
  {
    if (str[i] == ' ')
    {
      number_str = str.substr(i + 1);
      // break;
    }
    else
    {
      strCommand += str[i];
    }

    com.type = strCommand;
    num = stoi(number_str); // Здесь хранится значение
    com.value = num;
  }

  cout << "Команда:" << com.type << endl;
  cout << "Значение:" << com.value << endl;

  return 0;
}