#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int c;
    const int a = 4;
    const int b = 6;
    c = a + b;
    if (a == 10 && b == 10 || c == 10)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    return 0;
}