#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <type_traits>

using namespace std;

class Clase1 {
    private:
        //Usamos 3 vectores distintos según el tipo de dato
        vector<double> vec_doubles;
        vector<string> palabras;
        vector<vector<int>> listas;

public:
    // Método template para agregar datos con constexpr según el tipo
    template<typename T>
    void add(const T& dato) {
        if constexpr (is_same_v<T, double>) {
            vec_doubles.push_back(dato);
        }
        else if constexpr (is_same_v<T, string>) {
            palabras.push_back(dato);
        }
        else if constexpr (is_same_v<T, vector<int>>) {
            listas.push_back(dato);
        }
        else {
            static_assert(always_false<T>::value, "Tipo no soportado");
        }
    }

    // Métodos para acceder a los datos (solo lectura)
    const vector<double>& getDoubles() const { return vec_doubles; }
    const vector<string>& getPalabras() const { return palabras; }
    const vector<vector<int>>& getListas() const { return listas; }

private:
    // Truco para static_assert false siempre que se llegue a else
    template<class>
    struct always_false : false_type {};
};