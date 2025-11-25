#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

// Глобальные переменные - доступны во всех функциях
double x, y, result;

// Прототип функции без параметров
void calculateExpression();

int main() {
    setlocale(LC_ALL, "rus");
    // Инициализация глобальных переменных
    x = 1.3802;
    y = -1.9;

    cout << "Проект 4: Функция без параметров и без возвращаемого значения (с глобальными переменными)" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    // Вызов функции без параметров
    calculateExpression();

    // Вывод результата из глобальной переменной
    cout << fixed << setprecision(6);
    cout << "Результат: d = " << result << endl;

    return 0;
}

// Определение функции без параметров
void calculateExpression() {
    // Использование глобальных переменных x, y, result
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
        return;
    }

    // Запись результата в глобальную переменную
    result = numerator / denominator + 0.5;
}