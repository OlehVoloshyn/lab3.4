// Lab_03_4.cpp
// < ������� ���� >
// ����������� ������ � 3.4
// ������������, ������ ������� �������.
// ������ 3
#include <iostream>
using namespace std;
int main()
{
	double x; // ������� ��������
	double y; // ������� ��������
	double R; // ������� ��������
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	// ������������ � ����� ����
	if (((x >=-R) && (x<0) && (y<=R-sqrt(R*R-(x+R)*(x+R))) && (y>=-R))  ||
		((0<=x) && (x<=R) && (y>=-R+sqrt(R*R-(x-R)*(x-R)))&& y<=R) )
		
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}