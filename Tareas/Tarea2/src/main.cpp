#include <iostream>
#include "Tienda.hpp"
//Se referencia el archivo  tienda

using namespace std;

//Se define nuestro main definiendo las variables necesarias en este caso la clase Tienda 
int main() {
    Tienda tienda;
    int opcion, opcion2;
    string nombre;
    double descuento;
    int id, precio;
    double peso; 
    string tamano;

    //Se hace  el menu con sus respectivas opciones para implementar y se invocan las diferentes funciones
    do {
        cout << "\nBienvenido a la tienda virtual\n";
        cout << "\nMenu Tienda Virtual:\n";
        cout << "1. Agregar producto\n";
        cout << "2. Registrar cliente\n";
        cout << "3. Agregar producto al carrito\n";
        cout << "4. Procesar compra\n";
        cout << "5. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        
        //Declaramos cliente como puntero vacío para poder ingresar al arreglo cliente en el espacio vacío
        Cliente* cliente = nullptr; 
        
        switch(opcion) {
            case 1:
                cout << "1. Agregar producto digital\n";
                cout << "2. Agregar producto fisico\n";
                cin >> opcion2;
                switch (opcion2) {
                    case 1:
                        cout << "Ingrese el nombre del producto: ";
                        cin >> nombre;
                        cout << "Ingrese el ID del producto: "; 
                        cin >> id;
                        cout << "Ingrese el precio: ";
                        cin >> precio;
                        cout << "Ingrese el tamano del objeto: ";
                        cin >> tamano;
                        //Se agrega la información del producto en la clase tienda usando new para asignarlo al espacio del vector como clase
                        tienda.agregarProducto(new ProductoDigital(nombre, id, precio, tamano));
                        break;
                    case 2:
                        cout << "Ingrese el nombre del producto: ";
                        cin >> nombre;
                        cout << "Ingrese el precio: ";
                        cin >> precio;
                        cout << "Ingrese el peso del objeto en (Kg): ";
                        cin >> peso;  
                         //Se agrega la información del producto en la clase tienda usando new para asignarlo al espacio del vector como clase
                        tienda.agregarProducto(new ProductoFisico(nombre, precio, peso));
                        break;
                    default:
                        cout << "Opcion no valida.\n";
                        break;
                }
                break;
            case 2:
                cout << "1. Registrar cliente regular\n";
                cout << "2. Registrar cliente premium\n";
                cin >> opcion2;
                switch (opcion2) {
                    case 1:
                        cout << "Ingrese el nombre del cliente regular: ";
                        cin >> nombre;
                         //Se agrega la información del cliente en la clase tienda usando new para asignarlo al espacio del vector de la como clase
                        tienda.agregarCliente(new ClienteRegular(nombre, vector<double>()));
                        break;
                    case 2:
                        cout << "Ingrese el nombre del cliente premium: ";
                        cin >> nombre;
                        cout << "Ingrese el porcentaje de descuento a aplicar: ";
                        cin >> descuento;
                         //Se agrega la información del cliente en la clase tienda usando new para asignarlo al espacio del vector de la como clase
                        tienda.agregarCliente(new ClientePremium(nombre, vector<double>(), descuento));
                        break;
                    default:
                        cout << "Opcion no valida.\n";
                        break;
                }
                break;
            case 3:
                cout << "Ingrese el nombre del cliente: ";
                cin >> nombre;
                //Se busca al cliente para poder saber si es un cliente premium o no
                cliente = tienda.buscarCliente(nombre);
                if (cliente) {
                    int indice; //Se declara indice para asignar el numero del producto
                    cout << "Ingrese el indice del producto (0 - " << tienda.obtenerCantidadProductos() - 1 << "): ";
                    //Esto nos hara saber cuandos productos hay guardados
                    cin >> indice;
                    Producto* producto = tienda.buscarProducto(indice);
                    if (producto) {
                        cliente->agregarProducto(producto->getPrecio()); 
                         // Se agregar el producto del cliente
                         //Con su clase respectiva
                    } else {
                        cout << "Producto no encontrado.\n";
                    }
                } else {
                    cout << "Cliente no encontrado.\n";
                }
                break;
            case 4:
                cout << "Ingrese el nombre del cliente: ";
                cin >> nombre;
                //se guarda el nombre del cliente para llamar la funcion de buscar el nombre del cliente para decidir ademas si se le aplica el descuento o no
                cliente = tienda.buscarCliente(nombre);
                if (cliente) {
                    cout << "Total despues de descuento: " << cliente->calcularTotal() << endl;
                } else {
                    cout << "Cliente no encontrado.\n";
                }
                break;
            case 5:
                cout << "Saliendo del sistema" << endl;
                break;
            default:
                cout << "Opcion no valida" << endl;
                break;
        }
    } while (opcion != 5);

    return 0;
}
