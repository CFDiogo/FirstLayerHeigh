#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

int main() {
    float Reyn, hBL, rho, Cf, U, mu, yPlus, TauC, UTau, y;

    cout << "Reynolds Number: \n";
    cin >> Reyn;
    cout << "Freestream velocity [m/s]: \n";
    cin >> U;
    cout << "Density [kg/m^3]: \n";
    cin >> rho;
    cout << "Dynamic Viscosity [Pa.s]: \n";
    cin >> mu;
    cout << "Desired Y+: \n";
    cin >> yPlus;

    hBL = 0.38 / pow(Reyn, 0.2);
    Cf = 0.026 / pow(Reyn, 1.0 / 7.0);
    Cf = 0.026 / pow(Reyn, 1.0 / 7.0);
    TauC = 0.5 * rho * U * U * Cf;
    UTau = pow((TauC / rho), 0.5);
    y = 1000*((yPlus * mu) / (UTau * rho));

    cout << "First layer height [mm]: " << y << endl;

    getch();
    return 0;
}
