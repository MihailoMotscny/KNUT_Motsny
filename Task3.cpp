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

    //������� �� ����� ������

    cout << "������ m(b):" << (sqrt((2 * (A * A)) + (2 * (C * C)) - (B * B))) * 0.5;
    cout << "  ���������� W(a):" << (sqrt((A * B) * ((A + B + C) * (A + B - C)))) / (A + B);
}