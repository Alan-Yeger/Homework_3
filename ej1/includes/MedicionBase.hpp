#include "IMediciones.hpp"
#include <iostream>
#include <memory>

using namespace std;

class MedicionBase: public IMediciones {
    public:
        MedicionBase(float t) : tiempoMedicion(std::make_unique<float>(t)){};
        float getTiempo();
        virtual void imprimir() = 0;
        virtual ~MedicionBase();

    protected:
        unique_ptr<float> tiempoMedicion;

    
};