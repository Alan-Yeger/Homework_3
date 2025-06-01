#include "../includes/MedicionBase.hpp"

//Devolvemos el tiempo de la medición
float MedicionBase::getTiempo() {
    return *tiempoMedicion;
}

//Serializamos el tiempo de la medición
void MedicionBase::serializar(ofstream &out) {
    out.write(reinterpret_cast<const char *>(tiempoMedicion.get()), sizeof(float));
}


//Deserializamos el tiempo de la medición
void MedicionBase::deserializar(ifstream &in) {
    float newTiempoMedicion;
    in.read(reinterpret_cast<char *>(&newTiempoMedicion), sizeof(newTiempoMedicion));
    tiempoMedicion = make_unique<float>(newTiempoMedicion);
}