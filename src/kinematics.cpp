#include <cmath>
#include "kinematics.h"

namespace physics::kinematics
{
    // Velocidade média: v = d / t
    double calculateAverageVelocity(double distance, double time)
    {
        return distance / time;
    }

    // Posição no MU: s = s0 + v * t
    double calculateUniformMotionPosition(double initialPosition, double velocity, double time)
    {
        return initialPosition + velocity * time;
    }

    // Aceleração média: a = Δv / Δt
    double calculateAverageAcceleration(double deltaVelocity, double deltaTime)
    {
        return deltaVelocity / deltaTime;
    }

    // Velocidade final: v = v0 + a * t
    double calculateFinalVelocityFromTime(double initialVelocity, double acceleration, double time)
    {
        return initialVelocity + acceleration * time;
    }

    // Posição no MUV: s = s0 + v0*t + (1/2)*a*t²
    double calculateUniformlyVariedMotionPosition(double initialPosition, double initialVelocity, double acceleration, double time)
    {
        return initialPosition + initialVelocity * time + 0.5 * acceleration * time * time;
    }

    // Torricelli: v² = v0² + 2*a*Δs
    double calculateFinalVelocityFromDisplacement(double initialVelocity, double acceleration, double deltaPosition)
    {
        double discriminant = initialVelocity * initialVelocity + 2.0 * acceleration * deltaPosition;

        if (discriminant < 0)
            return 0; // evita sqrt de número negativo (situação fisicamente impossível)

        return std::sqrt(discriminant);
    }
}