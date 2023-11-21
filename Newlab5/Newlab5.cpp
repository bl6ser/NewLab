#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main() {
    // Кирилиця у консолі 
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    // Задані значення
    const double a_const = 3.0;  // Значення a як константа
    double b, x, t, y;

    // Введення значень з клавіатури
    cout << "Введіть значення b: ";
    cin >> b;

    cout << "Введіть значення x: ";
    cin >> x;

    // Обчислення значення t
    t = pow(b, 2) + sqrt(b * x);

    // Обчислення значення a
    double a = log(fabs(t + pow(b, 2)));

    // Обчислення значення функції y
    y = exp(a + b);

    // Виведення результатів
    cout << "Значення функції y = F(x): " << y << endl;

    system("pause>>void");
    return 0;
}