#ifndef ARBOLBINARIOBUSQUEDA_HPP
#define ARBOLBINARIOBUSQUEDA_HPP

#include "NodoArbol.hpp"
#include <iostream>
#include <algorithm>

using namespace std;

class ArbolBinarioBusqueda {
private:
    // Inicia el árbol con raíz
    NodoArbol* raiz;

    // Para insertar el nodo se verifica que los valores de la derecha sean mayores, izquierda debe ser menor y se debe verificar si es nulo el nodo
    void insertarNodo(NodoArbol*& nodo, int valor) {
        if (nodo == nullptr) {
            nodo = new NodoArbol(valor);
        } else if (valor < nodo->dato) {
            insertarNodo(nodo->izquierdo, valor);
        } else {
            insertarNodo(nodo->derecho, valor);
        }
    }

    NodoArbol* eliminarNodo(NodoArbol* nodo, int valor) {
        if (nodo == nullptr) return nodo; //verifica si el nodo es nulo o si se llega al final del árbol para retornar nullptr
        if (valor < nodo->dato) { //Se compara los valores del árbol, si esta es  menor al valor actual seguira buscando en el 
            nodo->izquierdo = eliminarNodo(nodo->izquierdo, valor);//el subarbol izquierdo
        } else if (valor > nodo->dato) { //Lo mismo para el derecho si no ha encontrado el valor en el subárbol anterior solo que buscando el valor mayor
            nodo->derecho = eliminarNodo(nodo->derecho, valor);
        } else {
            if (nodo->izquierdo == nullptr) { //El primer caso para eliminarlo es que si no tiene hijo izquierdo , guardamos el puntero en el hijo derecho
                NodoArbol* temp = nodo->derecho;//en una variable temporal  se elimina el nodo y se retorna el puntero hacia el derecho , esto mismo para el siguiente caso
                delete nodo; // pero de diferente manera ya que se trata si no hubiera hijo derecho
                return temp;
            } else if (nodo->derecho == nullptr) {
                NodoArbol* temp = nodo->izquierdo;
                delete nodo;
                return temp;
            }
             //Cuando se tiene dos hijos se verifica cual de los dos es el mas pequeño para remplazar nuestro nodo a elminar
            NodoArbol* temp = obtenerMinimo(nodo->derecho); //Se llama la función obtenerMinimo para encontrar el valor min del subárbol derecho siendo
            nodo->dato = temp->dato; //el anterior a eliminar e indicandole que busque en el derecho ya que inicialmente busca el izquierdo
            nodo->derecho = eliminarNodo(nodo->derecho, temp->dato); // se elimina
        }
        return nodo; //retorna el nodo 
    }

  NodoArbol* obtenerMinimo(NodoArbol* nodo) const {
    if (nodo == nullptr) return nullptr; 
    if (nodo->izquierdo == nullptr) return nodo; // Si no tuviera hijo izquierdo este sería el mínimo
    return obtenerMinimo(nodo->izquierdo); // Continuamos buscando en el subárbol izquierdo
}

    // Inorden imprime los valores en orden ascendente
    void inOrden(NodoArbol* nodo) const {
        if (nodo != nullptr) {
            inOrden(nodo->izquierdo);
            cout << nodo->dato << " ";
            inOrden(nodo->derecho);
        }
    }

    // Altura es el recorrido más largo del árbol
    int altura(NodoArbol* nodo) const {
        if (nodo == nullptr) return 0;
        return 1 + max(altura(nodo->izquierdo), altura(nodo->derecho));
    }

    // La altura entre el lado derecho e izquierdo debe ser 1
    bool estaBalanceado(NodoArbol* nodo) const {
        if (nodo == nullptr) return true;

        int alturaIzquierda = altura(nodo->izquierdo);
        int alturaDerecha = altura(nodo->derecho);

        return abs(alturaIzquierda - alturaDerecha) <= 1 &&
               estaBalanceado(nodo->izquierdo) &&
               estaBalanceado(nodo->derecho);
    }

public:
    // El constructor inicializa la raíz como nula
    ArbolBinarioBusqueda() : raiz(nullptr) {}

    // Permite establecer una raíz manualmente
    void establecerRaiz(NodoArbol* nuevaRaiz) {
        raiz = nuevaRaiz;
    }

    // Inserta un valor en el árbol
    void insertar(int valor) {
        insertarNodo(raiz, valor);
    }

    // Elimina un valor del árbol
    void eliminar(int valor) {
        raiz = eliminarNodo(raiz, valor);
    }

    // Imprime el árbol en orden ascendente
    void inOrden() const {
        inOrden(raiz);
        cout << endl;
    }

    // Retorna la altura del árbol
    int altura() const {
        return altura(raiz);
    }

    // Verifica si el árbol está balanceado
    bool estaBalanceado() const {
        return estaBalanceado(raiz);
    }
};

#endif
