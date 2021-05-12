#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double a, b, c;
    cin >> a >> b;
    c = a + b;
    if (c >= 10 && c <= 20)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    return 0;
}