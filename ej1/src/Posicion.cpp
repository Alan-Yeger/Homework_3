#include "../includes/Posicion.hpp"

//Serializamos los datos de la posición
void Posicion::serializar(ofstream &out) {
    MedicionBase::serializar(out);
    out.write(reinterpret_cast<const char *>(&latitud), sizeof(latitud));
    out.write(reinterpret_cast<const char *>(&longitud), sizeof(longitud));
    out.write(reinterpret_cast<const char *>(&altitud), sizeof(altitud));
}

//Deserializamos los datos de la posición
void Posicion::deserializar(ifstream &in) {
    MedicionBase::deserializar(in);
    in.read(reinterpret_cast<char *>(&latitud), sizeof(latitud));
    in.read(reinterpret_cast<char *>(&longitud), sizeof(longitud));
    in.read(reinterpret_cast<char *>(&altitud), sizeof(altitud));
}

//Imprimimos los datos de la posición
void Posicion::imprimir() {
    cout << "Latitud: " << latitud << "\nLongitud: " << longitud << "\nAltitud: " << altitud << "\nTiempo de la medición: " << getTiempo() << endl;
}