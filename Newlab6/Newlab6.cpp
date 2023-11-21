#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

int main() {
    // Кирилиця у консолі 
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    double m, y;

    // Введення значень з клавіатури
    cout << "Введіть значення m: ";
    cin >> m;

    cout << "Введіть значення y в градусах: ";
    cin >> y;

    // Переведення градусів у радіани
    double y_rad = y * M_PI / 180.0;

    // Область визначення (cos^2y - 1) не повинно дорівнювати 0
    if (cos(y_rad) * cos(y_rad) - 1 == 0) {
        cout << "Помилка: область визначення не задовольняється (cos^2y - 1 = 0)." << endl;
    }
    else {
        // Обчислення значення виразу
        double result = (m * m + 2.8 * m + 0.355) / (cos(y_rad) * cos(y_rad) - 1);

        // Виведення результату
        cout << "Значення виразу: " << result << endl;
    }

    system("pause>>void");
    return 0;
}
