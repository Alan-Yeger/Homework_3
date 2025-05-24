#include <Posicion.hpp>
#include <Presion.hpp>
#include <iostream>
#include <fstream>

using namespace std;

class SaveFlightData {
    public:
        // Hacer copy constructor en vez de usar move
        SaveFlightData(const Posicion& p, const Presion& q): posicion(p), presion(q){};
        void serializar(ofstream& out);
        void deserializar(ofstream& in);
        void imprimir();

        Posicion posicion;
        Presion presion;

};