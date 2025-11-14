#include <iostream> 
#include <cmath> 
#define _USE_MATH_DEFINES 
#include "math.h" 
using namespace std;

// описание функции (прототип)
template<typename T> void func3(T, T, T&);

int main()
{
	setlocale(LC_ALL, "rus");
	printf("%40s\n", "Выполняется третий проект.Использование шаблона функции");
	double x, y, t;
	cout << " Ввод x= ";
	cin >> x;
	cout << endl << "Ввод y= ";
	cin >> y;
	func3(x, y, t); // Вызов функции func1 
	cout << endl << "результат z= " << t << endl;
	//	cout << x << endl;
	system("PAUSE");
	return 0;
}

// Определение функции func2 
template<typename T> void func3(T x, T y, T& t)
{
	t = cos(M_PI / 7) * (pow(sin(x - 8 * y), 2) / 2, 7 * (x - M_PI));
}
