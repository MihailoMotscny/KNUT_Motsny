#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;


int main()
{

    float x, y;


    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    //�������� ������
    cout << ("������ ��'�� ����:");
    cin >> x;
    cout << "������ ���� �������� �� ���:";
    cin >> y;


    //������� �� ����� ������

    cout << "ֳ�� ��������:" << x * y;

}