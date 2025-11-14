#include <iostream> 
#include <cmath> 
#define _USE_MATH_DEFINES 
#include "math.h" 
using namespace std;

// описание функции (прототип)
inline void func4(void );
double x, y, t;
int main()
{
	setlocale(LC_ALL, "rus");
	printf("%40s\n", "Выполняется четвертый проект. Использование inline функции.");
	//double x, y, t;
	cout << " Ввод x= ";
	cin >> x;
	cout << endl << "Ввод y= ";
	cin >> y;
	func4(); // Вызов функции func4
	cout << endl << "результат z= " << t << endl;
	//	cout << x << endl;
	system("PAUSE");
	return 0;
}

// Определение функции func2 
inline void func4()
{
	t = cos(M_PI / 7) * (pow(sin(x - 8 * y), 2) / 2, 7 * (x - M_PI));
}
