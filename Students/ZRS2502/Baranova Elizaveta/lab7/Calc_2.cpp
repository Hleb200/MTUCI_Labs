#include <iostream>

using namespace std;
float f(float x, float y);
float RegCikl2(float a, float b, float h1, float c, float d, float h2) {
	int n1 = int((b + h1 / 2 - a) / h1) + 1;
	int n2 = int((d + h2 / 2 - c) / h2) + 1;
	float zMax = -1E38;
	float x, y, z;
	cout << endl << "Таблица значений функции" << endl;
	cout << "\tx\ty\tz" << endl;
	for (int i = 1; i <= n1; i++)
	{
		x = a + (i - 1) * h1;
		for (int j = 1; j <= n2; j++) {
			y = c + (j - 1) * h2;
			z = f(x, y);
			if (z > zMax) { zMax = z; }
			cout << "\t" << x << "\t" << y << "\t" << z << endl;
		}
	}
	return zMax;
	}
	float f(float x, float y) {
		return 3 * pow(cos(2 * x + y + 1), 2);
		}
