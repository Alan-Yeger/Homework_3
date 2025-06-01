#include "../includes/Presion.hpp"

//Serializamos los datos de la presión
void Presion::serializar(ofstream &out) {
    MedicionBase::serializar(out);
    out.write(reinterpret_cast<const char *>(&presionEstatica), sizeof(presionEstatica));
    out.write(reinterpret_cast<const char *>(&presionDinamica), sizeof(presionDinamica));
}

//Deserializamos los datos de la presión
void Presion::deserializar(ifstream &in) {
    MedicionBase::deserializar(in);
    in.read(reinterpret_cast<char *>(&presionEstatica), sizeof(presionEstatica));
    in.read(reinterpret_cast<char *>(&presionDinamica), sizeof(presionDinamica));
}

//Imprimimos los datos de la presión
void Presion::imprimir() {
    cout << "Presión Estática: " << presionEstatica << "\nPresión Dinámica: " << presionDinamica << "\nTiempo de la medición: " << getTiempo() << endl;
}