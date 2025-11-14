#include <iostream>
using namespace std;

void Get(double&, double&, double&, double&);
void Put(double, int);
double Razv(double, double, double, double, int&);
double Razm(double, double, double, double, int&);

int main() {
	double x, y, c, d, e;
	int n;
	Get(x, y, c, d);
	int i;
	cout << " Каким способом решать задачу?\n";
	cout << " 1 - с вложенными разветвлениями ";
	cout << " без дополнительных функций max и min \n ";
	cout << "2 - со своими функциями minMy и maxMy \n ";
	cout << " Что выбираете 1 или 2 ?\n ";
	cin >> i;
	switch (i)
	{
	case 1:
		e = Razv(x, y, c, d, n);
		break;
	case 2:
		e = Razm(x, y, c, d, n);
		break;
	default:
		cout << " Вы ввели что-то не то! ";
		cout << endl;
		system("PAUSE");
		return 0;
	}
	system("cls");
	Put(e, n);
	system("PAUSE");
	return 0;
}