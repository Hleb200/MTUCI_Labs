// «Разработка консольных проектов и решения VS  
// линейной структуры с использованием функций VC++» 
// 1 проект – функция func1 с входными параметрами и возвращаемым  
// значением вначале, а после нее программный код главной функции main 
#include <iostream> 
#include <cmath> 
#define _USE_MATH_DEFINES 
#include "math.h" 
using namespace std;

// Определение функции func1 
double func1(double x, double y)
{
	double t; // Локальный объект 
	t = cos(M_PI / 7) * (pow(sin(x - 8 * y), 2) / 2, 7 * (x - M_PI));

	return t;// Возврат t в вызывающую функцию 
} 
int main()
{
	setlocale(LC_ALL, "rus");
	printf("%40s\n", "Выполняется первый проект. Валидация пользовательского ввода.");
	double x, y, t, a;
	cout << " Ввод x и y " << endl;
	cin >> x;
	cin >> y;
	if (cin.fail()) {
		cout << "Ошибка! введите корректное значение" << endl;
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "Введите числа заново" << endl;
		cin >> x >> y;
	}
	a = 2.7 * (x - M_PI);
	if (abs(a) < 0.0001) {
		printf("Некорректное значение х, знаменатель слишком близок к 0, попробуйте снова"); //даем 1 шанс пользователю изменить х
		return 1;
	}
	t = func1(x,y); // Вызов функции func1 
	cout << endl << "результат z= " << t << endl;
//	cout << x << endl;
	system("PAUSE");
	return 0;
}
