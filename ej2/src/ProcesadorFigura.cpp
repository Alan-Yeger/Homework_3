#include "../includes/ProcesadorFigura.hpp"
#include "../includes/Circulo.hpp"

constexpr float PI = 3.14159265359f;

//Círculo
template<>
float ProcesadorFigura<Circulo>::area(const Circulo& fig) {
    return PI * fig.getR() * fig.getR();
}

//Rectángulo
template<>
float ProcesadorFigura<Rectangulo>::area(const Rectangulo& f) {
    return f.getW() * f.getH();
}

// Elipse
template<>
float ProcesadorFigura<Elipse>::area(const Elipse& f) {
    return 3.1416f * f.getA() * f.getB();
}

//Punto
template<>
float ProcesadorFigura<Punto>::area(const Punto& f) {
    return 0;
}