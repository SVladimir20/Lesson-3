#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b;
	cout << "������� ����� �����: ";
	cin >> a;
	b = (a <= 21) ? (a - 21) : (2 * (a - 21));
	cout << "��������� ���������: " << b;
}