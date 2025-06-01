#pragma once
#include "Posicion.hpp"
#include "Presion.hpp"
#include <iostream>
#include <fstream>

using namespace std;

class SaveFlightData {
    public:
        // El problema que tuve acá es que para pasar la Posicion y la Presion como objetos al tener el unique_ptr de la MedicioBase
        // El valor no se puede copiar directamente por lo que tuve que implementar los copy constructors en las otras clases.
        SaveFlightData(const Posicion& p = Posicion(), const Presion& q = Presion()): posicion(p), presion(q) {}
        void serializar(ofstream& out);
        void deserializar(ifstream& in);
        void imprimir();

        Posicion posicion;
        Presion presion;
};