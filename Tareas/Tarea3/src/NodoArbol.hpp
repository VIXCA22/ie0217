#ifndef NODOARBOL_HPP
#define NODOARBOL_HPP

/**
 * @brief Estructura que representa un nodo en un árbol binario.
 * 
 * Cada nodo en el árbol ocupará un valor entero y dos punteros:
 * - `izquierdo`: un puntero al nodo hijo izquierdo.
 * - `derecho`: un puntero al nodo hijo derecho.
 */
struct NodoArbol {
    int dato; ///< Valor almacenado en el nodo.
    NodoArbol* izquierdo; ///< Puntero al nodo hijo izquierdo.
    NodoArbol* derecho; ///< Puntero al nodo hijo derecho.

    /**
     * @brief Constructor para inicializar un nodo con un valor dado.
     * 
     * @param valor Valor a almacenar en el nodo.
     */
    NodoArbol(int valor) : dato(valor), izquierdo(nullptr), derecho(nullptr) {}
};

#endif // NODOARBOL_HPP
