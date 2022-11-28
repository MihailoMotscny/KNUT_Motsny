#include <iostream>
#include <string>
#include <math.h>

using namespace std;


int main()
{

    double A, B, C;
    A = 26.17;
    B = 27.58;
    C = 38.05;

    //обробка та вивод данних

    cout << "Медіана m(b):" << (sqrt((2 * (A * A)) + (2 * (C * C)) - (B * B))) * 0.5;
    cout << "  Бісектриса W(a):" << (sqrt((A * B) * ((A + B + C) * (A + B - C)))) / (A + B);
}