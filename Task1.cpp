#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;


int main()
{

    float x, y;


    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    //введення данних
    cout << ("Введіть об'єм баку:");
    cin >> x;
    cout << "Введіть ціну пального за літр:";
    cin >> y;


    //обробка та вивод данних

    cout << "Ціна пального:" << x * y;

}