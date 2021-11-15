//Массив из 20 символьных строк содержит информацию об изделиях мебельной фабрики.Каждая строка начинается с пробела.
//Следующие две цифры соответствуют номеру изделия, далее записано название изделия (Стол, Стул, Шкаф), затем параметры изделия(ширина, длина, высота).
//Пример одной из строк :
//12) Стол ширина - 75.5 см; длина - 90.8 см; высота - 80 см
//Составить программу для формирования символьной строки из номеров изделий, являющихся столами, площадь которых больше 0,8 м2.

#include <iostream>
#include <Windows.h>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

int const N = 20;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    vector <string> furniture;
    string line;
    ifstream F("list.txt");

    while (!F.eof())
    {
        getline(F, line);
        furniture.push_back(line);
    }

    for (int i = 0; i < N; i++)
    {
        cout << furniture[i] << endl;
    }
}