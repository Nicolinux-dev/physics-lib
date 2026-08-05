#include "thermodynamics.h"

namespace physics::thermodynamics
{
    // Celsius para Fahrenheit: °F = (°C * 9/5) + 32
    double celsiusToFahrenheit(double celsius)
    {
        return (celsius * 9.0 / 5.0) + 32.0;
    }

    // Fahrenheit para Celsius: °C = (°F - 32) * 5/9
    double fahrenheitToCelsius(double fahrenheit)
    {
        return (fahrenheit - 32.0) * 5.0 / 9.0;
    }

    // Celsius para Kelvin: K = °C + 273.15
    double celsiusToKelvin(double celsius)
    {
        return celsius + 273.15;
    }

    // Kelvin para Celsius: °C = K - 273.15
    double kelvinToCelsius(double kelvin)
    {
        return kelvin - 273.15;
    }

    // Fahrenheit para Kelvin: K = (°F - 32) * 5/9 + 273.15
    double fahrenheitToKelvin(double fahrenheit)
    {
        return (fahrenheit - 32.0) * 5.0 / 9.0 + 273.15;
    }

    // Kelvin para Fahrenheit: F = (K - 273.15) * 9/5 + 32
    double kelvinToFahrenheit(double kelvin)
    {
        return (kelvin - 273.15) * 9.0 / 5.0 + 32.0;
    }

    // Quantidade de calor sensível trocada por um corpo:  Q = m * c * Δθ
    double sensibleHeat(double mass, double specificHeat, double deltaTemperature) 
    {
        return mass * specificHeat * deltaTemperature;
    }

    // Calcula a quantidade de calor latente trocada por um corpo durante uma mudança de estado físico: Q = m * L
    double latentHeat(double mass, double latentHeat) 
    {
        return mass * latentHeat;
    }
}