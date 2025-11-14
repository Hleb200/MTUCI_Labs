#include <iostream>
using namespace std;

void Get(double& x, double& y, double& c, double& d) {
	setlocale(LC_ALL, "rus");
	cout << "Введите x, y, c и d\n";
	cin >> x >> y >> c >> d;
}
// Определение функции вывода
void Put(double e, int n) {
	setlocale(LC_ALL, "rus");
	cout << " Ответ R= " << e << endl;
	cout << " Номер ветки разветвления " << n << endl;
}