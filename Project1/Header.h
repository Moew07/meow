#pragma once
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

double f(double x) {	//решение подынтегрального выражения
	return 1 / (x * log(x));
}

double reshenie(double a, double b, int n) {
	double I;	//решение интеграла
	double s = (f(a) + f(b)) / 2;
	double h = (b - a) / n;
	for (int i = 1; i <= n - 1; i++)
	{
		s += f(a + i * h);
	}
	I = h * s;
	return I;
}
