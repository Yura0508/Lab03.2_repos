// Lab_03_4.cpp
// < Кісіль Юрій >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 7
#include <iostream>
using namespace std;
int main()
{
	double R; // вхідний аргумент
	double x; // вхідний аргумент
	double y; // вхідний параметр
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;
	
	// розгалуження в повній формі
	if ((x >= -2 * R && x <= 0 && y >=0 && y <= 2 * R && R > 0 && pow((x + R), 2) + pow((y - R), 2) <= pow(R, 2)) ||
		(y <= 0 && y >= -R && x >= 0 && x <= 2 * R && R > 0))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}
