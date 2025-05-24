#pragma once
#include <iostream>

using namespace std;

class Elipse {
    public:
        Elipse(): x(0), y(0), a(1), b(1){}
        Elipse(float x, float y, float a, float b): x(x), y(y), a(a), b(b){}
        void setX(float newX);
        void setY(float newY);
        void setA(float newA);
        void setB(float newB);
        float getX() const;
        float getY() const;
        float getA() const;
        float getB() const;

        float x; // x del centro
        float y; // y del centro
        float a; // semieje mayor
        float b; // semieje menor
};