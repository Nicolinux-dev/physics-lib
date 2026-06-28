#include "dynamics.h"

namespace physics::dynamics
{
    // Força resultante: F = m * a
    double calculateForce(double mass, double acceleration)
    {
        return mass * acceleration;
    }

    // Aceleração: a = F / m
    double calculateAcceleration(double appliedForce, double mass)
    {
        return appliedForce / mass;
    }

    // Peso: P = m * g
    double calculateWeight(double mass, double gravityAcceleration)
    {
        return mass * gravityAcceleration;
    }

    // Atrito: Fa = μ * N
    double calculateFrictionForce(double normalForce, double frictionCoefficient)
    {
        if (normalForce < 0.0 || frictionCoefficient < 0.0)
            return 0;

        return normalForce * frictionCoefficient;
    }
}