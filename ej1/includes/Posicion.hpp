#include "MedicionBase.hpp"
#include <iostream>

using namespace std;

class Posicion: public MedicionBase {
    public:
        Posicion(float lat, float lon, float alt, float t): latitud(lat), longitud(lon), altitud(alt), MedicionBase(t){};
        void imprimir() override;
        
        float latitud; // lat
        float longitud; // lon
        float altitud; // alt
};