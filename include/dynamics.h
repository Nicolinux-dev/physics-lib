#pragma once
#include "constants.h" // kEarthGravity

namespace physics::dynamics
{
    // ===============================
    // Leis de Newton (Dynamics)
    // ===============================

    /**
     * Calcula a força resultante aplicada a um corpo.
     *
     * Fórmula:
     * F = m * a
     *
     * Onde:
     * - F é a força resultante (N);
     * - m é a massa do corpo (kg);
     * - a é a aceleração do corpo (m/s²).
     *
     * @param mass Massa do objeto em quilogramas (kg).
     * @param acceleration Aceleração do objeto em metros por segundo ao quadrado (m/s²).
     * @return Força resultante em newtons (N).
     */
    double calculateForce(
        double mass,
        double acceleration
    );

    /**
     * Calcula a aceleração a partir da força aplicada.
     *
     * Fórmula:
     * a = F / m
     *
     * Onde:
     * - a é a aceleração do corpo (m/s²);
     * - F é a força aplicada (N);
     * - m é a massa do corpo (kg).
     *
     * @param appliedForce Força aplicada em newtons (N).
     * @param mass Massa do objeto em quilogramas (kg).
     * @return Aceleração em metros por segundo ao quadrado (m/s²).
     */
    double calculateAcceleration(
        double appliedForce,
        double mass
    );

    /**
     * Calcula a força peso de um corpo.
     *
     * Fórmula:
     * P = m * g
     *
     * Onde:
     * - P é a força peso (N);
     * - m é a massa do corpo (kg);
     * - g é a aceleração da gravidade (m/s²).
     *
     * @param mass Massa do objeto em quilogramas (kg).
     * @param gravityAcceleration Aceleração da gravidade em metros por segundo ao quadrado (m/s²).
     * Padrão: physics::constants::kEarthGravity.
     * @return Força peso em newtons (N).
     */
    double calculateWeight(
        double mass,
        double gravityAcceleration = physics::constants::kEarthGravity
    );

    /**
     * Calcula a força de atrito entre duas superfícies.
     *
     * Fórmula:
     * F_atrito = μ * N
     *
     * Onde:
     * - F_atrito é a força de atrito (N);
     * - μ é o coeficiente de atrito (adimensional);
     * - N é a força normal (N).
     *
     * @param normalForce Força normal exercida pela superfície em newtons (N).
     * @param frictionCoefficient Coeficiente de atrito (adimensional).
     * @return Força de atrito em newtons (N).
     *
     * @note Retorna 0 se normalForce ou frictionCoefficient forem negativos.
     */
    double calculateFrictionForce(
        double normalForce,
        double frictionCoefficient
    );
}