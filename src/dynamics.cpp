#include "dynamics.h"

namespace physics::dynamics
{
    double force(double mass, double acceleration)
    {
        if (mass <= 0)
            return 0;
        return mass * acceleration;
    }

    double accelerationFromForce(double force, double mass)
    {
        if (mass <= 0)
            return 0;
        return force / mass;
    }

}