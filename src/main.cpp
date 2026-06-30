#include <iostream>
#include "kinematics.h"
#include "dynamics.h"
#include "energy.h"
#include "thermodynamics.h"

int main()
{
    std::cout << "=== Kinematics ===\n";

    const double averageVelocity =
        physics::kinematics::calculateAverageVelocity(
            100.0, // distance (m)
            10.0   // time (s)
        );

    const double uniformMotionPosition =
        physics::kinematics::calculateUniformMotionPosition(
            0.0,  // initialPosition (m)
            10.0, // velocity (m/s)
            5.0   // time (s)
        );

    const double averageAcceleration =
        physics::kinematics::calculateAverageAcceleration(
            20.0, // deltaVelocity (m/s)
            4.0   // deltaTime (s)
        );

    const double finalVelocityFromTime =
        physics::kinematics::calculateFinalVelocityFromTime(
            5.0, // initialVelocity (m/s)
            2.0, // acceleration (m/s²)
            4.0  // time (s)
        );

    const double uniformlyVariedMotionPosition =
        physics::kinematics::calculateUniformlyVariedMotionPosition(
            0.0, // initialPosition (m)
            5.0, // initialVelocity (m/s)
            2.0, // acceleration (m/s²)
            4.0  // time (s)
        );

    const double finalVelocityFromDisplacement =
        physics::kinematics::calculateFinalVelocityFromDisplacement(
            5.0, // initialVelocity (m/s)
            2.0, // acceleration (m/s²)
            20.0 // deltaPosition (m)
        );

    std::cout << "Average velocity: " << averageVelocity << " m/s\n";
    std::cout << "Uniform motion position: " << uniformMotionPosition << " m\n";
    std::cout << "Average acceleration: " << averageAcceleration << " m/s²\n";
    std::cout << "Final velocity from time: " << finalVelocityFromTime << " m/s\n";
    std::cout << "Uniformly varied motion position: " << uniformlyVariedMotionPosition << " m\n";
    std::cout << "Final velocity from displacement: " << finalVelocityFromDisplacement << " m/s\n";

    std::cout << "\n=== Dynamics ===\n";

    const double force =
        physics::dynamics::calculateForce(
            10.0, // mass (kg)
            5.0   // acceleration (m/s²)
        );

    const double acceleration =
        physics::dynamics::calculateAcceleration(
            50.0, // appliedForce (N)
            10.0  // mass (kg)
        );

    const double weight =
        physics::dynamics::calculateWeight(
            10.0 // mass (kg)
        );

    const double frictionForce =
        physics::dynamics::calculateFrictionForce(
            98.0, // normalForce (N)
            0.3   // frictionCoefficient
        );

    std::cout << "Force: " << force << " N\n";
    std::cout << "Acceleration: " << acceleration << " m/s²\n";
    std::cout << "Weight: " << weight << " N\n";
    std::cout << "Friction force: " << frictionForce << " N\n";

    std::cout << "\n=== Energy ===\n";

    const double kineticEnergy =
        physics::energy::calculateKineticEnergy(
            10.0, // mass (kg)
            5.0   // velocity (m/s)
        );

    const double gravitationalPotentialEnergy =
        physics::energy::calculateGravitationalPotentialEnergy(
            10.0, // mass (kg)
            3.0   // height (m)
        );

    const double totalMechanicalEnergy =
        physics::energy::calculateTotalMechanicalEnergy(
            kineticEnergy,
            gravitationalPotentialEnergy);

    const double work =
        physics::energy::calculateWork(
            50.0, // force (N)
            10.0, // deltaDisplacement (m)
            30.0  // angleDegrees (°)
        );

    const double power =
        physics::energy::calculatePower(
            work,
            5.0 // deltaTime (s)
        );

    const double elasticPotentialEnergy =
        physics::energy::calculateElasticPotentialEnergy(
            200.0, // springConstant (N/m)
            0.1    // deformation (m)
        );

    const double workFromKineticEnergyVariation =
        physics::energy::calculateWorkFromKineticEnergyVariation(
            50.0, // initialKineticEnergy (J)
            120.0 // finalKineticEnergy (J)
        );

    std::cout << "Kinetic energy: " << kineticEnergy << " J\n";
    std::cout << "Gravitational potential energy: " << gravitationalPotentialEnergy << " J\n";
    std::cout << "Total mechanical energy: " << totalMechanicalEnergy << " J\n";
    std::cout << "Work: " << work << " J\n";
    std::cout << "Power: " << power << " W\n";
    std::cout << "Elastic potential energy: " << elasticPotentialEnergy << " J\n";
    std::cout << "Work from kinetic energy variation: " << workFromKineticEnergyVariation << " J\n";

    std::cout << "\n=== Thermodynamics ===\n";

    const double temperatureFahrenheit =
        physics::thermodynamics::celsiusToFahrenheit(
            32.0 // temperature in Celsius
        );

    const double temperatureCelsius =
        physics::thermodynamics::fahrenheitToCelsius(
            89.6 // temperature in Fahrenheit
        );

    const double temperatureKelvin =
        physics::thermodynamics::celsiusToKelvin(
            32.0 // temperature in Celsius
        );

    const double temperatureCelsiusFromKelvin =
        physics::thermodynamics::kelvinToCelsius(
            305.15 // temperature in Kelvin
        );

    const double temperatureKelvinFromFahrenheit =
        physics::thermodynamics::fahrenheitToKelvin(
            89.6 // temperature in Fahrenheit
        );

    const double temperatureFahrenheitFromKelvin =
        physics::thermodynamics::kelvinToFahrenheit(
            305.15 // temperature in Kelvin
        );

    std::cout << "Celsius -> Fahrenheit: " << temperatureFahrenheit << " °F\n";
    std::cout << "Fahrenheit -> Celsius: " << temperatureCelsius << " °C\n";
    std::cout << "Celsius -> Kelvin: " << temperatureKelvin << " K\n";
    std::cout << "Kelvin -> Celsius: " << temperatureCelsiusFromKelvin << " °C\n";
    std::cout << "Fahrenheit -> Kelvin: " << temperatureKelvinFromFahrenheit << " K\n";
    std::cout << "Kelvin -> Fahrenheit: " << temperatureFahrenheitFromKelvin << " °F\n";

    return 0;
}