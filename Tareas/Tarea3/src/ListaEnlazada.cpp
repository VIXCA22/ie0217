#include "ListaEnlazada.hpp"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

//Se accede por medio del puntero a cancion para incertar nuestro objeto cancion al inicio
void ListaEnlazada::insertarInicio(const Cancion& nuevaCancion) {
    Nodo* nuevoNodo = new Nodo(nuevaCancion); //crea el nuevo nodo del objeto
    nuevoNodo->siguiente = cabeza; //sigue al nodo siguiente
    cabeza = nuevoNodo; 
}
//Se accede por medio del puntero a cancion para incertar nuestro objeto cancion a la mitad
void ListaEnlazada::insertarMitad(const Cancion& nuevaCancion) {
    Nodo* nuevoNodo = new Nodo(nuevaCancion);

    if (cabeza == nullptr) { //esto verifica si el nodo es nulo
        cabeza = nuevoNodo;
        return;
    }

    int longitud = 0; //toma la longitud de los elementos inicialmente como 0
    Nodo* temp = cabeza;// se crea una varible temporal apuntando a cabeza 
    while (temp != nullptr) { //si es diferente del nodo nulo debido a que es el total de espacios seguirá sumando
        longitud++;  //suma el espacio
        temp = temp->siguiente;
    }

    int mitad = longitud / 2; //el total de espacios se divide en 2
    if (mitad == 0) { //si no hay elementos en nuestro arreglo se asignará en el primer espacio del arbol
        nuevoNodo->siguiente = cabeza;
        cabeza = nuevoNodo;
        return;
    }

    temp = cabeza;
    int contador = 0;
    while (contador < mitad - 1) { // esto hace que si la mitad es un numero impar  se redondee 
        temp = temp->siguiente;//y se guarde en el nodo sucesor del mayor
        contador++;
    }

    nuevoNodo->siguiente = temp->siguiente;
    temp->siguiente = nuevoNodo; //se guarda el valor en el nodo correspondiente
}

//Se incerta al final verificando si es nulo por  lo tanto no tendría elementos
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
  //Se compara el valor ingresado para eliminarlo
void ListaEnlazada::eliminarCancion(const string& nombre) {
    if (cabeza == nullptr) return;

    if (cabeza->cancion.getNombre() == nombre) { //se compara el nombre ingresado si es
        Nodo* nodoAEliminar = cabeza; // el que hace similitud con el ya guardado
        cabeza = cabeza->siguiente;
        delete nodoAEliminar;// se elimina
        return;
    }
    
    //Esto es para que alaeliminar se reacomode nuestra información en el arbol al eliminar nuestro elemento
    Nodo* temp = cabeza;
    while (temp->siguiente != nullptr && temp->siguiente->cancion.getNombre() != nombre) {
        temp = temp->siguiente; //se situa en el siguiente
    }

    if (temp->siguiente != nullptr) { //se corren los espacios de los nodos a su respetivo lugar
        Nodo* nodoAEliminar = temp->siguiente;
        temp->siguiente = temp->siguiente->siguiente;
        delete nodoAEliminar;
    }
}
//Se toma como parámetros el nombre para la comparación ademas de el acceso a modificar del espacio del nodo 
void ListaEnlazada::modificarCancion(const string& nombre, const Cancion& nuevaCancion) {
    Nodo* temp = cabeza;
    while (temp != nullptr) {
        cout << "Comparando con: " << temp->cancion.getNombre() << endl;
        if (temp->cancion.getNombre() == nombre) {
            temp->cancion =  nuevaCancion; //se sobrescribe la información
            return;
        }
        temp = temp->siguiente; 
    }
}


void ListaEnlazada::imprimir() const {
    Nodo* temp = cabeza;
    while (temp != nullptr) {
             cout << "Nombre: " << temp->cancion.getNombre()  //Se imprime cada nodo donde esta guardada la información de los atributos de canción
                  << ", Artista: " << temp->cancion.getArtista() 
                  << ", Duración: " << temp->cancion.getDuracion() 
                  << endl;
        temp = temp->siguiente; //se recorre el arbol
    }
}
