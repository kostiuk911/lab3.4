// Lab_03_4.cpp
// < ������ ³���� ��������� >
// ����������� ������ No 3.4
// ������������, ������ ������� �������.
// ������ 10
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // ������� ��������
	double y; // ������� ��������
	double R;
	double b;
	double a;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;
	cout << "b = "; cin >> b;
	cout << "a = "; cin >> a;
	// ������������ � ����� ����
	if ((pow (x , 2) + pow (y , 2) >= pow (R , 2) && y <= b && x <= a && y >= x) ||
		(pow (x , 2) + pow (y , 2) <= pow(R, 2) && y <= x && y >= -b && x <= 0))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}

