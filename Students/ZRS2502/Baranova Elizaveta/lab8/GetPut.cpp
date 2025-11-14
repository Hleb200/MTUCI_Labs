#include <iostream>
using namespace std;

int Get(int& start) {
	setlocale(LC_ALL, "rus");
	cout << "Введите начальное значение n ( |n|< 6)" << endl;
	while (true) {
		cin >> start;
		if (cin.fail()) {
			cout << "Ошибка! введите корректное значение" << endl;
			cin.clear();
			cin.ignore(1000, '\n');
		}
		else if (start >= 6) {
			cout << "Ошибка! Слишком большое значение" << endl;
		}
		else { break; }
	}
	return start;
}
void Put(int i) {
	setlocale(LC_ALL, "rus");
	cout << " " << endl;
	cout << "Максимальная целая n = " << i << endl;
}