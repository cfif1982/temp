#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

struct Command
<<<<<<< HEAD
{
  string type;
  int value;
};

int main()
{
  SetConsoleOutputCP(CP_UTF8);

  Command com[10];

  string str = "move 50;height 30;rotate 40";
  //string strCommand = ""; // Здесь хранится команда
  string number_str = "";
  int num = 0;

  for(int i = 0; i < str.size(); i++)
  {
    if(str[i] == ' ')
    {
      do
      {
        number_str = str.substr(i + 1); //ограничить значение до ;
      } while(str[i] != ';');
    } else if(str[i] == ';')
    {
      com[i].value = stoi(str.substr(i + 2));
    } else{
      while(str.substr(i) != ";")
      {
        com[i].type = str.substr(i);
      }
    }
  }
    
  //com.type = strCommand;
  //num = stoi(number_str); // здесь хранится значение
  //com.value = num;

  for(int i = 0; i < 10; i++) 
  {
  cout << "Команда:" << com[i].type << endl;
  cout << "Значение:" << com[i].value << endl;
  }

  //cout << "Команда:" << command << endl;
  //cout << "Значение:" << num << endl;

  system("pause");
=======
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
>>>>>>> ba60191f826055b1b7924c9b4f9ae74f16d5e8f1

  return 0;
}