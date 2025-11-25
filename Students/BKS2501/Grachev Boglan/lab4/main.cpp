#include <iostream>
#include <iomanip>
#include "functions.h"  // Убедитесь, что файл в той же папке

using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    double x = 1.3802;
    double y = -1.9;

    cout << "Проект 5: Функция с параметрами и возвращаемым значением (в разных файлах)" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    double result = calculateExpression(x, y);

    cout << fixed << setprecision(6);
    cout << "Результат: d = " << result << endl;

    return 0;
}