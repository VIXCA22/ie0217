#ifndef CLIENTE_HPP
#define CLIENTE_HPP
//Se defiene  el archivo cabecera de Cliente

#include <iostream>
#include <string>
#include <vector>

using namespace std;

//Se referencia el archivo cabecera de Producto ya que se utilizará en este archivo
#include "Producto.hpp"

// Se crea la clase de cliente de igual forma como se realiza anteriormente con las clases base el tipo de acceso protegido (esto para clases derivadas) y el otro público cualquiera
class Cliente {
    protected://Se define nombre de cliente y el arreglo de carrito en donde se guardará la info de los productos que el cliente haya comprado, esto como double  por el valor de los productos
        string nombrec;          
        vector<double> carrito;  
    public:
        // Se realiza el constructor con las varibles definidas anteriormente y las nuevas definidas en el acceso público
        Cliente(const string &nombrec, const vector<double> &carrito);

        // Se realiza el destructor que nos liberá la memoria de cliente
        virtual ~Cliente() = default;

        // Se definen los métodos  de los setters y getters para guardar y obtener la información
        void setNombreC(const string &nombrec);
        string getNombreC() const;

        //Se define la función que utlizará el vector sobre la obtención de la información de productos del cliente
        vector<double> getCarrito() const;

        // Se define la funcion de agregar el producto al carrito del cliente con su precio
        void agregarProducto(double precio);

        // Se define la funcion de calcular el total del valor de los productos sin ingresar parámetros ya que solo se obtendra información
        double calcularTotal() const;

        // Se utiliza el método virtual puro debido a que el descuento dependera de cada cliente premium 
        virtual double aplicarDescuento() const = 0;
};

// Se agrega la clase derivadad de  cliente como cliente regular y tiene solo acceso publico  ya que no hay necesidad de atributos privados propios de esta clase
class ClienteRegular : public Cliente {
    public:
        // Se hace el contructor heredando todo lo de cliente 
        ClienteRegular(const string &nombrec, const vector<double> &carrito);
        
        // Se define la funcion aplicar descuento aunque no se le aplique descuento al cliente regular y se sobre-escribe
        double aplicarDescuento() const override;
};

// Clase derivada cliente premium la diferencia es que posee un descuento solo para clientes premium
class ClientePremium : public Cliente {
    private://Se define el descuento en acceso privado
        double descuento;  
    public:
        //Se hace el contructor heredando todo lo de cliente y además el descuento definido anteriormente
        ClientePremium(const string &nombrec, const vector<double> &carrito, double descuento);
    
        // Definimos la funcion de aplicar descuento y se sobre-escribe
        double aplicarDescuento() const override;
};

#endif // CLIENTE_HPP
