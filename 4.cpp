#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    unsigned int n;
    int i;
    bool Prime;
    Prime = true;
    cout << "������� ����������� ����� ��� ��������: ";
    cin >> n;
    if (n == 1)
    {
        cout << "����� " << n << " �� �������";
    }
    /*� ��������� ����� � ���������� ������� �� �������� ������� �� � �������, �� � ��������� ������,
    ��� ��� ��� �������� ������ ��� ������ ����� �������������� ���������� �� ������� ���������.*/
    else
    {
        i = 2;
        while (i <= sqrt(static_cast<double>(n)))
        {
            if (n % i == 0)
                Prime = false;
            i++;
        }
        if (Prime)
        {
            cout << "����� " << n << " �������";
        }
        else
        {
            cout << "����� " << n << " �� �������";
        }
    }
    return 0;
}