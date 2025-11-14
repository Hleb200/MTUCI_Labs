#include <iostream>
#include <cmath>

using namespace std;
void Get(float& a, float& b, float& h)
{
	setlocale(LC_ALL, "rus");
	start:
	system("cls");
	cout << "Введите нижнюю границу отрезка, верхнюю и шаг таблицы: ";
	cin >> a >> b >> h;
	if (cin.fail()) {
		cout << "Ошибка! введите корректное значение" << endl;
		cin.clear();
		cin.ignore(1000, '\n');
		system("PAUSE");
		goto start;
	}
	else if (abs(a) >= 10000 || abs(b) >= 10000) {
		cout << "Ошибка! Слишком большое значение" << endl;
		system("PAUSE");
		goto start;
	}
	else if (h >= b - a) {
		cout << "Ошибка! шаг не должен превышать размер промежутка определения х" << endl;
		system("PAUSE");
		goto start;
	}
	else if (h < 0) {
		cout << "Ошибка! шаг должен быть положительным" << endl;
		system("PAUSE");
		goto start;
	}
	else if (b < a) {
		cout << "Ошибка! верхняя граница должна быть больше нижней" << endl;
		system("PAUSE");
		goto start;
	}
	

}
void Put( int nPos) {
	setlocale(LC_ALL, "rus");
	cout << "Число положительных значений функции: " << nPos << endl;

}