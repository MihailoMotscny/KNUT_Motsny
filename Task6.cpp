#include <iostream>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;


int main()
{

    double x, y,e;
    e = 2.71;


    cout << ("������ �������� x:");
    cin >> x;
    cout << ("������ �������� y:");
    cin >> y;
    int s = 0;
    

    //������� �� ����� ������
    while (s=0)
    {

        if (1 - (9 * (y * y)) == 0)
        {
            cout << "³������: ��������� �� ���� ���������� 0 ";
            break;
        }
        else
        {
            if (9 * y == 0)
            {

                cout << "³������: ��������� �� ���� ���������� 0 ";
                break;
            }
            else
            {
                cout << "³������:  " << ((pow(e, y)) * (8 * (x * x)) + 3) / (1 - (9 * (y * y))) * (x + 0.5) / (9 * y);
                s += 1;
            }
        }
        
    
    
    
    }   


}