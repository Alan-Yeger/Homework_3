#pragma once
#include "Circulo.hpp"
#include "Elipse.hpp"
#include "Punto.hpp"
#include "Rectangulo.hpp"
#include <iostream>

using namespace std;

template<typename Figura>
class ProcesadorFigura {
    public:
        static float area(const Figura& fig);
};