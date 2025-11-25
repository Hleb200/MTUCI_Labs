#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    double x, y;

   
    x = 12.678;
    y = 6.9;

    double base = 5.2;
    double power = 3.0;
    double numerator = log10(x + y);
    double denominator_inner = 0.45 * sin(x - 8 * y);
    double fraction = numerator / (1.0 / denominator_inner); 
    double result = pow(base, power) * fraction + 0.5;

    int truncated_implicit = result;           
    int truncated_explicit = (int)result;      
    int rounded_up = (int)ceil(result);        
    int rounded_down = (int)floor(result);    

    cout << "Исходные данные:" << endl;
    cout << "x = " << x << ", y = " << y << endl;
    cout << "Результат выражения: " << fixed << setprecision(6) << result << endl << endl;

    cout << "Преобразования:" << endl;
    cout << "Усечение (неявное): " << truncated_implicit << endl;
    cout << "Усечение (явное): " << truncated_explicit << endl;
    cout << "Округление вверх: " << rounded_up << endl;
    cout << "Округление вниз: " << rounded_down << endl << endl;

    cout << "Операция инкремента:" << endl;
    cout << "Префиксный инкремент (неявное): " << ++truncated_implicit << endl;
    cout << "После операции: " << truncated_implicit << endl;
    cout << "Постфиксный инкремент (явное): " << truncated_explicit++ << endl;
    cout << "После операции: " << truncated_explicit << endl;
    cout << "Префиксный инкремент (округление вверх): " << ++rounded_up << endl;
    cout << "Постфиксный инкремент (округление вниз): " << rounded_down++ << endl;
    cout << "После операции: " << rounded_down << endl;

    return 0;
}