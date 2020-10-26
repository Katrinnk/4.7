// Lab_04_7.cpp
// Колмикова Катерина Сергіївна
// Лабораторна робота № 4.7
// Обчислення суми ряду Тейлора за допомогою ітераційних циклів та рекурентних співвідношень.
// Варіант 12
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double xp, xk, x, dx, eps, F, a = 0, R = 0, S = 0;
	int n = 0;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << fixed;
	cout << "-------------------------------------------------" << endl;
	cout << "|" << setw(10) << "x" << " |"
		<< setw(10) << "atan(x)" << " |"
		<< setw(10) << "F" << " |"
		<< setw(10) << "n" << " |"
		<< endl;
	cout << "-------------------------------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		n = 0; // вираз залежить від умови завдання варіанту
		a = 1; // вираз залежить від умови завдання варіанту
		S = a;
		do {
			n++;
			R = pow(-1, n + 1) / (2 * n + 1) * pow(x, 2 * n + 1); // вираз залежить від умови завдання варіанту
			a *= R;
			S += a;
			F = (-(4 * atan(1.0)) / 2) + S;
		} while (x < -1.0);

		cout << "|" << setw(10) << setprecision(2) << x << " |"
			<< setw(10) << setprecision(5) << atan(x) << " |"
			<< setw(10) << setprecision(5) << F << " |"
			<< setw(10) << n << " |"
			<< endl;
		x += dx;
	}
	cout << "-------------------------------------------------" << endl;
	return 0;
}