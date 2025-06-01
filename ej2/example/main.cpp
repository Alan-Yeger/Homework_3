#include "../includes/ProcesadorFigura.hpp"
#include <iostream>

using namespace std;

int main() {
    
    //Circulo
    Circulo c;

    cout << "El área del círculo por defecto es: " << ProcesadorFigura<Circulo>::area(c) << "\n";

    //Probamos los setters
    c.setX(5);
    c.setY(7);
    c.setR(2);
    
    cout << "El área del nuevo círculo es: " << ProcesadorFigura<Circulo>::area(c) << "\n";

    //Elipse
    Elipse e;

    cout << "El área de la elipse por defecto es: " << ProcesadorFigura<Elipse>::area(e) << "\n";

    //Probamos los setters
    e.setX(8);
    e.setY(3);
    e.setA(4);
    e.setB(7);
    
    cout << "El área de la nueva elipse es: " << ProcesadorFigura<Elipse>::area(e) << "\n";

    //Rectángulo
    Rectangulo r;

    cout << "El área del rectángulo por defecto es: " << ProcesadorFigura<Rectangulo>::area(r) << "\n";

    //Probamos los setters
    r.setX(9);
    r.setY(1);
    r.setW(10.3);
    r.setH(5.7);
    
    cout << "El área del nuevo rectángulo es: " << ProcesadorFigura<Rectangulo>::area(r) << "\n";

    //Punto
    Punto p;

    cout << "El área del círculo por defecto es: " << ProcesadorFigura<Punto>::area(p) << "\n";

    //Probamos los setters
    p.setX(150);
    p.setY(193);
    
    cout << "El área del nuevo círculo es: " << ProcesadorFigura<Punto>::area(p) << "\n";

}