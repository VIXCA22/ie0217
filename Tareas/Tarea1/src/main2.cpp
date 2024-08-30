#include <iostream>


//Se invoca a header file de Funciones1 ya que se accederá e él
#include "Funciones2.hpp"

using namespace std;

//Se define e inicializa una variable global del maximo de espacios en nuestro arreglo
const int MAX_NUM = 100;

int main() {
    //Se define nuestro arreglo  y se  inicializa  
    int memoria[MAX_NUM]; 
    int cantidadNumeros = 0;
    int opcion, opcion1;
    cout << "\nSistema Calculos Estadisticos\n";
    agregarNumeros(memoria, cantidadNumeros);

    //Se usara una estructura de control do-while para nuestro menú
    do {
       
        cout << "\nDigite la opcion que desee\n";
        cout << "1. Mostrar Estadisticas\n";
        cout << "2. Buscar Numero\n";
        cout << "3. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "\nDigite la opcion que desee\n";
                cout << "1. Calcular y mostrar Suma de numeros ingresados\n";
                cout << "2. Calcular y mostrar Promedio de numeros ingresados\n";
                cout << "3. Calcular y mostrar Minimo de numeros ingresados\n";
                cout << "4. Calcular y mostrar Maximo de numeros ingresados\n";
                cin >> opcion1;
                //Llamaremos a la función respectiva definida en Funciones2.hpp con el parametro del arreglo y el espacio del elemento
                switch (opcion1) {
                    case 1:
                        sumaNumeros(memoria, cantidadNumeros);
                        break;
                    case 2: {
                        // Se invoca define el valor de suma con ayuda de la función sumaNumeros para utilizarla como parametro en el promedio
                        int suma = sumaNumeros(memoria, cantidadNumeros);
                        promedioNumeros(suma, cantidadNumeros);
                        break;
                    }
                    case 3:
                        minNumeros(memoria, cantidadNumeros);
                        break;
                    case 4:
                        maxNumeros(memoria, cantidadNumeros);
                        break;
                    default:
                        cout << "Opcion no valida" << endl;
                }    
                break;
            case 2:
                busquedaNumeros(memoria, cantidadNumeros);
                break; 
            case 3:
                cout << "Saliendo del sistema" << endl;
                break;
            default:
                cout << "Opcion no valida" << endl;
        }
    } while (opcion != 3);

    return 0;
}
