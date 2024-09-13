#ifndef ARBOLBINARIOBUSQUEDA_HPP
#define ARBOLBINARIOBUSQUEDA_HPP

#include "NodoArbol.hpp"
#include <iostream>
#include <algorithm>

using namespace std;

/**
 * @brief Clase ArbolBinarioBusqueda esto implementa un árbol binario de búsqueda.
 */
class ArbolBinarioBusqueda {
private:
    /** 
     * @brief Raíz del árbol binario de búsqueda.
     */
    NodoArbol* raiz;

    /**
     * @brief Inserta un nuevo nodo en el árbol binario de búsqueda.
     * 
     * @param nodo Puntero al nodo en el que se va a insertar.
     * @param valor Valor a insertar en el árbol.
     * 
     * @details
     * Para insertar el nodo, se verifica que los valores de la derecha sean mayores, 
     * los de la izquierda deben ser menores, y se debe verificar si el nodo es nulo.
     */
    void insertarNodo(NodoArbol*& nodo, int valor) {
        if (nodo == nullptr) {
            nodo = new NodoArbol(valor);
        } else if (valor < nodo->dato) {
            insertarNodo(nodo->izquierdo, valor);
        } else {
            insertarNodo(nodo->derecho, valor);
        }
    }

    /**
     * @brief Elimina un nodo con el valor especificado del árbol.
     * 
     * @param nodo Puntero al nodo desde donde se buscará el valor a eliminar.
     * @param valor Valor que se desea eliminar del árbol.
     * @return NodoArbol* Puntero al nodo actualizado tras la eliminación.
     * 
     * @details
     * Verifica si el nodo es nulo o si se llega al final del árbol para retornar nullptr.
     * Compara los valores del árbol para buscar el nodo a eliminar con tres casos:
     * - Nodo sin hijos.
     * - Nodo con un hijo.
     * - Nodo con dos hijos el cual  encuentra el valor mínimo del subárbol derecho para reemplazar.
     */
    NodoArbol* eliminarNodo(NodoArbol* nodo, int valor) {
        if (nodo == nullptr) return nodo; // verifica si el nodo es nulo o si se llega al final del árbol para retornar nullptr
        if (valor < nodo->dato) { // Se compara los valores del árbol, si el valor es menor al valor actual seguirá buscando en el subárbol izquierdo
            nodo->izquierdo = eliminarNodo(nodo->izquierdo, valor);
        } else if (valor > nodo->dato) { // Lo mismo para el derecho si no ha encontrado el valor en el subárbol anterior, pero buscando el valor mayor
            nodo->derecho = eliminarNodo(nodo->derecho, valor);
        } else {
            if (nodo->izquierdo == nullptr) { // El primer caso para eliminarlo es que si no tiene hijo izquierdo, guardamos el puntero en el hijo derecho
                NodoArbol* temp = nodo->derecho; // en una variable temporal, se elimina el nodo y se retorna el puntero hacia el derecho
                delete nodo; // Esto mismo para el siguiente caso, pero de diferente manera ya que se trata de que no haya hijo derecho
                return temp;
            } else if (nodo->derecho == nullptr) {
                NodoArbol* temp = nodo->izquierdo;
                delete nodo;
                return temp;
            }
            // Cuando se tienen dos hijos se verifica cuál de los dos es el más pequeño para reemplazar nuestro nodo a eliminar
            NodoArbol* temp = obtenerMinimo(nodo->derecho); // Se llama la función obtenerMinimo para encontrar el valor min del subárbol derecho
            nodo->dato = temp->dato; // Se reemplaza el nodo a eliminar con el valor mínimo
            nodo->derecho = eliminarNodo(nodo->derecho, temp->dato); // Se elimina el nodo con el valor mínimo
        }
        return nodo; // retorna el nodo actualizado
    }

    /**
     * @brief Obtiene el nodo con el valor mínimo en el subárbol.
     * 
     * @param nodo Puntero al nodo desde donde se buscará el mínimo.
     * @return NodoArbol* Puntero al nodo con el valor mínimo.
     * 
     * @details
     * Se busca el valor mínimo en el subárbol izquierdo.
     */
    NodoArbol* obtenerMinimo(NodoArbol* nodo) const {
        if (nodo == nullptr) return nullptr;
        if (nodo->izquierdo == nullptr) return nodo; // Si no tiene hijo izquierdo, este sería el mínimo
        return obtenerMinimo(nodo->izquierdo); // Continuamos buscando en el subárbol izquierdo
    }

    /**
     * @brief Imprime los nodos del árbol en orden ascendente (inorden).
     * 
     * @param nodo Puntero al nodo actual.
     * 
     * @details
     * Imprime los valores en orden ascendente.
     */
    void inOrden(NodoArbol* nodo) const {
        if (nodo != nullptr) {
            inOrden(nodo->izquierdo);
            cout << nodo->dato << " ";
            inOrden(nodo->derecho);
        }
    }

    /**
     * @brief Calcula la altura del árbol binario de búsqueda.
     * 
     * @param nodo Puntero al nodo actual.
     * @return int Altura del árbol.
     * 
     * @details
     * La altura es el recorrido más largo desde la raíz hasta una hoja.
     */
    int altura(NodoArbol* nodo) const {
        if (nodo == nullptr) return 0;
        return 1 + max(altura(nodo->izquierdo), altura(nodo->derecho));
    }

    /**
     * @brief Verifica si el árbol está balanceado.
     * 
     * @param nodo Puntero al nodo actual.
     * @return true si el árbol está balanceado.
     * @return false si el árbol no está balanceado.
     * 
     * @details
     * La altura entre el lado derecho e izquierdo debe ser como máximo 1 para que el árbol esté balanceado.
     */
    bool estaBalanceado(NodoArbol* nodo) const {
        if (nodo == nullptr) return true;

        int alturaIzquierda = altura(nodo->izquierdo);
        int alturaDerecha = altura(nodo->derecho);

        return abs(alturaIzquierda - alturaDerecha) <= 1 &&
               estaBalanceado(nodo->izquierdo) &&
               estaBalanceado(nodo->derecho);
    }

public:
    /**
     * @brief Constructor que inicializa la raíz como nula.
     */
    ArbolBinarioBusqueda() : raiz(nullptr) {}

    /**
     * @brief Establece una nueva raíz para el árbol.
     * 
     * @param nuevaRaiz Puntero a la nueva raíz del árbol.
     */
    void establecerRaiz(NodoArbol* nuevaRaiz) {
        raiz = nuevaRaiz;
    }

    /**
     * @brief Inserta un valor en el árbol binario de búsqueda.
     * 
     * @param valor Valor a insertar.
     */
    void insertar(int valor) {
        insertarNodo(raiz, valor);
    }

    /**
     * @brief Elimina un valor del árbol binario de búsqueda.
     * 
     * @param valor Valor a eliminar.
     */
    void eliminar(int valor) {
        raiz = eliminarNodo(raiz, valor);
    }

    /**
     * @brief Imprime los nodos del árbol en orden ascendente.
     */
    void inOrden() const {
        inOrden(raiz);
        cout << endl;
    }

    /**
     * @brief Retorna la altura del árbol binario de búsqueda.
     * 
     * @return int Altura del árbol.
     */
    int altura() const {
        return altura(raiz);
    }

    /**
     * @brief Verifica si el árbol está balanceado.
     * 
     * @return true si el árbol está balanceado.
     * @return false si el árbol no está balanceado.
     */
    bool estaBalanceado() const {
        return estaBalanceado(raiz);
    }
};

#endif
