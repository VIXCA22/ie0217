
#include "Cliente.hpp"
//Se hace referencia de la cabecera cliente ya que todo fue definido en ese archivo

//Se inicializa la clase cliente con sus respectivos atributos 
Cliente::Cliente(const string &nombrec, const vector<double> &carrito)
    : nombrec(nombrec), carrito(carrito) {} 

//Se procede a hacer el encapsulamiento de los atributos 
void Cliente::setNombreC(const string &nombrec) {
    this->nombrec = nombrec;
}

string Cliente::getNombreC() const {
    return nombrec;
}

vector<double> Cliente::getCarrito() const {
    return carrito;
}

//En esta inicializacion de la funcion agregar producto se guardará la información a la clase carrito
void Cliente::agregarProducto(double precio) {
    carrito.push_back(precio);  
}

//Esta inicializacion de funciones se encargará de sumar los precios de los productos del carrito usando un bucle for el cual nos recorrera nuestro vector,guardandolo en carrito y 
//sumandole el precio al total
double Cliente::calcularTotal() const {
    double total = 0;
    for (double precio : carrito) {
        total += precio; 
    }
    return total;
}

//Se inicializa la clase cliente regular con sus respectivos atributos 
ClienteRegular::ClienteRegular(const string &nombrec, const vector<double> &carrito)
    : Cliente(nombrec, carrito) {}

//Como no se aplica ningún descuento en cliente regular le hacemos devolver 0
double ClienteRegular::aplicarDescuento() const {
    return 0; 
}
//Se inicializa la clase cliente regular con sus respectivos atributos 
ClientePremium::ClientePremium(const string &nombrec, const vector<double> &carrito, double descuento)
    : Cliente(nombrec, carrito), descuento(descuento) {}

//En esta función si se le debe aplicar descuento por lo que nos devolvera el descuento a cuando se lo hayamos asignado
double ClientePremium::aplicarDescuento() const {
    return descuento; // Descuento aplicado para clientes premium
}
