#include <cmath>

// Определение ф-ции с вложенными разветвлениями,без дополнительных функций
double Razv(double x, double y, double c, double d, int& n) {
	double e;
	if (x * y > 3) {
		double e1 = pow(log10(x * y), c * d);
		e = x * x * x;
		if (e1 > e) {e = e1;}
		n = 1;
	}
	else {
		if (0 <= x * y && x * y <= 3) {
			double e1 = c * x, e2 = d * y;
			if (e2 > e1) { e1 = e2; }
			e = x;
			double e3 = y;
			if (e1 < e) { e = e1; }
			if (e3 < e) { e = e3; }
			e = e * 3;
			n = 2;
		}
		else {
			e = pow(2, c * d) - x;
			n = 3;
		}
	}
	return e;
}
// Описания (прототипы) функций maxMy и minMy
double maxMy(double, double);
double minMy(double, double, double);

// Определение ф-ции с вложенными разветвлениями,использующей maxMy и minMy
double Razm(double x, double y, double c, double d, int& n) {
	if (x * y > 3) {
		n = 1;
		return maxMy(x * x * x, pow(log10(x * y), c * d));
	}
	else if (x * y >= 0) {
		n = 2;
		return 3 * minMy(x, y, maxMy(c * x, d * y));
	}
	else {
		n = 3;
		return pow(2, c * d) - x;
	}
}

// Определение функции maxMy
double maxMy(double x, double y) {
	double f;
	if (x > y) { f = x; }
	else { f = y; }
	return f;
}
// определение функции minMy
double minMy(double x, double y, double z) {
	double f;
	if (x < y) {
		if (x < z) { f = x; }
		else { f = z; }
	}
	else {
		if (y < z) { f = y; }
		else { f = z; }
	}
	return f;
}

