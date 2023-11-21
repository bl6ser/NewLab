#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

int main() {
    // Кирилиця у консолі 
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    double m;

    cout << "Введіть значення m: ";
    cin >> m;

    // Обчислення z1
    double numerator_z1 = pow(sqrt(3 * m + 2), 2) - 24 * m;
    double denominator_z1 = 3 * sqrt(m - 2) * sqrt(m);
    double z1 = numerator_z1 / denominator_z1;

    // Обчислення z2
    double z2 = -sqrt(m);

    cout << "Значення z1: " << z1 << endl;
    cout << "Значення z2: " << z2 << endl;

    system("pause>>void");
    return 0;
}