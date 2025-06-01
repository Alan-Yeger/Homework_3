#pragma once
#include "MedicionBase.hpp"
#include <iostream>

using namespace std;

class Posicion: public MedicionBase {
    public:
        //Constructor default
        Posicion(): MedicionBase(), latitud(0.0f), longitud(0.0f), altitud(0.0f){}
        //Constructor pasándole parámetros
        Posicion(float lat, float lon, float alt, float t): MedicionBase(t), latitud(lat), longitud(lon), altitud(alt){}
        //Copy constructor
        Posicion(const Posicion& other): MedicionBase(other), latitud(other.latitud), longitud(other.longitud), altitud(other.altitud){}

        //Sobreescribimos los métodos necesarios
        void serializar(ofstream &out) override;
        void deserializar(ifstream &in) override;
        void imprimir() override;
        
        float latitud; // lat
        float longitud; // lon
        float altitud; // alt
};