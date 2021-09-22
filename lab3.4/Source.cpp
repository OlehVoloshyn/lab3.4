// Lab_03_4.cpp
// < Волошин Олег >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 3
#include <iostream>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double y; // вхідний аргумент
	double R; // вхідний параметр
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	// розгалуження в повній формі
	if (((x >=-R) && (x<0) && (y<=R-sqrt(R*R-(x+R)*(x+R))) && (y>=-R))  ||
		((0<=x) && (x<=R) && (y>=-R+sqrt(R*R-(x-R)*(x-R)))&& y<=R) )
		
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}