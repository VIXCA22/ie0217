#ifndef LISTAENLAZADA_HPP
#define LISTAENLAZADA_HPP

#include "Nodo.hpp"
#include <iostream>

class ListaEnlazada {
private:
    Nodo* cabeza;

public:
    ListaEnlazada() : cabeza(nullptr) {}
    //Siempre que la cabeza sea diferente de nulo va a crear el nodo eliminando el anterior(el primero)
    ~ListaEnlazada() {
        while (cabeza != nullptr) {
            Nodo* temp = cabeza;
            cabeza = cabeza->siguiente;
            delete temp;
        }
    }
    //Se crea un nodo creandose como puntero cayendole encima al nodo 
    void insertarInicio(int valor) {
        Nodo* nuevoNodo = new Nodo(valor);
        nuevoNodo->siguiente = cabeza;
        cabeza = nuevoNodo;
    }
    //Se incerta al final verificando si es nulo por  lo tanto no tendría elementos
    void insertarFinal(int valor) {
        Nodo* nuevoNodo = new Nodo(valor);
        if (cabeza == nullptr) {
            cabeza = nuevoNodo;
        } else {
            Nodo* temp = cabeza;
            while (temp->siguiente != nullptr) {
                temp = temp->siguiente;
            }
            temp->siguiente = nuevoNodo;
        }
    }
    //Se compara el valor ingresado para eliminarlo
    void eliminar(int valor) {
        if (cabeza == nullptr) return;

        if (cabeza->dato == valor) {
            Nodo* temp = cabeza;
            cabeza = cabeza->siguiente;
            delete temp;
            return;
        }

        Nodo* temp = cabeza;
        while (temp->siguiente != nullptr && temp->siguiente->dato != valor) {
            temp = temp->siguiente;
        }

        if (temp->siguiente != nullptr) {
            Nodo* nodoAEliminar = temp->siguiente;
            temp->siguiente = temp->siguiente->siguiente;
            delete nodoAEliminar;
        }
    }
    //Se imprime la información dada en cada nodo
    void imprimir() const {
        Nodo* temp = cabeza;
        while (temp != nullptr) {
            std::cout << temp->dato << " -> ";
            temp = temp->siguiente;
        }
        std::cout << "null" << std::endl;
    }
    //Se compara en la cadena de nodos y se imprime el solicitado
    bool buscar(int valor) const {
        Nodo* temp = cabeza;
        while (temp != nullptr) {
            if (temp->dato == valor) return true;
            temp = temp->siguiente;
        }
        return false;
    }
};

#endif //LISTAENLAZADA_HPP