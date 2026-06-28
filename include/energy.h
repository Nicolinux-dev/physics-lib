#pragma once
#include "constants.h" // kEarthGravity

namespace physics::energy
{
    // ===============================
    // Cálculos de Energia Mecânica
    // ===============================

    /**
     * Calcula a energia cinética de um corpo.
     *
     * Fórmula:
     * Ec = (m * v²) / 2
     *
     * Onde:
     * - Ec é a energia cinética (J);
     * - m é a massa do corpo (kg);
     * - v é a velocidade do corpo (m/s).
     *
     * @param mass Massa do objeto em quilogramas (kg).
     * @param velocity Velocidade do objeto em metros por segundo (m/s).
     * @return Energia cinética em joules (J).
     */
    double calculateKineticEnergy(
        double mass,
        double velocity
    );

    /**
     * Calcula a energia potencial gravitacional de um corpo.
     *
     * Fórmula:
     * Ep = m * g * h
     *
     * Onde:
     * - Ep é a energia potencial gravitacional (J);
     * - m é a massa do corpo (kg);
     * - g é a aceleração da gravidade (m/s²);
     * - h é a altura em relação ao referencial adotado (m).
     *
     * @param mass Massa do objeto em quilogramas (kg).
     * @param height Altura em metros (m).
     * @param gravityAcceleration Aceleração da gravidade em metros por segundo ao quadrado (m/s²).
     * Padrão: physics::constants::kEarthGravity.
     * @return Energia potencial gravitacional em joules (J).
     */
    double calculateGravitationalPotentialEnergy(
        double mass,
        double height,
        double gravityAcceleration = physics::constants::kEarthGravity
    );

    /**
     * Calcula a energia mecânica total de um sistema.
     *
     * Fórmula:
     * Em = Ec + Ep
     *
     * Onde:
     * - Em é a energia mecânica total (J);
     * - Ec é a energia cinética (J);
     * - Ep é a energia potencial gravitacional (J).
     *
     * @param kineticEnergyValue Energia cinética em joules (J).
     * @param potentialEnergyValue Energia potencial gravitacional em joules (J).
     * @return Energia mecânica total em joules (J).
     */
    double calculateTotalMechanicalEnergy(
        double kineticEnergyValue,
        double potentialEnergyValue
    );

    /**
     * Calcula o trabalho realizado por uma força.
     *
     * Fórmula:
     * W = F * Δs * cos(θ)
     *
     * Onde:
     * - W é o trabalho realizado (J);
     * - F é a intensidade da força (N);
     * - Δs é a variação do deslocamento (m);
     * - θ é o ângulo entre a força e o deslocamento (°).
     *
     * @param force Intensidade da força em newtons (N).
     * @param deltaDisplacement Variação do deslocamento em metros (m).
     * @param angleDegrees Ângulo entre a força e o deslocamento em graus (°).
     * @return Trabalho realizado em joules (J).
     */
    double calculateWork(
        double force,
        double deltaDisplacement,
        double angleDegrees
    );

    /**
     * Calcula a potência mecânica.
     *
     * Fórmula:
     * P = W / Δt
     *
     * Onde:
     * - P é a potência mecânica (W);
     * - W é o trabalho realizado (J);
     * - Δt é o intervalo de tempo (s).
     *
     * @param work Trabalho realizado em joules (J).
     * @param deltaTime Intervalo de tempo em segundos (s).
     * @return Potência em watts (W).
     */
    double calculatePower(
        double work,
        double deltaTime
    );

    /**
     * Calcula a energia potencial elástica.
     *
     * Fórmula:
     * Ep = (k * x²) / 2
     *
     * Onde:
     * - Ep é a energia potencial elástica (J);
     * - k é a constante elástica da mola (N/m);
     * - x é a deformação da mola (m).
     *
     * @param springConstant Constante elástica da mola em N/m.
     * @param deformation Deformação da mola em metros (m).
     * @return Energia potencial elástica em joules (J).
     */
    double calculateElasticPotentialEnergy(
        double springConstant,
        double deformation
    );

    /**
     * Calcula o trabalho a partir da variação da energia cinética.
     *
     * Fórmula:
     * W = Ecf - Eci
     *
     * Onde:
     * - W é o trabalho realizado (J);
     * - Ecf é a energia cinética final (J);
     * - Eci é a energia cinética inicial (J).
     *
     * @param initialKineticEnergy Energia cinética inicial em joules (J).
     * @param finalKineticEnergy Energia cinética final em joules (J).
     * @return Trabalho realizado em joules (J).
     */
    double calculateWorkFromKineticEnergyVariation(
        double initialKineticEnergy,
        double finalKineticEnergy
    );
}