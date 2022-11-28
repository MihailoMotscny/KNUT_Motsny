#include <iostream>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;


int main()
{

    double x, t, v, p;
    x = 5;


    cout << ("¬вед≥ть значенн€ t:");
    cin >> t;
    cout << ("¬вед≥ть значенн€ v:");
    cin >> v;
    cout << ("¬вед≥ть значенн€ p:");
    cin >> p;

    //обробка та вивод данних

    //завданн€ 1
    cout << "y=" << p + (v * v * v);

    //завданн€ 2
    p = 0;
    cout << "   p=" << log10(x);

    //завданн€ 3
    v = 0;
    cout << "   v=" << (sqrt(x + t)) / ((t * t) + (x * x));

}