#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main() {
    // Кирилиця у консолі 
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    double a, b, c, h;

    cout << "Введіть значення основи a: ";
    cin >> a;

    cout << "Введіть значення основи b: ";
    cin >> b;

    cout << "Введіть значення бічної сторони c: ";
    cin >> c;

    cout << "Введіть значення висоти h: ";
    cin >> h;

    double perimeter = a + b + 2 * c;
    double area = ((a + b) / 2) * h;

    cout << "Периметр трапеції: " << perimeter << endl;
    cout << "Площа трапеції: " << area << endl;

    system("pause>>void");
    return 0;
}