#pragma once
#include "contenedor.hpp"
#include <iostream>
#include <map>
#include <memory>
#include <type_traits>

using namespace std;

template<typename T>
class Diccionario {
public:
    void agregarContenedor(string nombre, shared_ptr<Contenedor<T>> cont);
    void mostrarJSON() const;

private:
    map<string, shared_ptr<Contenedor<T>>> dict;
};

// ↓↓↓ Implementaciones ↓↓↓

template<typename T>
void Diccionario<T>::agregarContenedor(string nombre, shared_ptr<Contenedor<T>> cont) {
    dict[nombre] = cont;
}

template<typename T>
void Diccionario<T>::mostrarJSON() const {
    cout << "{\n";
    size_t i = 0;
    for (const auto& [clave, cont] : dict) {
        cout << "  \"" << clave << "\": [";
        const auto& items = cont->getItems();

        for (size_t j = 0; j < items.size(); ++j) {
            if constexpr (is_same_v<T, string>) {
                cout << "\"" << *items[j] << "\"";
            } else if constexpr (is_same_v<T, vector<vector<int>>>) {
                const auto& matriz = *items[j];
                cout << "\n";
                for (const auto& fila : matriz) {
                    cout << "    [";
                    for (size_t k = 0; k < fila.size(); ++k) {
                        cout << fila[k];
                        if (k + 1 < fila.size()) cout << ", ";
                    }
                    cout << "]";
                    if (&fila != &matriz.back()) cout << ",\n";
                }
                cout << "\n  ";
            } else {
                cout << *items[j];
            }
            if (j + 1 < items.size()) cout << ", ";
        }
        cout << "]";
        if (++i < dict.size()) cout << ",";
        cout << "\n";
    }
    cout << "}\n";
}
