#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

// Прототип функции с выходным параметром (передача по ссылке)
void calculateExpression(double x, double y, double& result);

int main() {
    setlocale(LC_ALL, "rus");
    // Установка исходных данных
    double x = 1.3802;
    double y = -1.9;
    double result; // Переменная для хранения результата

    cout << "Проект 3: Функция с параметрами и без возвращаемого значения" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    // Вызов функции с передачей результата через параметр
    calculateExpression(x, y, result);

    // Вывод результата
    cout << fixed << setprecision(6);
    cout << "Результат: d = " << result << endl;

    return 0;
}

// Определение функции с выходным параметром
void calculateExpression(double x, double y, double& result) {
    // Вычисление подкоренного выражения с использованием модуля
    double underRoot = fabs(x * x - 2.5e-3 * y);

    // Вычисление числителя: xy² - √|x² - 0.0025y|
    double numerator = x * y * y - sqrt(underRoot);

    // Вычисление знаменателя: 2sin(xy)
    double denominator = 2 * sin(x * y);

    // Проверка деления на ноль
    if (fabs(denominator) < 1e-10) {
        cout << "Ошибка: деление на ноль!" << endl;
        result = 0;
        return; // Выход из функции без возврата значения
    }

    // Запись результата в выходной параметр
    result = numerator / denominator + 0.5;
}