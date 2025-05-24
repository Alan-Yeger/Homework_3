#pragma once
#include <iostream>

using namespace std;

class Rectangulo {
    public:
        Rectangulo(): x(0), y(0), w(1), h(1){}
        Rectangulo(float x, float y, float w, float h): x(x), y(y), w(w), h(h){}
        void setX(float newX);
        void setY(float newY);
        void setW(float newW);
        void setH(float newH);
        float getX() const;
        float getY() const;
        float getW() const;
        float getH() const;

        float x; // x del vértice inferior izquierdo
        float y; // y del vértice inferior izquierdo
        float w; // ancho
        float h; // altura
};