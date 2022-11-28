#include <iostream>
#include <string>
#include <math.h>

using namespace std;


int main()
{

    double a;
    cout << ("¬вед≥ть значенн€ а:");
    cin >> a;

    //обробка та вивод данних

    cout <<"Z1:  " << (((((2 * a) + (a * a)) / 1 + a + (a * a)) + ((2 * a) - (a * a)) / 1 - a - (a * a)) + 0.5) * (5 - (2 * (a * a)));
    cout <<"    Z2:  " << (4 - (a * a)) / 2;
}