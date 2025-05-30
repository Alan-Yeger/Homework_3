#pragma once
#include <type_traits>
#include <iostream>
#include <vector>

using namespace std;

template<typename T>
class Contenedor{
    public:
        void agregarItem(const T& elem);

    private:
        string nombre;
        vector<void*> contenedor;
};