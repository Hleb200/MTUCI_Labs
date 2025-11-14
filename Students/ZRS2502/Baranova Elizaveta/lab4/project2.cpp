#include <iostream> 
#include <cmath> 
#define _USE_MATH_DEFINES 
#include <math.h>
using namespace std;

// описание функции (прототип)
double func2(double x, double y);

int main()
{
	setlocale(LC_ALL, "rus");
	printf("%40s\n", "Выполняется второй проект");
	double x, y, t;
	cout << " Ввод x= ";
	cin >> x;
	cout << endl << "Ввод y= ";
	cin >> y;
	t = func2(x, y); // Вызов функции func1 
	cout << endl << "результат z= " << t << endl;
	//	cout << x << endl;
	system("PAUSE");
	return 0;
}

// Определение функции func2 
double func2(double x, double y)
{
	double t; // Локальный объект 
	t = cos(M_PI / 7) * (pow(sin(x - 8 * y), 2) / 2, 7 * (x - M_PI));
	//	x++;
	//	cout << x << endl;
	//	cout << y << endl;
	return t;// Возврат t в вызывающую функцию 
}
