#include "../includes/SaveFlightData.hpp"
#include <iostream>

using namespace std;

int main() {
    //Usamos los valores que nos pide el enunciado
    //Para crear la posición y presión
    Posicion posicionEnunciado(-34.6f, -58.4f, 950.0f, 5.3f);
    Presion presionEnunciado(101.3f, 5.8f, 6.1f);

    //Guardamos los datos en un objeto SaveFlightData
    SaveFlightData datos(posicionEnunciado, presionEnunciado);

    //Serializamos los datos en el archivo binario datos.dat
    ofstream out("datos.dat", ios::binary);
    datos.serializar(out);
    out.close();

    //Deserializamos los datos que recién serializamos
    SaveFlightData datosLeidos{Posicion(), Presion()};
    ifstream in("datos.dat", ios::binary);
    datosLeidos.deserializar(in);
    in.close();


    //Comprobamos que los datos originales coinciden con los deserializados
    cout << "Datos originales:" << endl;
    datos.imprimir();
    cout << "\nDatos deserializados:" << endl;
    datosLeidos.imprimir();

    return 0;
}