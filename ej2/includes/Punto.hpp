#pragma once
#include <iostream>

using namespace std;

class Punto {
    public:
        Punto(): x(0), y(0){}
        Punto(float x, float y): x(x), y(y){}
        void setX(float newX);
        void setY(float newY);
        float getX() const;
        float getY() const;

        float x;
        float y;
};