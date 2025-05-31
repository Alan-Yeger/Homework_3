#pragma once
#include <iostream>
#include <type_traits>
#include <vector>
#include <memory>

using namespace std;

template<typename T>
class Contenedor{
    public:
        void agregarItem(const T& elem);

    private:
        string nombre;
        vector<unique_ptr<T>> contenedor;
};

#include "../src/contenedor.cpp" //Tengo que ver si esto tiene que ir o no