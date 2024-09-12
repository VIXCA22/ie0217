#ifndef NODOARBOL_HPP
#define NODOARBOL_HPP

//Cada nodo ocupará los punteros  del izquierdo y derecho
struct NodoArbol {
    int dato;
    NodoArbol* izquierdo;
    NodoArbol* derecho;

    NodoArbol(int valor) : dato(valor), izquierdo(nullptr), derecho(nullptr) {}
};

#endif