#ifndef NODO_HPP
#define NODO_HPP

#include <iostream>
#include <string>
#include <vector>

#include "Cancion.hpp"

/**
 * @brief La estructura  representa un Nodo en una lista enlazada de canciones.
 * 
 * @details
 * El nodo guarda un objeto de tipo `Cancion` y un puntero que apunta al siguiente nodo,
 * por lo que permite crear una lista enlazada.
 */
struct Nodo {
    Cancion cancion; ///< Objeto que almacena la información de la canción.
    Nodo* siguiente; ///< Puntero que apunta al siguiente nodo en la lista.

    /**
     * @brief Constructor que inicializa un nodo con una canción.
     * 
     * @param nuevaCancion Objeto de tipo Cancion que será almacenado en el nodo.
     * 
     * @details
     * El puntero `siguiente` se inicializa en `nullptr`, indicando que no hay un nodo siguiente al crear este.
     */
    Nodo(const Cancion& nuevaCancion) : cancion(nuevaCancion), siguiente(nullptr) {}
};

#endif // NODO_HPP
