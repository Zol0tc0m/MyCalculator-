#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	setlocale(LC_ALL, "Russian");
	int a, b;
	cout << "Введите первое число: ";
	cin >> a;
	cout << "Введите второе число: ";
	cin >> b;
	int j = a * b;
	int c = a / b;
	int v = a + b;
	int g = a - b;
	cout << "сумма чисел = " << v << endl;
	cout << "разность чисел = " << g << endl;
	cout << "умножение чисел = " << j << endl;
	cout << "деление чисел = " << c << endl;
	return 0;
}
