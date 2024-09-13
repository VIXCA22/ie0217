#ifndef LISTAENLAZADA_HPP
#define LISTAENLAZADA_HPP

#include <string>
#include <vector>

#include "Cancion.hpp"

using namespace std;

//Constructor con atributos públicos pero clase privada por defecto
struct Nodo { 
    Cancion cancion;
    Nodo* siguiente;

    Nodo(const Cancion& nuevaCancion) 
        : cancion(nuevaCancion), siguiente(nullptr) {}
};

//Definicion del contructor de los nodos y funciones utilizadas en el cpp
class ListaEnlazada {
private:
    Nodo* cabeza;

public:
    ListaEnlazada() : cabeza(nullptr) {}


    void insertarInicio(const Cancion& nuevaCancion);
    void insertarMitad(const Cancion& nuevaCancion);
    void insertarFinal(const Cancion& nuevaCancion);
    void eliminarCancion(const string& nombre);
    void modificarCancion(const string& nombre, const Cancion& nuevaCancion);
    void imprimir() const;
};

#endif // LISTAENLAZADA_HPP
