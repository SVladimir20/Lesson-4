#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int i;
    cout << "Нечётные числа:";
    for (i = 1; i < 50; i = i + 2)
    {
        cout << " " << i;
    }
    return 0;
}