#include "../includes/contenedor.hpp"
#include "../includes/diccionario.hpp"
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <type_traits>

int main() {
    Clase1 c1;

    // Agregamos doubles
    c1.add(1.3);
    c1.add(2.1);
    c1.add(3.2);

    // Agregamos strings
    c1.add(std::string("Hola"));
    c1.add(std::string("Mundo"));

    // Agregamos listas de int (filas)
    c1.add(std::vector<int>{1, 2});
    c1.add(std::vector<int>{3, 4});

    // Creamos la clase 2 que arma el JSON
    Clase2 c2(c1);
    c2.imprimirJSON();

    return 0;
}
