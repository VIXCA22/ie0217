#ifndef ARBOLBINARIOBUSQUEDA_HPP
#define ARBOLBINARIOBUSQUEDA_HPP

#include "NodoArbol.hpp"
#include <iostream>
#include <algorithm>


class ArbolBinarioBusqueda {
private:
//Inicia el arbol con raiz
    NodoArbol* raiz;

//Para insertar el nodo se verifica que los valores de la derecha sean mayores , izquierda debe ser menor y se debe verificar si es nulo el nodo
    void insertarNodo(NodoArbol*& nodo, int valor) {
        if (nodo == nullptr) {
            nodo = new NodoArbol(valor);
        } else if (valor < nodo->dato) {
            insertarNodo(nodo->izquierdo, valor);
        } else {
            insertarNodo(nodo->derecho, valor);
        }
    }

//Se recorre primero la raíz la parte izquierda y luego la derecha 
    void preOrden(NodoArbol* nodo) const {
        if (nodo != nullptr) {
            std::cout << nodo->dato << " ";
            preOrden(nodo->izquierdo);
            preOrden(nodo->derecho);
        }
    }

//Se recorre primero  el nodo raíz luego subárbol izquierdo luego el derecho
    void inOrden(NodoArbol* nodo) const {
        if (nodo != nullptr) {
            inOrden(nodo->izquierdo);
            std::cout << nodo->dato << " ";
            inOrden(nodo->derecho);
        }
    }
//Se recorre de primero la parte izquierda luego el derecho y por último la raíz
    void postOrden(NodoArbol* nodo) const {
        if (nodo != nullptr) {
            postOrden(nodo->izquierdo);
            postOrden(nodo->derecho);
            std::cout << nodo->dato << " ";
        }
    }
//Se recorre el arbol para  buscar el valor
    bool buscarNodo(NodoArbol* nodo, int valor) const {
        if (nodo == nullptr) return false;
        if (nodo->dato == valor) return true;
        if (valor < nodo->dato) return buscarNodo(nodo->izquierdo, valor);
        return buscarNodo(nodo->derecho, valor);
    }

//Altura es es recorrido mas largo del árbol 
    int altura(NodoArbol* nodo) const {
        if (nodo == nullptr) return 0;
        return 1 + std::max(altura(nodo->izquierdo), altura(nodo->derecho));
    }

//La altura entre el lado derecho e izquiero debe ser 1
    bool estaBalanceado(NodoArbol* nodo) const {
        if (nodo == nullptr) return true;

        int alturaIzquierda = altura(nodo->izquierdo);
        int alturaDerecha = altura(nodo->derecho);

        return std::abs(alturaIzquierda - alturaDerecha) <= 1 &&
               estaBalanceado(nodo->izquierdo) &&
               estaBalanceado(nodo->derecho);
    }

//Aqui se implementan las funciones
public:
    ArbolBinarioBusqueda() : raiz(nullptr) {}

    void insertar(int valor) {
        insertarNodo(raiz, valor);
    }

    void preOrden() const {
        preOrden(raiz);
        std::cout << std::endl;
    }

    void inOrden() const {
        inOrden(raiz);
        std::cout << std::endl;
    }

    void postOrden() const {
        postOrden(raiz);
        std::cout << std::endl;
    }

    bool buscar(int valor) const {
        return buscarNodo(raiz, valor);
    }

    int altura() const {
        return altura(raiz);
    }

    bool estaBalanceado() const {
        return estaBalanceado(raiz);
    }
};

#endif