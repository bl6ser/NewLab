#include <iostream>
#include <cmath>
#include <Windows.h>
int main() {
    using namespace std;
    // Кирилиця у консолі 
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    // Задані значення
    double butterPrice = 8.50;  // грн/кг
    double sourCreamPrice = 2.40;  // грн/кг
    double creamPrice = 4.10;  // грн/кг

    double m1, m2, m3;

    cout << "Введіть кількість кг масла m1: ";
    cin >> m1;

    cout << "Введіть кількість кг сметани m2: ";
    cin >> m2;

    cout << "Введіть кількість кг вершків m3: ";
    cin >> m3;

    // Обчислення сум вартості продуктів
    double totalButterCost = m1 * butterPrice;
    double totalSourCreamCost = m2 * sourCreamPrice;
    double totalCreamCost = m3 * creamPrice;

    // Обчислення загальної вартості покупки
    double totalCost = totalButterCost + totalSourCreamCost + totalCreamCost;

    cout << "Вартість масла: " << totalButterCost << " грн" << endl;
    cout << "Вартість сметани: " << totalSourCreamCost << " грн" << endl;
    cout << "Вартість вершків: " << totalCreamCost << " грн" << endl;

    cout << "Загальна вартість покупки: " << totalCost << " грн" << endl;

    system("pause>>void");
    return 0;
}