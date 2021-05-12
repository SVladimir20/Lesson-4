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
    cout << "Введите натуральное число для проверки: ";
    cin >> n;
    if (n == 1)
    {
        cout << "Число " << n << " не простое";
    }
    /*В настоящее время в математике принято не относить единицу ни к простым, ни к составным числам,
    так как это нарушает важную для теории чисел единственность разложения на простые множители.*/
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
            cout << "Число " << n << " простое";
        }
        else
        {
            cout << "Число " << n << " не простое";
        }
    }
    return 0;
}