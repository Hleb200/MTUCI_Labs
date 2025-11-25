#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

// Прототип функции (объявление)
double calculateExpression(double x, double y);

int main() 
{
    setlocale(LC_ALL, "rus");
    // Установка исходных данных
    double x = 1.3802;
    double y = -1.9;

    cout << "Проект 2: Функция с параметрами и возвращаемым значением (определение после main)" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    // Вызов функции и получение результата
    double result = calculateExpression(x, y);

    // Вывод результата с заданной точностью
    cout << fixed << setprecision(6);
    cout << "Результат: d = " << result << endl;

    return 0;
}

// Определение функции (реализация)
double calculateExpression(double x, double y)
{
    // Вычисление подкоренного выражения с использованием модуля
    double underRoot = fabs(x * x - 2.5e-3 * y);

    double numerator = x * y * y - sqrt(underRoot);

    // Вычисление знаменателя: 2sin(xy)
    double denominator = 2 * sin(x * y);

    // Проверка деления на ноль
    if (fabs(denominator) < 1e-10) {
        cout << "Ошибка: деление на ноль!" << endl;
        return 0;
    }

    // Вычисление конечного результата
    return numerator / denominator + 0.5;
}