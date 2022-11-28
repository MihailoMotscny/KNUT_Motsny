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
    cout << ("Введіть одного номера:");
    cin >> x;
    cout << "Введіть період видання:";
    cin >> y;


    //обробка та вивод данних

    cout << "Ціна підписки на рік:" << (x * y)*12;

}