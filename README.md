# Physics Lib ⚙️

Biblioteca em C++ com funções básicas de Física voltada para estudantes, iniciantes em programação e projetos educacionais.

O projeto implementa conceitos fundamentais da Física de forma simples e modular, com foco em aprendizado, clareza, documentação e boas práticas de desenvolvimento em C++.

---

## 🚀 Características

* ✅ C++17
* ✅ Código modular
* ✅ Namespaces organizados por área da Física
* ✅ Documentação Doxygen
* ✅ Fórmulas clássicas amplamente utilizadas
* ✅ Foco educacional

---

## 📚 Conteúdo

A biblioteca atualmente possui três módulos principais.

### 🏎️ Cinemática (Kinematics)

Estudo do movimento dos corpos sem considerar suas causas.

#### Fórmulas implementadas

* 🚗 Velocidade média: `Vm = Δs / Δt`
* 💨 Aceleração média: `a = Δv / Δt`
* 🛣️ Movimento uniforme (MU): `s = s₀ + v · t`
* 🚀 Movimento uniformemente variado (MUV): `s = s₀ + v₀ · t + (a · t²) / 2`
* 🎯 Equação de Torricelli: `v² = v₀² + 2 · a · Δs`

#### Funções disponíveis

```cpp
calculateAverageVelocity()
calculateUniformMotionPosition()

calculateAverageAcceleration()
calculateFinalVelocityFromTime()
calculateUniformlyVariedMotionPosition()
calculateFinalVelocityFromDisplacement()
```

---

### 🏋️ Dinâmica (Dynamics)

Estudo das forças responsáveis pelo movimento.

#### Fórmulas implementadas

* 💪 Força resultante: `F = m · a`
* ⚡ Aceleração: `a = F / m`
* 🌍 Peso: `P = m · g`
* ⛸️ Força de atrito: `Fa = μ · N`

#### Funções disponíveis

```cpp
calculateForce()
calculateAcceleration()
calculateWeight()
calculateFrictionForce()
```

---

### ⚡ Energia (Energy)

Estudo da capacidade de realizar trabalho e produzir transformações.

#### Fórmulas implementadas

* 🏎️ Energia cinética: `Ec = (m · v²) / 2`
* ⛰️ Energia potencial gravitacional: `Ep = m · g · h`
* ⚖️ Energia mecânica total: `Em = Ec + Ep`
* 🔨 Trabalho mecânico: `W = F · Δs · cos(θ)`
* 🔋 Potência mecânica: `P = W / Δt`
* 🌀 Energia potencial elástica: `Ep = (k · x²) / 2`
* 📈 Teorema Trabalho–Energia: `W = Ecf - Eci`

#### Funções disponíveis

```cpp
calculateKineticEnergy()
calculateGravitationalPotentialEnergy()
calculateTotalMechanicalEnergy()

calculateWork()
calculatePower()
calculateElasticPotentialEnergy()
calculateWorkFromKineticEnergyVariation()
```

---

## 📏 Constantes

A biblioteca disponibiliza constantes físicas e matemáticas reutilizáveis através do namespace:

```cpp
physics::constants
```

### 🔢 Constantes Matemáticas

| Constante | Descrição                                                                      |
| --------- | ------------------------------------------------------------------------------ |
| `kPi`     | Valor de π (Pi), utilizado em conversões de ângulo e cálculos trigonométricos. |

### 🌍 Constantes Físicas

| Constante       | Descrição                                      |
| --------------- | ---------------------------------------------- |
| `kEarthGravity` | Aceleração da gravidade na Terra (`9.8 m/s²`). |

### Exemplo

```cpp
#include "constants.h"

double angleRadians =
    90.0 * physics::constants::kPi / 180.0;

double weight =
    mass * physics::constants::kEarthGravity;
```

---

## 🧠 Exemplo de uso

```cpp
#include <iostream>
#include "dynamics.h"

int main()
{
    const double mass = 10.0;
    const double acceleration = 5.0;

    const double force =
        physics::dynamics::calculateForce(
            mass,
            acceleration
        );

    std::cout
        << "Força: "
        << force
        << " N\n";

    return 0;
}
```

### Saída

```text
Força: 50 N
```

---

## 🛠️ Compilação

### Requisitos

* Compilador com suporte a C++17
* CMake 3.16 ou superior

### Estrutura do projeto

```text
physics-lib/
├── include/
│   ├── constants.h
│   ├── dynamics.h
│   ├── energy.h
│   └── kinematics.h
│
├── src/
│   ├── dynamics.cpp
│   ├── energy.cpp
│   ├── kinematics.cpp
│   └── main.cpp
│
├── CMakeLists.txt
└── README.md
```

### Build

```bash
mkdir build
cd build

cmake ..
cmake --build .
```

### Executando

```bash
./app
```

---

## 🎯 Objetivos do projeto

* 📚 Facilitar o aprendizado de Física através do código.
* 🧮 Implementar fórmulas clássicas de forma simples.
* ⚙️ Servir como base para estudos de C++ moderno.
* 🧹 Manter uma API consistente e bem documentada.
* 📖 Demonstrar a aplicação prática de conceitos físicos em software.

---

## 🔮 Próximos módulos

Os módulos abaixo poderão ser adicionados futuramente:

* 🚄 Momentum (Quantidade de Movimento)
* 🌡️ Termodinâmica
* ⚡ Eletromagnetismo
* 🌌 Gravitação Universal

A prioridade do projeto é implementar primeiro as fórmulas mais utilizadas em cursos introdutórios de Física.