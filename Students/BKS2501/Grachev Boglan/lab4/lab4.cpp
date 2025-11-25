#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double calculateExpression(double x, double y) {
    double numerator = x * y * y - sqrt(fabs(x * x - 2.5e-3 * y));
    double denominator = 2 * sin(x * y);

    if (fabs(denominator) < 1e-10) {
        cout << "Ошибка: деление на ноль!" << endl;
        return 0;
    }

    return numerator / denominator + 0.5;
}

int main() {
    setlocale(LC_ALL, "rus");
    double x = 1.3802;
    double y = -1.9;

    cout << "Проект 1: Функция с параметрами и возвращаемым значением" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    double result = calculateExpression(y,x );

    cout << fixed << setprecision(6);
    cout << "Результат: d = " << result << endl;

    return 0;
}