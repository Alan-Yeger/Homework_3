#pragma once
#include <iostream>
#include <type_traits>
#include <vector>
#include <memory>
#include <concepts>
#include <stdexcept>

using namespace std;

template<typename T>
class Contenedor {
public:
    Contenedor() = default;
    void agregarItem(const T& elem);

    const vector<unique_ptr<T>>& getItems() const {
        return contenedor;
    }

private:
    vector<unique_ptr<T>> contenedor;
};

// ↓↓↓ Implementación de la función template ↓↓↓

template<typename T>
concept is_string = is_same_v<T, string>;

template<typename T>
concept is_Matriz = is_same_v<T, vector<vector<int>>>;

template<typename T>
void Contenedor<T>::agregarItem(const T& elem) {
    if constexpr(is_string<T>) {
        contenedor.push_back(make_unique<T>(elem));
    }
    else if constexpr(is_floating_point_v<T>) {
        contenedor.push_back(make_unique<T>(elem));
    }
    else if constexpr(is_Matriz<T>) {
        contenedor.push_back(make_unique<T>(elem));
    }
    else {
        throw invalid_argument("Tipo de dato no soportado :(");
    }
}
