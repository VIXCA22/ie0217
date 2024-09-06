#ifndef TIENDA_HPP
#define TIENDA_HPP
//Se defiene  el archivo cabecera de Tienda 

#include <iostream>
#include <string>
#include <vector>
#include "Producto.hpp"
#include "Cliente.hpp"
//Se incluyen los archivos cabeceras de Producto y Cliente ya que se necesita acceder a la información

using namespace std;

//Se crea la clase base de tienda
class Tienda {
    //Se definen los dos arreglos con punteros de Procucto  y Cliente para poder interactuar con la informacion y guardarla
    private:
       vector<Producto*> productosDisponibles;
       vector<Cliente*> clientes; 
    public:
        Tienda();//Se crea el constructor sin atributos ya que no se necesita inicializar atributos propias de la clase 
        virtual ~Tienda();//Se libera la memoria

        //Se definen las funciones a usar para guardarlas en los vectores o arreglos que corresponde a cada uno
        void agregarProducto(Producto* producto); 
        void agregarCliente(Cliente* cliente);

        // Esta función se encargara usando size_t para definir el tamaño de nuestro arreglo de productos
        size_t obtenerCantidadProductos() const;

        //Estas dos sub-funciones se encargaran de acceder por medio de los punteros a la información de cliente por el nombre y del producto por el id y serán
        //utilizadas para otras funciones principales
        Cliente* buscarCliente(const string& nombre) const;
        Producto* buscarProducto(size_t indice) const;

        //Esta funcion accedera a la información guardad en cliente 
        void procesarCompra(Cliente* cliente);
};

#endif // TIENDA_HPP
