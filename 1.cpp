//�������� ���� ������� �4, �������������� - 4.cpp
#include <iostream>
using namespace std;
int main()
{
	extern const int a;
	extern const int b;
	extern const int c;
	extern const int d;
	setlocale(LC_ALL, "Russian");
	double Result;
	Result = a * (b + (c / static_cast <double> (d)));
	cout << "��������� ����������: " << Result;
	return 0;
}