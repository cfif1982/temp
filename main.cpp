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

  const int INDEX = 10; //количество элементов в массиве
  string new_command = ";"; //отделяет команды
  string type_or_value = " "; //отделяет команду и значение

  Command commands[INDEX]; //массив команд 

  string str = "move 50;height 30;rotate 40";
  //string number_str = "";
  for(int j = 0; j < INDEX; ) //цикл для целой команды
  {
    for(int i = 0; i < str.size(); i++) //цикл пробегается по каждому символу строки и записывает отдельно команду и значение
    {
      if(str.substr(i, 1) != type_or_value)
      {
        commands[j].type = str.substr(i, 1);
      } else if(str.substr(i, 1) == new_command)
      {
        j++;
        break; //выходим из цикла, т.к. нашли следующую команду
      } else if(str.substr(i, 1) == type_or_value)
      {
        commands[j].value = stoi(str.substr(i + 1)); //число записывается полностью
      }
    }
  }
    

  /*
  тебе нужно завести переменную, в которой ты будешь хранить индекс в массиве команд 
  когда ты определилась с командой и ее параметрами, тогда создаешь саму команду и вставляешь ее в массив по нужному индексу
  для определения начала команды и т.д. рекомендую завести переменную
  пока подробности говорить не буду - сама подумай)))
  ну всё пока, а то так весь код за тебя напишу)))
  
  */

  /*for(int i = 0; i < str.size(); i++)
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
  }*/

  // com.type = strCommand;
  // num = stoi(number_str); // здесь хранится значение
  // com.value = num;

  for (int i = 0; i < INDEX; i++)
  {
    cout << "Команда:" << commands[i].type << endl;
    cout << "Значение:" << commands[i].value << endl;
  }

  system("pause");

  return 0;
}