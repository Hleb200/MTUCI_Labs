#include <iostream>
#include <iomanip>
using namespace std;

//ввод значений
void GetR(double& R, int& n) {
	setlocale(LC_ALL, "rus");
	while (true) {
		cout << "Введите радиус: " << endl;
		cin >> R;
		cout << "Введите количество сторон многоугольника:";
		cin >> n;
		if (R < 0 || n < 3 || n > 3000) {
			cout << "Радиус должен быть положительным, а стороны минимум в количестве трех, максимум - 3000" << endl;
			continue;}
		else { break; }
	}
}
// вывод значений
void Put( double R, double P, int n) {
	setlocale(LC_ALL, "rus");
	//cout << "периметр правильного " << n << "-угольника равен - " << P << endl;
	system("cls");
	cout << " | " << left << setw(14) << "Радиус" << " | " << setw(14) << "Кол-во сторон" << " | " << setw(14) << "Периметр" << " | " << endl;
	cout << " | " << left << setw(14) << " " << " | " << setw(14) << " " << " | " << setw(14) << " " << " | " << endl;
	cout << " | " << left << setw(14) << R << " | " << setw(14) << n << " | " << setw(14) << P << " | " << endl;
}