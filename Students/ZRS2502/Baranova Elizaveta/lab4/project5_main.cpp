#include <iostream> 
#include <cmath> 
#define _USE_MATH_DEFINES 
#include "math.h" 
using namespace std;

// описание функции (прототип)
double func2(double x, double y);

int main()
{
	setlocale(LC_ALL, "rus");
	printf("%40s\n", "Выполняется пятый проект");
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
