#include <iostream>
#include <iomanip>
#include "dynamics.h"

int main()
{
    using namespace physics::dynamics;

    std::cout << std::fixed << std::setprecision(2);

    std::cout << "===== LEIS DE NEWTON =====\n\n";

    double mass = 10.0;
    double acceleration = 5.0;

    double F = force(mass, acceleration);

    std::cout << ">> FORCA RESULTANTE\n";
    std::cout << "---------------------------------\n";
    std::cout << "Massa       : " << mass << " kg\n";
    std::cout << "Aceleracao  : " << acceleration << " m/s²\n";
    std::cout << "Forca (F)   : " << F << " N\n\n";

    double appliedForce = 50.0;
    double a = accelerationFromForce(appliedForce, mass);

    std::cout << ">> ACELERACAO\n";
    std::cout << "---------------------------------\n";
    std::cout << "Forca (F)   : " << appliedForce << " N\n";
    std::cout << "Massa       : " << mass << " kg\n";
    std::cout << "Aceleracao  : " << a << " m/s²\n\n";

    std::cout << "=================================\n";

    return 0;
}