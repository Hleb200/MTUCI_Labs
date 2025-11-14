#include <iostream> 
#include <cmath> 
#define _USE_MATH_DEFINES 
#include "math.h" 
using namespace std;

double func2(double x, double y)
{
	double t; // Локальный объект 
	cout << "Вызов функции" << endl;
	t = cos(M_PI / 7) * (pow(sin(x - 8 * y), 2) / 2, 7 * (x - M_PI));
	return t;// Возврат t в вызывающую функцию 
}
