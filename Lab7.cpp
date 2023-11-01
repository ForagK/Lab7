#include <iostream>
#include "windows.h"
#include <iomanip>
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    float y, x, sum = 0, n;
    cout << "¬вед≥ть X: ";
    cin >> x;
    for (n = 1; n <= 5; n++);
    {
        sum += cos(n * x);
    }
    y = (log(sum)+2*x) / (pow(x, 4) + 5);
    cout << "\nY=" << y;
}