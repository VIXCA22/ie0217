#ifndef NODO_HPP
#define NODO_HPP


//Constructor con atributos públicos pero clase privada por defecto
struct Nodo {
    int dato;
    Nodo* siguiente;
    
    Nodo(int valor) : dato(valor), siguiente(nullptr) {}
};

#endif //NODO_HPP
