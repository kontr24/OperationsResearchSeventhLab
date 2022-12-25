#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <stdio.h>
#include <math.h>
#include <ctime>
#include <cstdlib>
using namespace std;

#include <iostream>


double fact(double  n) {
	double  F = 1;
	if (n <= 0)
		return 1;
	if (n > 0)
	{
		for (int i = 1; i <= n; i++)
			F = F * i;

	}
	return F;
}



int main()
{
	SetConsoleOutputCP(65001);
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	SetConsoleTitleA("Лаб7:\n");

	double bilet, cena, veroyatost, bez, formula, p1, p2, p3, p4, p5, p6, s0, s1, s2, s3, s4, s5, cena2, cena3, cena4, cena5, M;

	p1 = 0.6;
	p2 = 0.2;
	p3 = 0.1;
	p4 = 0.05;
	p5 = 0.00002;
	p6 = 0.04998;
	s0 = 0;
	s1 = 10;
	s2 = 20;
	s3 = 100;
	s4 = 1000;
	s5 = +1;

	while (true) {
		cout << "\nВведите цену билета:\n";
		cin >> cena;
		cout << "Введите количество билетов:\n";
		cin >> bilet;

		if (bilet == 1)
		{

			M = (p1 * s0 + p2 * s1 + p3 * s2 + p4 * s3 + p5 * s4 + p6 * s5) - cena;
			cout << "Математическое ожидание:\n" << M;
		}

		if (bilet == 2)
		{
			cena2 = (cena - ((cena / 100) * 10)) + cena;
			M = (p1 * s0 + p2 * s1 + p3 * s2 + p4 * s3 + p5 * s4 + p6 * s5) - cena2;
			cout << "Математическое ожидание:\n" << M;
		}

		if (bilet == 3)
		{
			cena3 = (cena - ((cena / 100) * 15)) + cena;
			M = (p1 * s0 + p2 * s1 + p3 * s2 + p4 * s3 + p5 * s4 + p6 * s5) - cena3;
			cout << "Математическое ожидание:\n" << M;
		}

		if (bilet == 4)
		{
			cena4 = (cena - ((cena / 100) * 20)) + cena;
			M = (p1 * s0 + p2 * s1 + p3 * s2 + p4 * s3 + p5 * s4 + p6 * s5) - cena4;
			cout << "Математическое ожидание:\n" << M;
		}
		if (bilet == 5)
		{
			cena5 = (cena - ((cena / 100) * 25)) + cena;
			M = (p1 * s0 + p2 * s1 + p3 * s2 + p4 * s3 + p5 * s4 + p6 * s5) - cena5;
			cout << "Математическое ожидание:\n" << M;
		}
	}

	/*cout << "Введите p1(веротность):\n";
	cin >> veroyatost;
	cout << "Если билет без выйгрыша введите 0:\n";
	cin >> bez;

	formula = pow(veroyatost, bez) * pow((1 - veroyatost), bilet);

	cout << "Веротность того, что из " << bilet << " билета ,будет 0 выйгрышных:\n"<< formula;*/



}

