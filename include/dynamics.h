#pragma once

namespace physics::dynamics
{
    // ===============================
    // Leis de Newton (Dynamics)
    // ===============================

    /**
     * Calcula a força resultante aplicada a um corpo.
     * Fórmula: F = m * a
     * @param mass Massa do objeto (kg)
     * @param acceleration Aceleração (m/s²)
     * @return Força (N). Retorna 0 se mass <= 0.
     */
    double force(double mass, double acceleration);

    /**
     * Calcula a aceleração a partir da força.
     * Fórmula: a = F / m
     * @param force Força aplicada (N)
     * @param mass Massa do objeto (kg)
     * @return Aceleração (m/s²). Retorna 0 se mass <= 0.
     */
    double accelerationFromForce(double force, double mass);

}