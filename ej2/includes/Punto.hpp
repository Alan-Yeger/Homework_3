#pragma once
#include <iostream>

using namespace std;

class Punto {
    public:
        Punto(): x(0), y(0){} //Constructor por defecto
        Punto(float x, float y): x(x), y(y){} //Constructor con parámetros
        void setX(float newX);
        void setY(float newY);
        float getX() const;
        float getY() const;

        float x;
        float y;
};