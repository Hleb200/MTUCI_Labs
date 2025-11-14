#include <iostream>
#include <cmath>
using namespace std;
double func(int n) {
	return 3 * pow(n, 4) - 730 * n;
}

double Kop(int start) {
	setlocale(LC_ALL, "rus");
	int i = 1;
	int prestart = 0;
	cout << "Функция возрастающая" << endl;
	if (start < 0) {
		for (start; start < 0; start++) {
			cout << "попытка " << i << ", результат = " << func(start) << endl;
			i++;
		}
	}
	for (start; func(start) < 5; start++) {
		cout << "попытка " << i << ", результат = " << func(start) << endl;
		i++;
		prestart = start;
	}
	return prestart;
}