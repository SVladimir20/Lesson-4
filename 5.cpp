#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    unsigned short y;
    cout << "������� ��� �� 1 �� 3000: ";
    cin >> y;
    if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
    {
        cout << "��� " << y << " ����������";
    }
    else
    {
        cout << "��� " << y << " �� ����������";
    }
    return 0;
}