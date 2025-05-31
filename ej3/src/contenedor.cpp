#pragma once
#include "../includes/contenedor.hpp"
#include <concepts>
#include <stdexcept>



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
    };
    
}