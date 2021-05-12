#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    unsigned short y;
    cout << "Введите год от 1 до 3000: ";
    cin >> y;
    if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
    {
        cout << "Год " << y << " високосный";
    }
    else
    {
        cout << "Год " << y << " не високосный";
    }
    return 0;
}