#include <iostream>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;


int main()
{

    double x, y,e;
    e = 2.71;


    cout << ("Введіть значення x:");
    cin >> x;
    cout << ("Введіть значення y:");
    cin >> y;
    int s = 0;
    

    //обробка та вивод данних
    while (s=0)
    {

        if (1 - (9 * (y * y)) == 0)
        {
            cout << "Відповідь: знаменник не може дорівнювати 0 ";
            break;
        }
        else
        {
            if (9 * y == 0)
            {

                cout << "Відповідь: знаменник не може дорівнювати 0 ";
                break;
            }
            else
            {
                cout << "Відповідь:  " << ((pow(e, y)) * (8 * (x * x)) + 3) / (1 - (9 * (y * y))) * (x + 0.5) / (9 * y);
                s += 1;
            }
        }
        
    
    
    
    }   


}