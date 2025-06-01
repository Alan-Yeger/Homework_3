#pragma once
#include <iostream>

using namespace std;

class Circulo {
    public:
        Circulo() : x(0), y(0), r(1) {} //Constructor por defecto para probar los setters
        Circulo(float x, float y, float r): x(x), y(y), r(r){}
        
        //Setters
        void setX(float newX);
        void setY(float newY);
        void setR(float newR);

        //Getters
        float getX() const;
        float getY() const;
        float getR() const;

    private:
        float x; // x del centro
        float y; // y del centro
        float r; // radio
};