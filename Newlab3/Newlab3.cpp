#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main() {
    setlocale(0, ".1251");

    int i;

    cout << "Введіть номер варіанта i: ";
    cin >> i;

    // Координати вершин трикутника
    double Ax = 0, Ay = 0;
    double Bx = i, By = i - 1;
    double Cx = -i, Cy = i + 1;

    // Довжини сторін трикутника
    double AB = sqrt(pow(Bx - Ax, 2) + pow(By - Ay, 2));
    double BC = sqrt(pow(Cx - Bx, 2) + pow(Cy - By, 2));
    double CA = sqrt(pow(Ax - Cx, 2) + pow(Ay - Cy, 2));

    // Медіани та координати середин сторін
    double MB = 0.5 * BC;
    double MC = 0.5 * CA;
    double MA = 0.5 * AB;

    double Ex = (Ax + Bx) / 2, Ey = (Ay + By) / 2;
    double Fx = (Bx + Cx) / 2, Fy = (By + Cy) / 2;
    double Gx = (Ax + Cx) / 2, Gy = (Ay + Cy) / 2;

    // Радіус вписаного кола
    double radius = sqrt(pow(Gx - Ax, 2) + pow(Gy - Ay, 2));

    cout << "Довжина сторони AB: " << AB << endl;
    cout << "Довжина сторони BC: " << BC << endl;
    cout << "Довжина сторони CA: " << CA << endl;

    cout << "Медіана MB: " << MB << endl;
    cout << "Медіана MC: " << MC << endl;
    cout << "Медіана MA: " << MA << endl;

    cout << "Координати середин сторін:" << endl;
    cout << "Середина AB (точка E): (" << Ex << ", " << Ey << ")" << endl;
    cout << "Середина BC (точка F): (" << Fx << ", " << Fy << ")" << endl;
    cout << "Середина CA (точка G): (" << Gx << ", " << Gy << ")" << endl;

    cout << "Радіус вписаного кола: " << radius << endl;

    system("pause>>void");
    return 0;
}