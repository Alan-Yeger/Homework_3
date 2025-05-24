
#include "MedicionBase.hpp"
#include <iostream>

using namespace std;

class Presion: public MedicionBase {
    public:
        Presion(float p, float q, float t): presionEstatica(p), presionDinamica(q), MedicionBase(t){};
        void imprimir() override;

        float presionEstatica; // p
        float presionDinamica; // q
};