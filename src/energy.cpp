#include "energy.h"
#include <cmath>
#include "constants.h" 

namespace physics::energy
{
    // Energia cinética de um corpo: Ec = (m * v²) / 2
    double calculateKineticEnergy(double mass, double velocity)
    {
        return mass * velocity * velocity / 2.0;
    }

    // Energia potencial gravitacional: Ep = m * g * h
    double calculateGravitationalPotentialEnergy(double mass, double height, double gravityAcceleration)
    {
        return mass * gravityAcceleration * height;
    }

    // Energia mecânica total de um sistema: Em = Ec + Ep
    double calculateTotalMechanicalEnergy(double kineticEnergyValue, double potentialEnergyValue)
    {
        return kineticEnergyValue + potentialEnergyValue;
    }

    // Trabalho realizado por uma força: W = F * Δs * cos(θ)
    double calculateWork(double force, double deltaDisplacement, double angleDegrees)
    {
        const double angleRadians = angleDegrees * physics::constants::kPi / 180.0;
        return force * deltaDisplacement * std::cos(angleRadians);
    }

    // Potência mecânica: P = W / Δt
    double calculatePower(double work, double deltaTime)
    {
        return work / deltaTime;
    }

    // Energia potencial elástica: Ep = (k * x²) / 2
    double calculateElasticPotentialEnergy(double springConstant, double deformation)
    {
        return springConstant * deformation * deformation / 2.0;
    }

    // Trabalho a partir da variação da energia cinética: W = Ecf - Eci
    double calculateWorkFromKineticEnergyVariation(double initialKineticEnergy, double finalKineticEnergy)
    {
        return finalKineticEnergy - initialKineticEnergy;
    }
}