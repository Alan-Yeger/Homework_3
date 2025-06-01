#pragma once
#include "MedicionBase.hpp"
#include <iostream>

using namespace std;

class Presion: public MedicionBase {
    public:
        //Constructor por default
        Presion():MedicionBase(), presionEstatica(0.0f), presionDinamica(0.0f){}
        //Constructor pasándole parámetros
        Presion(float p, float q, float t):MedicionBase(t), presionEstatica(p), presionDinamica(q){};
        //Copy constructor
        Presion(const Presion& other):MedicionBase(other), presionEstatica(other.presionEstatica), presionDinamica(other.presionDinamica){}
        
        //Sobreescribimos los métodos necesarios
        void serializar(ofstream &out) override;
        void deserializar(ifstream &in) override;
        void imprimir() override;

        float presionEstatica; // p
        float presionDinamica; // q
};