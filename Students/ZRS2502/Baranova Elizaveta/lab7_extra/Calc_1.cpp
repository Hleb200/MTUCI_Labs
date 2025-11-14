#include <iostream>
#include <cmath>
#include <iomanip>
#include <fstream>
//#include <string>
//#include <sstream>
using namespace std;
double func(double x);
float func(float x);
//void rovn(float x, float y, int& lx, int& ly);
void RegCikl(float a, float b, float h, int& nPos) {
	setlocale(LC_ALL, "rus");
	ofstream file("results.txt");
	int n = int((b + h / 2 - a) / h) + 1;
	nPos = 0; 
	float x, y;
	int lx, ly;
	file << "\tx \ty" << endl;
	cout << endl << " Таблица значений функции" << endl;
	cout << " +---------------+---------------+" << endl;
	cout << " | " << setw(8) << "x" << setw(8) << " | " << setw(8) << "y" << setw(8) << " | " << endl;
	cout << " +---------------+---------------+" << endl;
	for (int i = 1; i <= n; i++)
	{
		x = a + (i - 1) * h;
		y = func(x);
		//rovn(x, y, lx, ly);
		if (y > 0) nPos++;
		file << "\t" << x << "\t" << y << endl;
		cout << " | " << setw(13) << x  << " | " << setw(13) << y  << " | " << endl;
	}
	cout << " +---------------+---------------+" << endl;
	file << nPos << " - Количество положительных значений функции";
}
float func(float x)
{
	if (x <= 0) {
		return x * x - 1;
	}
	else if (x <= 1.5) {
		return cos(x);
	}
	else {
		return sin(x - 1);
	}
}
// совершенно излишне, так как переменная однозначно float
double func(double x)
{
	if (x <= 0) {
		return x * x - 1;
	}
	else if (x <= 1.5) {
		return cos(x);
	}
	else {
		return sin(x - 1);
	}
}

void rovn(float x, float y, int& lx, int& ly) {
	string stringX;
	string stringY;
	stringstream ssx;
	ssx << x;
	stringX = ssx.str();
	stringstream ssy;
	ssy << y;
	stringX = ssy.str();
	lx = stringX.length();
	ly = stringY.length();
	cout << ly << " " << lx;
	ly = (13 - ly) / 2;
	lx = (13 - lx) / 2;
}