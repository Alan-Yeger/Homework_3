#pragma once
#include "diccionario.hpp"
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <type_traits>

using namespace std;

class Clase2 {
    private:
        //En principio traté de hacerlo con un único vector, pero como los templates tienen distintos tipos T no podía
        //Pensé en usar una clase contenedor_base con polimorfismo pero terminaba usando más clases de las que pide el problema.
        //En esta implementación tenemos 3 referencias distintas a vectores con los distintos tipos que nos piden
        const vector<double>& vec_doubles;
        const vector<string>& palabras;
        const vector<vector<int>>& listas;

    public:
        //Inicializamos el objeto con referencias a los vectores de las otras clases
        Clase2(const Clase1& c1): vec_doubles(c1.getDoubles()), palabras(c1.getPalabras()), listas(c1.getListas()) {}

        void imprimirJSON() {
            cout << "{\n";

            // Imprimir doubles
            cout << " \"vec_doubles\" : [";
            for (size_t i = 0; i < vec_doubles.size(); i++) {
                cout << vec_doubles[i];
                if (i != vec_doubles.size() - 1) cout << ", ";
            }
            cout << "],\n";

            // Imprimir strings
            cout << " \"palabras\" : [";
            for (size_t i = 0; i < palabras.size(); i++) {
                cout << "\"" << palabras[i] << "\"";
                if (i != palabras.size() - 1) cout << ", ";
            }
            cout << "],\n";

            // Imprimir matriz de enteros
            cout << " \"listas\" : [\n";
            for (size_t i = 0; i < listas.size(); i++) {
                cout << "  [";
                for (size_t j = 0; j < listas[i].size(); j++) {
                    cout << listas[i][j];
                    if (j != listas[i].size() - 1) cout << ", ";
                }
                cout << "]";
                if (i != listas.size() - 1) cout << ",";
                cout << "\n";
            }
            cout << " ]\n";

            cout << "}\n";
        }
};