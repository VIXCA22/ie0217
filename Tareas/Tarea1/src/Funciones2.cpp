#include <iostream>
#include <cstring>
#include <cmath>
#include "Funciones2.hpp" 
//Se hace referencia al header file
using namespace std;

/**
 * @brief Agrega un nueva unidad.
 *
 * Esta función permite al usuario ingresar la cantiidad de nuemeros y los numeros para almacenar.
 * (Agregar Numeros, Suma de Numeros, Promedio de numeros, Min Numeros , Max Numeros , Busqueda Numeros  ) y lo almacena en el array memoria.
 *
 * @param memoria            Array de numeros donde se almacenan las unidades.
 * @param cantidadNumeros    Referencia a un entero que indica la cantidad actual de numeros.
 *                                 Este valor se incrementará en uno después de agregar cada numero.
 *
 * @return void
 */



//Se agregan los numeros usando un arreglo puntero modificando el espacio del elemento
void agregarNumeros(int* memoria, int &cantidadNumeros) {
    cout << "\nDigite la cantidad de numeros que requiera\n";
    cin >> cantidadNumeros;
    for (int i = 0; i < cantidadNumeros; i++) {   
        cout << "\nIngrese cada numero entero\n";
        cin >> memoria[i];
    }
}

//Se realiza suma de todos los numeros del arreglo usando el puntero acceder al valor de cada elemento
int sumaNumeros(int* memoria, int cantidadNumeros) {
    int suma = 0;
    for (int i = 0; i < cantidadNumeros; i++) {
        suma += *(memoria + i); // Accedemos al elemento por puntero que está en el espacio del arreglo para sumar el elemento  
    }
    cout << "\nLa suma es de: " << suma << endl;
    return suma;
}

// Se realiza el promedio de los numeros guardados haciendo uso del static_cast para optimizar la función   para utilizarla con ayuda de suma en el main
double promedioNumeros(int suma, int cantidadNumeros) {
    if (cantidadNumeros == 0) {
        cout << "\nNo se puede realizar el promedio debido a que no se puede dividir entre 0\n";
        return 0; 
    } else {
        double promedio = static_cast<double>(suma) / cantidadNumeros; 
        cout << "\nEl promedio es de: " << promedio << endl;
        return promedio;
    }
}

// Se recorre el arreglo en busca del elemento menor de entre todos los elementos
int minNumeros(int* memoria, int cantidadNumeros) {
    int* ptr = memoria; //Definimos el puntero nos dara la dirección
    int minimo = *ptr;  //Este nos dara el elemento en sí

    // Recorremos el arreglo usando punteros
    for (int i = 1; i < cantidadNumeros; ++i) {
        ++ptr; // Avanzamos el puntero al siguiente elemento
        if (*ptr < minimo) {
            minimo = *ptr; // Actualizamos el mínimo si encontramos un valor menor
        }
    }
    
    cout << "\nEl minimo es de: " << minimo << endl;
    return minimo;
}
//Se recorre el arreglo en busca de el numero mayor de entre todos los elementos
int maxNumeros(int* memoria, int cantidadNumeros) {
    int* ptr = memoria;
    int maximo = *ptr; 

    for (int i = 1; i < cantidadNumeros; ++i) {
        ++ptr; 
        if (*ptr > maximo) {
            maximo = *ptr; 
        }
    }
    
    cout << "\nEl maximo es de: " << maximo << endl;
    return maximo;
}

//Se hace la busqueda de numeros recorriendo el arreglo y comparando el elemento del arreglo con el numero ingresado 
//se retorna el valor si es correcto sino -1 si no lo ha encontrado
int busquedaNumeros(int* memoria, int cantidadNumeros) { 
    int num;
    int* ptr = memoria; 
    cout << "\nIngrese el numero a buscar\n";
    cin >> num;

    for (int i = 0; i < cantidadNumeros; ++i) {
        if (*ptr == num) {
            cout << "\nEl numero se encuentra en el indice: " << *ptr << endl;
            return i; 
        }
        ++ptr; // Avanzamos el puntero al siguiente elemento
    }

    cout << "\nEl numero no existe en el arreglo." << endl;
    return -1; 
}
