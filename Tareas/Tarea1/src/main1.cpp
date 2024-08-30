#include <iostream>

//Se invoca a header file de Funciones1 ya que se accederá e él
#include "Funciones1.hpp"

using namespace std;

//Se define e inicializa una variable global del maximo de espacios en nuestro arreglo
const int MAX_CONVERSIONES = 100;

//Se utiliza enum para nuestro menú de opciones lo cual se inicializa en 1 para que nuestro enum siga la secuencia esto representa el valor que pueda 
//elegir nuestro usuario
enum MenuEnum {
    convertirLongitud = 1, 
    convertirPeso,
    convertirTemperatura,
    salir
};

int main() {
    //Se define nuestro arreglo  y se  inicializa  
    Conversiones conversiones[MAX_CONVERSIONES];
    int cantidadConversiones = 0;
    int opcion;

    //Se usara una estructura de control do-while para nuestro menú
    do {
        cout << "\nSistema de Conversion de unidades\n";
        cout << "1. Convertir entre diferentes unidades de longitud\n";
        cout << "2. Convertir entre diferentes unidades de peso\n";
        cout << "3. Convertir entre diferentes unidades de temperatura\n";
        cout << "4. Salir\n";
        cout << "Seleccione una opcion: ";
        
        cin >> opcion;
        //Llamaremos a la función respectiva definida en Funciones1.hpp con el parametro del arreglo y el espacio del elemento
        switch (opcion) {
            case convertirLongitud:
                agregarUnidadlong(conversiones, cantidadConversiones);
                break;
            case convertirPeso:
                agregarUnidadpeso(conversiones, cantidadConversiones);
                break; 
            case convertirTemperatura:
                agregarUnidadtemp(conversiones, cantidadConversiones);
                break;
            case salir:
                cout << "Saliendo del sistema" << endl;
                break;
            default:
                cout << "Opcion no valida" << endl;
        }
    } while (opcion != salir);

    return 0;
}
