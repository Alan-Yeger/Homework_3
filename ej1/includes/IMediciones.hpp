#include <iostream>
#include <fstream>

using namespace std;

class IMediciones {
    public:
        virtual void serializar(ofstream& out);
        virtual void deserializar(ofstream& in);
        virtual ~IMediciones() = default;
};