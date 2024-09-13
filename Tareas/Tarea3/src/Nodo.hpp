#ifndef NODO_HPP
#define NODO_HPP

#include <iostream>
#include <string>
#include <vector>


#include "Cancion.hpp"

struct Nodo {
    Cancion cancion;  // Se crea nuestro objeto tipo canción
    Nodo* siguiente;  //Este nodo puntero siguiente nos servira para apuntar al nodo siguiente

    // Se inicializa el contructor de  Nodo con sus atributos respectivos para el nodo
    Nodo(const Cancion& nuevaCancion) : cancion(nuevaCancion), siguiente(nullptr) {}
};

#endif // NODO_HPP