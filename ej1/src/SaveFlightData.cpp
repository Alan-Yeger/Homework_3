#include "../includes/SaveFlightData.hpp"

//Serializamos los datos de vuelo
void SaveFlightData::serializar(ofstream &out) {
    posicion.serializar(out);
    presion.serializar(out);
}

//Deserializamos los datos de vuelo
void SaveFlightData::deserializar(ifstream &in) {
    posicion.deserializar(in);
    presion.deserializar(in);
}

//Imprimimos lso datos de vuelo
void SaveFlightData::imprimir() {
    cout << "Mediciones:\n";
    posicion.imprimir();
    presion.imprimir();
}