// Lab_03_2.cpp
// < Кісіль Юрій >
// Лабораторна робота № 3.2
// Розгалуження, задане формулою: функція з параметрами.
// Варіант 7
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x; // вхідний аргумент
    double a; // вхідний параметр
    double b; // вхідний параметр
    double c; // вхідний параметр
    double F; // результат обчислення виразу
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    cout << "x = "; cin >> x;


    if (x < 5 && c != 0)
        F = -a * pow(x, 2) - b;
    else
        if (x > 5 && c == 0)
            F = (x - a) / x;
        else
            F = -x / c;

 
    /*
    if (x < 5 && c != 0)
        F = -a * pow(x, 2) - b;
    if (x > 5 && c == 0)
        F = (x - a) / x;
    if (!(x < 5 && c != 0) && !(x > 5 && c == 0))
        F = -x / c;
    */

    cout << " F = " << F << endl;
    cin.get();
    
    return 0;
}
