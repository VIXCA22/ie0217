#include "ListaEnlazada.hpp"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * @brief Inserta una canción al inicio de la lista.
 * 
 * @param nuevaCancion Objeto de tipo Cancion insertado.
 * 
 * @details
 * Se accede por medio del puntero a cancion para insertar nuestro objeto canción al inicio.
 */
void ListaEnlazada::insertarInicio(const Cancion& nuevaCancion) {
    Nodo* nuevoNodo = new Nodo(nuevaCancion); ///< Crea el nuevo nodo del objeto.
    nuevoNodo->siguiente = cabeza; ///< Apunta al nodo siguiente.
    cabeza = nuevoNodo;
}

/**
 * @brief Inserta una nueva canción en la mitad de la lista.
 * 
 * @param nuevaCancion Objeto de tipo Cancion que será insertado.
 * 
 * @details
 * Se accede por medio del puntero a cancion para insertar nuestro objeto canción a la mitad.
 */
void ListaEnlazada::insertarMitad(const Cancion& nuevaCancion) {
    Nodo* nuevoNodo = new Nodo(nuevaCancion);

    if (cabeza == nullptr) { ///< Esto verifica si el nodo es nulo.
        cabeza = nuevoNodo;
        return;
    }

    int longitud = 0; ///< Se toma la longitud de los elementos inicialmente como 0.
    Nodo* temp = cabeza; ///< Se crea una variable temporal apuntando a cabeza.
    while (temp != nullptr) { ///< Mientras no sea un nodo nulo, seguirá contando.
        longitud++; ///< Suma el espacio.
        temp = temp->siguiente;
    }

    int mitad = longitud / 2; ///< El total de espacios se divide en 2.
    if (mitad == 0) { ///< Si no hay elementos, se asigna al primer espacio.
        nuevoNodo->siguiente = cabeza;
        cabeza = nuevoNodo;
        return;
    }

    temp = cabeza;
    int contador = 0;
    while (contador < mitad - 1) { ///< Si la mitad es impar, se redondea.
        temp = temp->siguiente;
        contador++;
    }

    nuevoNodo->siguiente = temp->siguiente;
    temp->siguiente = nuevoNodo; ///< Se guarda el valor en el nodo correspondiente.
}

/**
 * @brief Inserta una  canción al final de la lista.
 * 
 * @param nuevaCancion Objeto de tipo Cancion que será insertado.
 * 
 * @details
 * Se inserta al final verificando si la lista está vacía.
 */
void ListaEnlazada::insertarFinal(const Cancion& nuevaCancion) {
    Nodo* nuevoNodo = new Nodo(nuevaCancion);

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

/**
 * @brief Elimina una canción de la lista comparando el nombre.
 * 
 * @param nombre Nombre de la canción que se desea eliminar.
 * 
 * @details
 * Se compara el valor ingresado para eliminar la canción y se reacomodan los nodos.
 */
void ListaEnlazada::eliminarCancion(const string& nombre) {
    if (cabeza == nullptr) return;

    if (cabeza->cancion.getNombre() == nombre) { ///< Compara el nombre ingresado.
        Nodo* nodoAEliminar = cabeza;
        cabeza = cabeza->siguiente;
        delete nodoAEliminar; ///< Se elimina el nodo.
        return;
    }

    Nodo* temp = cabeza;
    while (temp->siguiente != nullptr && temp->siguiente->cancion.getNombre() != nombre) {
        temp = temp->siguiente;
    }

    if (temp->siguiente != nullptr) { ///< Reacomoda los nodos al eliminar el elemento.
        Nodo* nodoAEliminar = temp->siguiente;
        temp->siguiente = temp->siguiente->siguiente;
        delete nodoAEliminar;
    }
}

/**
 * @brief Modifica una canción existente en la lista.
 * 
 * @param nombre Nombre de la canción a modificar.
 * @param nuevaCancion Objeto Cancion que contiene los nuevos datos.
 * 
 * @details
 * Se toman como parámetros el nombre para la comparación y acceso a modificar el nodo.
 */
void ListaEnlazada::modificarCancion(const string& nombre, const Cancion& nuevaCancion) {
    Nodo* temp = cabeza;
    while (temp != nullptr) {
        cout << "Comparando con: " << temp->cancion.getNombre() << endl;
        if (temp->cancion.getNombre() == nombre) {
            temp->cancion = nuevaCancion; 
            return;
        }
        temp = temp->siguiente;
    }
}

/**
 * @brief Imprime todas las canciones almacenadas en la lista enlazada.
 * 
 * @details
 * Se recorre la lista y se imprime cada nodo con los atributos de la canción.
 */
void ListaEnlazada::imprimir() const {
    Nodo* temp = cabeza;
    while (temp != nullptr) {
        cout << "Nombre: " << temp->cancion.getNombre() 
             << ", Artista: " << temp->cancion.getArtista() 
             << ", Duración: " << temp->cancion.getDuracion() 
             << endl;
        temp = temp->siguiente; 
    }
}
