#include <iostream>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;


int main()
{

    double x, t, v, p;
    x = 5;


    cout << ("������ �������� t:");
    cin >> t;
    cout << ("������ �������� v:");
    cin >> v;
    cout << ("������ �������� p:");
    cin >> p;

    //������� �� ����� ������

    //�������� 1
    cout << "y=" << p + (v * v * v);

    //�������� 2
    p = 0;
    cout << "   p=" << log10(x);

    //�������� 3
    v = 0;
    cout << "   v=" << (sqrt(x + t)) / ((t * t) + (x * x));

}