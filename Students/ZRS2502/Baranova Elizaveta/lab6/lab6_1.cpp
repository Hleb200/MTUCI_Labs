#include <iostream>
#include <cmath>
#include <fstream>
#include <iomanip>

//#include "point.h"
//#include "geometry.h"

using namespace std;

void GetXY(float&, float&);
void Put(bool, float, float);
bool Resh1(float, float);
bool Resh2(float, float);
bool Resh3(float, float);
void Stat(int&, int&, bool);

int main() {
	float x, y;
	int cor, amt; // переменные для статистики
	bool b, c, d; // Признак попадания в заданную область
	GetXY(x, y); // Вызов функции ввода исходных данных
	cout << " Решение 1-й функции:" << endl;
	b = Resh1(x, y); // Вызов 1-й функции решения
	Put(b, x, y); // Вызов функции вывода результатов
	cout << " \nРешение 2-й функции:" << endl;
	c = Resh2(x, y); // Вызов 2-й функции решения
	Put(c, x, y);
	cout << "\n Решение 3-й функции:" << endl;
	d = Resh3(x, y); // Вызов 3-й функции решения
	Put(d, x, y);
	Stat(cor, amt, b);
	system("PAUSE");
	return 0;
}

// функция ввода
void GetXY(float& x, float& y)
{
	setlocale(LC_ALL, "rus");
	cout << " Введите координаты точки x, y\n ";
	while (true) {
		cin >> x >> y;
		if (cin.fail()) {
			cout << "Ошибка! введите корректное значение" << endl;
			cin.clear();
			cin.ignore(1000, '\n');
		}
		else { break; }

	}
}
// функция вывода
void Put(bool b, float x, float y)
{
	
	setlocale(LC_ALL, "rus");
	cout << " Точка с координатами ( " << x << " ," << y << " )";
	if (b)
		cout << " попала в заданную область" << endl;
	else
		cout << " не попала в заданную область" << endl;
	
}
// Стандартное разветвление с логическими операциями
bool Resh1(float x, float y) {
	if (fabs(x) <= 1 && fabs(y) <= 1 && pow(x, 2) + pow(y, 2) >= 1)
		return true;
	else
		return false;
}
// вложенные развлетвления только с помощью операций отношения
bool Resh2(float x, float y) {
	if (x <= 1)
		if (x >= -1)
			if (y <= 1)
				if (y >= -1)
					if (x * x + y * y >= 1) return true;
	return false;
}
// только сложные логические выражения
bool Resh3(float x, float y) {
	return(abs(x) <= 1 && fabs(y) <= 1 && pow(x, 2) + pow(y, 2) >= 1);
}

void Stat(int& cor, int& amt, bool b) {
	ifstream file("statistic.txt");
	cor = 0;
	amt = 0;
	file >> cor >> amt;
	if (b) {
		cor = cor + 1;
	}
	amt = amt + 1;
	file.close();

	ofstream outfile("statistic.txt");
	outfile << cor << " " << amt;
	outfile.close();
	system("cls");
	cout << " | " << left << setw(14) << "Всего попыток" << " | " << left << setw(14) << "Попаданий" << " | " << endl;
	cout << " | " << left << setw(14) << " " << " | " << left << setw(14) << " " << " | " << endl;
	cout << " | " << left << setw(14) << amt << " | " << left << setw(14) << cor << " | " << endl;
}

