#include "Producto.hpp"
//Se hace referencia de la cabecera producto ya que todo fue definido en ese archivo


//Se inicializa la clase producto con sus respectivos atributos
Producto::Producto(const string &nombre, double precio)
    : nombre(nombre), precio(precio) {} 

//Se procede al encapsulamiento de los respectivos atributos donde se guardaran por medio de punteros
void Producto::setNombre(const string &nombre) {
    this->nombre = nombre;
}

string Producto::getNombre() const {
    return nombre;
}

void Producto::setPrecio(double precio){
    this->precio = precio;
}

double Producto::getPrecio() const {
    return precio;
}
//Se inicializa la clase producto digital con sus respectivos atributos
ProductoDigital::ProductoDigital(const string &nombre, int id, double precio, const string &tamano) 
: Producto(nombre, precio), id(id), tamano(tamano) {} 

//Se procede al encapsulamiento de los respectivos atributos 
void ProductoDigital::setId(int id){
    this->id = id;
}

int ProductoDigital::getId() const {
    return id;
}

void ProductoDigital::setTamano(const string &tamano) {
    this->tamano = tamano;
}

string ProductoDigital::getTamano() const {
    return tamano;
}
//Se inicializa la clase producto fisico con sus respectivos atributos
ProductoFisico::ProductoFisico(const string &nombre, double precio, double peso) 
: Producto(nombre, precio), peso(peso) {} 

//Se procede al encapsulamiento de los respectivos atributos 
void ProductoFisico::setPeso(double peso){
    this->peso = peso;
}

double ProductoFisico::getPeso() const {
    return peso;
}
