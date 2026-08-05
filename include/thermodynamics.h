#pragma once

namespace physics::thermodynamics
{
    // ===============================
    // Conversão de Temperatura
    // ===============================

    /**
     * Converte uma temperatura de graus Celsius para Fahrenheit.
     *
     * Fórmula:
     * F = (C * 9/5) + 32
     *
     * Onde:
     * - F é a temperatura em graus Fahrenheit (°F);
     * - C é a temperatura em graus Celsius (°C).
     *
     * @param celsius Temperatura em graus Celsius (°C).
     * @return Temperatura em graus Fahrenheit (°F).
     */
    double celsiusToFahrenheit(
        double celsius
    );

    /**
     * Converte uma temperatura de graus Fahrenheit para Celsius.
     *
     * Fórmula:
     * C = (F - 32) * 5/9
     *
     * Onde:
     * - C é a temperatura em graus Celsius (°C);
     * - F é a temperatura em graus Fahrenheit (°F).
     *
     * @param fahrenheit Temperatura em graus Fahrenheit (°F).
     * @return Temperatura em graus Celsius (°C).
     */
    double fahrenheitToCelsius(
        double fahrenheit
    );

    /**
     * Converte uma temperatura de graus Celsius para Kelvin.
     *
     * Fórmula:
     * K = C + 273.15
     *
     * Onde:
     * - K é a temperatura em kelvin (K);
     * - C é a temperatura em graus Celsius (°C).
     *
     * @param celsius Temperatura em graus Celsius (°C).
     * @return Temperatura em kelvin (K).
     */
    double celsiusToKelvin(
        double celsius
    );

    /**
     * Converte uma temperatura de kelvin para graus Celsius.
     *
     * Fórmula:
     * C = K - 273.15
     *
     * Onde:
     * - C é a temperatura em graus Celsius (°C);
     * - K é a temperatura em kelvin (K).
     *
     * @param kelvin Temperatura em kelvin (K).
     * @return Temperatura em graus Celsius (°C).
     */
    double kelvinToCelsius(
        double kelvin
    );

    /**
     * Converte uma temperatura de graus Fahrenheit para kelvin.
     *
     * Fórmula:
     * K = (F - 32) * 5/9 + 273.15
     *
     * Onde:
     * - K é a temperatura em kelvin (K);
     * - F é a temperatura em graus Fahrenheit (°F).
     *
     * @param fahrenheit Temperatura em graus Fahrenheit (°F).
     * @return Temperatura em kelvin (K).
     */
    double fahrenheitToKelvin(
        double fahrenheit
    );

    /**
     * Converte uma temperatura de kelvin para graus Fahrenheit.
     *
     * Fórmula:
     * F = (K - 273.15) * 9/5 + 32
     *
     * Onde:
     * - F é a temperatura em graus Fahrenheit (°F);
     * - K é a temperatura em kelvin (K).
     *
     * @param kelvin Temperatura em kelvin (K).
     * @return Temperatura em graus Fahrenheit (°F).
     */
    double kelvinToFahrenheit(
        double kelvin
    );

    // ===============================
    // CALORIMETRIA
    // ===============================

    /**
     * Calcula a quantidade de calor sensível trocada por um corpo.
     *
     * Fórmula:
     * Q = m * c * Δθ
     *
     * Onde:
     * - Q é a quantidade de calor (cal ou J);
     * - m é a massa do corpo (g ou Kg);
     * - c é o calor específico da substância (cal/g°C ou J/Kg.°C);
     * - Δθ é a variação de temperatura (°C ou K).
     *
     * @param mass Massa do corpo (g ou Kg).
     * @param specificHeat Calor específico da substância (cal/g°C ou J/Kg.°C).
     * @param deltaTemperature Variação de temperatura (°C ou K).
     * @return Quantidade de calor (cal ou J).
     */
    double sensibleHeat(
        double mass,
        double specificHeat,
        double deltaTemperature
    );

    /**
     * Calcula a quantidade de calor latente trocada por um corpo durante uma mudança de estado físico.
     *
     * Fórmula:
     * Q = m * L
     *
     * Onde:
     * - Q é a quantidade de calor (cal ou J);
     * - m é a massa do corpo (g ou kg);
     * - L é o calor latente da mudança de estado (cal/g ou J/kg).
     *
     * @param mass Massa do corpo (g ou kg).
     * @param latentHeat Calor latente da mudança de estado (cal/g ou J/kg).
     * @return Quantidade de calor (cal ou J).
     */
    double latentHeat(
        double mass,
        double latentHeat);

}