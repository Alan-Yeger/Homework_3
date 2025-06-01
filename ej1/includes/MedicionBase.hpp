#pragma once
#include "IMediciones.hpp"
#include <iostream>
#include <memory>

using namespace std;

class MedicionBase: public IMediciones {
    public:
        //Constructor default
        MedicionBase() : tiempoMedicion(make_unique<float>(0.0f)) {}
        //Constructor con tiempo pasado por parámetro
        MedicionBase(float t) : tiempoMedicion(make_unique<float>(t)){};

        //Hacemos un copy constructor porque esta clase utiliza un unique_ptr que no es trasladable
        //por lo que cuando queremos copiar el valor para serializarlo o utilizarlo para algo no podemos 
        //solo copiarlo.
        MedicionBase(const MedicionBase& other)
            : tiempoMedicion(make_unique<float>(*other.tiempoMedicion)) {}

        //Cuando queramos copiar el valor sobrecargamos el operador = para asignarlo de esta manera
        MedicionBase& operator=(const MedicionBase& other) {
            if (this != &other) {
                tiempoMedicion = make_unique<float>(*other.tiempoMedicion);
            }
            return *this;
        }

        //Serializamos y deserializamos las mediciones para mayor modularización del código y evitar repetirlo siempre.
        void serializar(ofstream &out) override;
        void deserializar(ifstream &in) override;
        float getTiempo();
        virtual void imprimir() = 0;
        virtual ~MedicionBase() = default;

    protected:
        unique_ptr<float> tiempoMedicion;
};