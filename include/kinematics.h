#pragma once

namespace physics::kinematics
{
    // ===============================
    // Movimento Uniforme (MU)
    // ===============================

    /**
     * Calcula a velocidade média.
     *
     * Fórmula:
     * v = d / t
     *
     * Onde:
     * - v é a velocidade média (m/s);
     * - d é a distância percorrida (m);
     * - t é o tempo decorrido (s).
     *
     * @param distance Distância percorrida em metros (m).
     * @param time Tempo decorrido em segundos (s).
     * @return Velocidade média em metros por segundo (m/s).
     */
    double calculateAverageVelocity(
        double distance,
        double time
    );

    /**
     * Calcula a posição final no movimento uniforme.
     *
     * Fórmula:
     * s = s0 + v * t
     *
     * Onde:
     * - s é a posição final (m);
     * - s0 é a posição inicial (m);
     * - v é a velocidade constante (m/s);
     * - t é o tempo decorrido (s).
     *
     * @param initialPosition Posição inicial em metros (m).
     * @param velocity Velocidade constante em metros por segundo (m/s).
     * @param time Tempo decorrido em segundos (s).
     * @return Posição final em metros (m).
     */
    double calculateUniformMotionPosition(
        double initialPosition,
        double velocity,
        double time
    );

    // ===============================
    // Movimento Uniformemente Variado (MUV)
    // ===============================

    /**
     * Calcula a aceleração média.
     *
     * Fórmula:
     * a = Δv / Δt
     *
     * Onde:
     * - a é a aceleração média (m/s²);
     * - Δv é a variação da velocidade (m/s);
     * - Δt é a variação do tempo (s).
     *
     * @param deltaVelocity Variação da velocidade em metros por segundo (m/s).
     * @param deltaTime Variação do tempo em segundos (s).
     * @return Aceleração média em metros por segundo ao quadrado (m/s²).
     */
    double calculateAverageAcceleration(
        double deltaVelocity,
        double deltaTime
    );

    /**
     * Calcula a velocidade final a partir do tempo decorrido.
     *
     * Fórmula:
     * v = v0 + a * t
     *
     * Onde:
     * - v é a velocidade final (m/s);
     * - v0 é a velocidade inicial (m/s);
     * - a é a aceleração (m/s²);
     * - t é o tempo decorrido (s).
     *
     * @param initialVelocity Velocidade inicial em metros por segundo (m/s).
     * @param acceleration Aceleração em metros por segundo ao quadrado (m/s²).
     * @param time Tempo decorrido em segundos (s).
     * @return Velocidade final em metros por segundo (m/s).
     */
    double calculateFinalVelocityFromTime(
        double initialVelocity,
        double acceleration,
        double time
    );

    /**
     * Calcula a posição final no movimento uniformemente variado.
     *
     * Fórmula:
     * s = s0 + v0 * t + (a * t²) / 2
     *
     * Onde:
     * - s é a posição final (m);
     * - s0 é a posição inicial (m);
     * - v0 é a velocidade inicial (m/s);
     * - a é a aceleração (m/s²);
     * - t é o tempo decorrido (s).
     *
     * @param initialPosition Posição inicial em metros (m).
     * @param initialVelocity Velocidade inicial em metros por segundo (m/s).
     * @param acceleration Aceleração em metros por segundo ao quadrado (m/s²).
     * @param time Tempo decorrido em segundos (s).
     * @return Posição final em metros (m).
     */
    double calculateUniformlyVariedMotionPosition(
        double initialPosition,
        double initialVelocity,
        double acceleration,
        double time
    );

    /**
     * Calcula a velocidade final a partir do deslocamento
     * utilizando a equação de Torricelli.
     *
     * Fórmula:
     * v² = v0² + 2 * a * Δs
     *
     * Onde:
     * - v é a velocidade final (m/s);
     * - v0 é a velocidade inicial (m/s);
     * - a é a aceleração (m/s²);
     * - Δs é a variação da posição ou deslocamento (m).
     *
     * @param initialVelocity Velocidade inicial em metros por segundo (m/s).
     * @param acceleration Aceleração em metros por segundo ao quadrado (m/s²).
     * @param deltaPosition Variação da posição ou deslocamento em metros (m).
     * @return Velocidade final em metros por segundo (m/s).
     *
     * @note A função retorna apenas o módulo da velocidade final.
     * @note Retorna 0 se v0² + 2 * a * Δs for negativo.
     */
    double calculateFinalVelocityFromDisplacement(
        double initialVelocity,
        double acceleration,
        double deltaPosition
    );
}