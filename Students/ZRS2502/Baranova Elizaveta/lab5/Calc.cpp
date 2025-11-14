#include <iostream>
#include <cmath> 
#define _USE_MATH_DEFINES 
#include "math.h" 

double Comp(double, int, double);
// вычисление периметра, вызываем функцию вычисления стороны
void CompP(int n, double R, double& a, double& P) {
	P = Comp(R, n, a) * n;
}
// функия вычисления стороны
double Comp(double R, int n, double a) {
	a = 2 * R * sin(M_PI / n);
	return a;
}
