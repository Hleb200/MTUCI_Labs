#include "functions.h"
#include <cmath>
#include <iostream>

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