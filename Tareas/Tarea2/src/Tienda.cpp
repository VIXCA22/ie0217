/**
 * @brief Agrega un nuevo producto,cliente.
 *
 * Esta función permite al usuario ingresar productos,clientes.
 *
 * @param producto            Array de producto donde se almacenarán todos los productos.
 * @param cliente             Array de producto donde se almacenarán todos los clientes
 * @return void
 */







#include "Tienda.hpp"
//Se hace referencia de la cabecera de tienda ya que todo fue definido en ese archivo

//Se inicializa la clase tienda
Tienda::Tienda() {}

Tienda::~Tienda() { // Aqui se liberará la memoria por medio del destructor liberando la información guardada en los dos vectores 
    
    for (Producto* producto : productosDisponibles) {
        delete producto;
    }
    for (Cliente* cliente : clientes) {
        delete cliente;
    }
}

//Se inicializa la funcion de agregar producto accediendo a la clase producto y guardandola al vector de punteros productosDisponibles por medio de push_back 
void Tienda::agregarProducto(Producto* producto) {
    productosDisponibles.push_back(producto);
}

void Tienda::agregarCliente(Cliente* cliente) {
    clientes.push_back(cliente);
}

//Se inicializa la funcion de buscar cliente y como se debe acceder la información del vector se utilzan punteros como cliente*
//se recorre el vector por medio de un for designandole el nombre de entrada a cliente para poder compararlo sino que retorne como puntero nulo
Cliente* Tienda::buscarCliente(const string& nombre) const {
    for (Cliente* cliente : clientes) {
        if (cliente->getNombreC() == nombre) {
            return cliente;
        }
    }
    return nullptr;
}

//En este caso se busca algo similiar la diferencia es que el usuario define el tamaño del vector por medio de size_t
//e indice son los espacios del vector
Producto* Tienda::buscarProducto(size_t indice) const {
    if (indice < productosDisponibles.size()) {
        return productosDisponibles[indice];
    }
    return nullptr; 
}

//Se inicializa la funcion de procesar la compra accediendo al vector de cliente utilizando punteros en donde esta
//alojado la informacion de nuestro total , descuento si es que hay y se hace la dedución con el monto final
void Tienda::procesarCompra(Cliente* cliente) {
    if (cliente) {
        double total = cliente->calcularTotal();
        double descuento = cliente->aplicarDescuento();
        double totalConDescuento = total * (1 - descuento);
        cout << "Total a pagar: " << totalConDescuento << endl;
    } else {
        cout << "Cliente no encontrado." << endl;
    }
}

//Esta funcion obtendra la cantidad de productos en el vector 
size_t Tienda::obtenerCantidadProductos() const {
    return productosDisponibles.size();
}
