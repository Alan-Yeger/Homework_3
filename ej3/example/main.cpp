#include "../includes/contenedor.hpp"
#include "../includes/diccionario.hpp"
#include <iostream>

int main() {
    auto doubles = make_shared<Contenedor<double>>();
    doubles->agregarItem(1.3);
    doubles->agregarItem(2.1);
    doubles->agregarItem(3.2);

    auto palabras = make_shared<Contenedor<string>>();
    palabras->agregarItem("Hola");
    palabras->agregarItem("Mundo");

    auto listas = make_shared<Contenedor<vector<vector<int>>>>();
    listas->agregarItem({{1, 2}, {3, 4}});

    Diccionario<double> diccDoubles;
    Diccionario<string> diccStrings;
    Diccionario<vector<vector<int>>> diccMatrices;

    diccDoubles.agregarContenedor("vec_doubles", doubles);
    diccStrings.agregarContenedor("palabras", palabras);
    diccMatrices.agregarContenedor("listas", listas);

    diccDoubles.mostrarJSON();
    diccStrings.mostrarJSON();
    diccMatrices.mostrarJSON();
}