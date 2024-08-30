
#include <iostream>
#include <cstring>
#include <cmath>
#include "Funciones1.hpp"
//Se hace referencia al header file
using namespace std;

/**
 * @brief Agrega un nueva unidad.
 *
 * Esta función permite al usuario ingresar los detalles de nueva unidad al sistema de unidades
 * (Conversión Longitud, Converión Peso, Conversión Temperatura) y lo almacena en el array de Conversiones.
 *
 * @param Conversiones            Array de estructuras Conversiones donde se almacenan las unidades.
 * @param cantidadConversiones    Referencia a un entero que indica la cantidad actual de conversiones.
 *                                 Este valor se incrementará en uno después de agregar la conversión.
 *
 * @return void
 */




//Se declaran estas varibles para el funcionamiento de los diferentes controles
int opcion, opcion1;

//En este tipo de funcion se guardarán los datos recopilados de las unidades de longitud utilizando el struct anidado en el arreglo 
//y &cantidadConversiones ya que se modificará el espacio del arreglo creado
void agregarUnidadlong(Conversiones conversiones[], int &cantidadConversiones) {
    cout << "\nSeleccione la unidad de origen\n";
    cout << "1. Milimetros\n";
    cout << "2. Centimetros\n";
    cout << "3. Metros\n";
    cout << "4. Kilometros\n";
    cin >> opcion;
    //Inicializamos la variable indice como el total del arreglo para diferenciar de que se va a realizar operaciones para obtener la información
    int indice = cantidadConversiones;

    switch (opcion) {
    //Se guarda cada unidad ingresada en el espacio disponible en el arreglo
    case 1:
        cout << "Ingrese el valor de la medida: ";
        cin >> conversiones[cantidadConversiones].longitud.milimetros;

        cout << "\nSeleccione la unidad de destino\n";
        cout << "1. Centimetros\n";
        cout << "2. Metros\n";
        cout << "3. Kilometros\n";
        cin >> opcion1;

        //La respuesta obtenida anteriormente la usaremos llamandola  a su función respectiva e ingresandola por parametros para cada conversión
        switch (opcion1) {
        case 1: {
            double milimetros = conversiones[indice].longitud.milimetros;
            double centimetros = convertirMilimetrosACentimetros(milimetros);
            conversiones[indice].longitud.centimetros = centimetros;
            cout << "La longitud en Centimetros es: " << centimetros << endl;
            break;
        }
        /*Hacemos alución a la sobrecarga de funciones ya que similar a este caso tendremos más sobre usar la misma función 
        para diferentes unidades por lo que se usa "valor" */ 
        case 2: {
            double valor = conversiones[indice].longitud.milimetros;
            double metros = convertirValorCompartido1(valor);
            conversiones[indice].longitud.metros = metros;
            cout << "La longitud en Metros es: " << metros << endl;
            break;
        }
        case 3: {
            double valor = conversiones[indice].longitud.milimetros;
            double kilometros = convertirValorCompartido3(valor);
            conversiones[indice].longitud.kilometros = kilometros;
            cout << "La longitud en Kilometros es:  " << kilometros << endl;
            break;
        }
        default:
            cout << "Opcion no valida" << endl;
            break;
        }

        break;
    case 2:
        cout << "Ingrese el valor de la medida: ";
        cin >> conversiones[cantidadConversiones].longitud.centimetros;

        cout << "\nSeleccione la unidad de destino\n";
        cout << "1. Milimetros\n";
        cout << "2. Metros\n";
        cout << "3. Kilometros\n";
        cin >> opcion1;

        switch (opcion1) {
        case 1: {
            double centimetros = conversiones[indice].longitud.centimetros;
            double milimetros = convertirCentimetrosAMilimetros(centimetros);
            conversiones[indice].longitud.milimetros = milimetros;
            cout << "La longitud en Milimetros es: " << milimetros << endl;
            break;
        }
        case 2: {
            double centimetros = conversiones[indice].longitud.centimetros;
            double metros = convertirCentimetrosAMetros(centimetros);
            conversiones[indice].longitud.metros = metros;
            cout << "La longitud en Metros es: " << metros << endl;
            break;
        }
        case 3: {
            double centimetros = conversiones[indice].longitud.centimetros;
            double kilometros = convertirCentimetrosAKilometros(centimetros);
            conversiones[indice].longitud.kilometros = kilometros;
            cout << "La longitud en Kilometros es:  " << kilometros << endl;
            break;
        }
        default:
            cout << "Opcion no valida" << endl;
            break;
        }
        break;
    case 3:
        cout << "Ingrese el valor de la medida: ";
        cin >> conversiones[cantidadConversiones].longitud.metros;

        cout << "\nSeleccione la unidad de destino\n";
        cout << "1. Milimetros\n";
        cout << "2. Centimetros\n";
        cout << "3. Kilometros\n";
        cin >> opcion1;

        switch (opcion1) {
        case 1: {
            double metros = conversiones[indice].longitud.metros;
            double milimetros = convertirCentimetrosAMilimetros(metros);
            conversiones[indice].longitud.milimetros = milimetros;
            cout << "La longitud en Milimetros es: " << milimetros << endl;
            break;
        }
        case 2: {
            double valor = conversiones[indice].longitud.metros;
            double milimetros = convertirValorCompartido2(valor);
            conversiones[indice].longitud.milimetros = milimetros;
            cout << "La longitud en Metros es: " << milimetros << endl;
            break;
        }
        case 3: {
            double valor = conversiones[indice].longitud.metros;
            double kilometros =  convertirValorCompartido1(valor);
            conversiones[indice].longitud.kilometros = kilometros;
            cout << "La longitud en Kilometros es:  " << kilometros << endl;
            break;
        }
        default:
            cout << "Opcion no valida" << endl;
            break;
        }    
        break;
    case 4:
        cout << "Ingrese el valor de la medida: ";
        cin >> conversiones[cantidadConversiones].longitud.kilometros;

        cout << "\nSeleccione la unidad de destino\n";
        cout << "1. Milimetros\n";
        cout << "2. Metros\n";
        cout << "3. Centimetros\n";
        cin >> opcion1;

        switch (opcion1) {
        case 1: {
            double valor = conversiones[indice].longitud.kilometros;
            double milimetros = convertirValorCompartido4(valor);
            conversiones[indice].longitud.milimetros = milimetros;
            cout << "La longitud en Milimetros es: " << milimetros << endl;
            break;
        }
        case 2: {
            double valor = conversiones[indice].longitud.kilometros;
            double metros = convertirValorCompartido2(valor);
            conversiones[indice].longitud.metros = metros;
            cout << "La longitud en Metros es: " << metros << endl;
            break;
        }
        case 3: {
            double kilometros = conversiones[indice].longitud.kilometros;
            double centimetros =  convertirKilometrosACentimetros(kilometros);
            conversiones[indice].longitud.centimetros = centimetros;
            cout << "La longitud en Centimetros es:  " << centimetros << endl;
            break;
        }
        default:
            cout << "Opcion no valida" << endl;
            break;
        }    
        break;
    default:
        cout << "Opcion no valida" << endl;
        break;
    }

    cantidadConversiones++;
}

void agregarUnidadtemp(Conversiones conversiones[], int &cantidadConversiones) {
    cout << "\nSeleccione la unidad de origen\n";
    cout << "1. Fahrenheit\n";
    cout << "2. Celsius\n";
    cout << "3. Kelvin\n";
    cin >> opcion;
    int indice = cantidadConversiones;

    switch (opcion) {
    case 1: 
        cout << "Ingrese el valor de la medida: ";
        cin >> conversiones[cantidadConversiones].temperatura.fahrenheit;

        cout << "\nSeleccione la unidad de destino\n";
        cout << "1. Celsius\n";
        cout << "2. Kelvin\n";
        cin >> opcion1;

        switch (opcion1) {
        case 1: {
            double fahrenheit = conversiones[indice].temperatura.fahrenheit;
            double celsius = convertirFahrenheitACelsius(fahrenheit);
            conversiones[indice].temperatura.celsius = celsius;
            cout << "La temperatura en Celsius es: " << celsius << endl;
            break;
        }
        case 2: {
            double fahrenheit = conversiones[indice].temperatura.fahrenheit;
            double kelvin = convertirFahrenheitAKelvin(fahrenheit);
            conversiones[indice].temperatura.kelvin = kelvin;
            cout << "La temperatura en Kelvin es: " << kelvin << endl;
            break;
        }
        default:
            cout << "Opcion no valida" << endl;
            break;
        }
        break;

    case 2: 
        cout << "Ingrese el valor de la medida: ";
        cin >> conversiones[cantidadConversiones].temperatura.celsius;

        cout << "\nSeleccione la unidad de destino\n";
        cout << "1. Fahrenheit\n";
        cout << "2. Kelvin\n";
        cin >> opcion1;

        switch (opcion1) {
        case 1: {
            double celsius = conversiones[indice].temperatura.celsius;
            double fahrenheit = convertirCelsiusAFahrenheit(celsius);
            conversiones[indice].temperatura.fahrenheit = fahrenheit;
            cout << "La temperatura en Fahrenheit es: " << fahrenheit << endl;
            break;
        }
        case 2: {
            double celsius = conversiones[indice].temperatura.celsius;
            double kelvin = convertirCelsiusAKelvin(celsius);
            conversiones[indice].temperatura.kelvin = kelvin;
            cout << "La temperatura en Kelvin es: " << kelvin << endl;
            break;
        }
        default:
            cout << "Opcion no valida" << endl;
            break;
        }
        break;

    case 3: 
        cout << "Ingrese el valor de la medida: ";
        cin >> conversiones[cantidadConversiones].temperatura.kelvin;

        cout << "\nSeleccione la unidad de destino\n";
        cout << "1. Celsius\n";
        cout << "2. Fahrenheit\n";
        cin >> opcion1;

        switch (opcion1) {
        case 1: {
            double kelvin = conversiones[indice].temperatura.kelvin;
            double celsius = convertirKelvinACelsius(kelvin);
            conversiones[indice].temperatura.celsius = celsius;
            cout << "La temperatura en Celsius es: " << celsius << endl;
            break;
        }
        case 2: {
            double kelvin = conversiones[indice].temperatura.kelvin;
            double fahrenheit = convertirKelvinAFahrenheit(kelvin);
            conversiones[indice].temperatura.fahrenheit = fahrenheit;
            cout << "La temperatura en Fahrenheit es: " << fahrenheit << endl;
            break;
        }
        default:
            cout << "Opcion no valida" << endl;
            break;
        }
        break;

    default:
        cout << "Opcion no valida" << endl;
        break;
    }

    cantidadConversiones++;
}

void agregarUnidadpeso(Conversiones conversiones[], int &cantidadConversiones) {
    cout << "\nSeleccione la unidad de origen\n";
    cout << "1. Miligramos\n";
    cout << "2. Gramos\n";
    cout << "3. Kilogramos\n";
    cout << "4. Toneladas\n";
    cin >> opcion;
    int indice = cantidadConversiones;

    switch (opcion) {
    case 1:
        cout << "Ingrese el valor de la medida: ";
        cin >> conversiones[cantidadConversiones].peso.miligramos;
    
        cout << "\nSeleccione la unidad de destino\n";
        cout << "1. Gramos\n";
        cout << "2. Kilogramos\n";
        cout << "3. Toneladas\n";
        cin >> opcion1;

        switch (opcion1) {
        case 1: {
            double valor = conversiones[indice].peso.miligramos;
            double gramos = convertirValorCompartido1(valor);
            conversiones[indice].peso.gramos = gramos;
            cout << "El peso en Gramos es: " << gramos << endl;
            break;
        }
        case 2: {
            double valor = conversiones[indice].peso.miligramos;
            double kilogramos = convertirValorCompartido3(valor);
            conversiones[indice].peso.kilogramos = kilogramos;
            cout << "El peso en Kilogramos es: " << kilogramos << endl;
            break;
        }
        case 3: {
            double miligramos = conversiones[indice].peso.miligramos;
            double toneladas = convertirMiligramosAToneladas(miligramos);
            conversiones[indice].peso.toneladas = toneladas;
            cout << "El peso en gramos es: " << toneladas << endl;
            break;
        }
        default:
            cout << "Opcion no valida" << endl;
            break;
        }

        break;
    case 2:
        cout << "Ingrese el valor de la medida: ";
        cin >> conversiones[cantidadConversiones].peso.gramos;

        cout << "\nSeleccione la unidad de destino\n";
        cout << "1. Miligramos\n";
        cout << "2. Kilogramos\n";
        cout << "3. Toneladas\n";
        cin >> opcion1;

        switch (opcion1) {
        case 1: {
            double valor = conversiones[indice].peso.gramos;
            double miligramos = convertirValorCompartido2(valor);
            conversiones[indice].peso.miligramos = miligramos;
            cout << "El peso en Miligramos es: " << miligramos << endl;
            break;
        }
        case 2: {
            double valor = conversiones[indice].peso.gramos;
            double kilogramos = convertirValorCompartido1(valor);
            conversiones[indice].peso.kilogramos = kilogramos;
            cout << "El peso en Kilogramos es: " <<kilogramos << endl;
            break;
        }
        case 3: {
            double valor = conversiones[indice].peso.gramos;
            double toneladas = convertirValorCompartido3(valor) ;
            conversiones[indice].peso.toneladas = toneladas;
            cout << "El peso en Toneladas es: " <<toneladas << endl;
            break;
        }
        default:
            cout << "Opcion no valida" << endl;
            break;
        }

        break;
    case 3:
        cout << "Ingrese el valor de la medida: ";
        cin >> conversiones[cantidadConversiones].peso.kilogramos;

        cout << "\nSeleccione la unidad de destino\n";
        cout << "1. Miligramos\n";
        cout << "2. Gramos\n";
        cout << "3. Toneladas\n";
        cin >> opcion1;

        switch (opcion1) {
        case 1: {
            double valor = conversiones[indice].peso.kilogramos;
            double miligramos = convertirValorCompartido4(valor);
            conversiones[indice].peso.miligramos = miligramos;
            cout << "El peso en Miligramos es: " << miligramos << endl;
            break;
        }
        case 2: {
            double valor = conversiones[indice].peso.kilogramos;
            double gramos = convertirValorCompartido2(valor);
            conversiones[indice].peso.gramos = gramos;
            cout << "El peso en Gramos es: " << gramos << endl;
            break;
        }
        case 3: {
            double valor = conversiones[indice].peso.kilogramos;
            double toneladas = convertirValorCompartido1(valor) ;
            conversiones[indice].peso.toneladas = toneladas;
            cout << "El peso en Toneladas es: " << toneladas << endl;
            break;
        }
        default:
            cout << "Opcion no valida" << endl;
            break;
        }

        break;
    case 4:
        cout << "Ingrese el valor de la medida: ";
        cin >> conversiones[cantidadConversiones].peso.toneladas;

        cout << "\nSeleccione la unidad de destino\n";
        cout << "1. Miligramos\n";
        cout << "2. Gramos\n";
        cout << "3. Kilogramos\n";
        cin >> opcion1;

        switch (opcion1) {
        case 1: {
            double toneladas = conversiones[indice].peso.toneladas;
            double miligramos = convertirToneladasAMiligramos(toneladas);
            conversiones[indice].peso.miligramos = miligramos;
            cout << "El peso en Miligramos es: " << miligramos << endl;
            break;
        }
        case 2: {
            double valor = conversiones[indice].peso.toneladas;
            double gramos = convertirValorCompartido4(valor);
            conversiones[indice].peso.gramos = gramos;
            cout << "El peso en Gramos es: " << gramos << endl;
            break;
        }
        case 3: {
            double valor = conversiones[indice].peso.toneladas;
            double kilogramos = convertirValorCompartido1(valor) ;
            conversiones[indice].peso.kilogramos = kilogramos;
            cout << "El peso en Kilogramos es: " << kilogramos << endl;
            break;
        }
        default:
            cout << "Opcion no valida" << endl;
            break;
        }

        break;
    default:
        cout << "Opcion no valida" << endl;
        break;
    }

    cantidadConversiones++;
}

//Convierte de  Fahrenheit a Celsius
double convertirFahrenheitACelsius(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

//Convierte de  Fahrenheit a Kelvin
double convertirFahrenheitAKelvin(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0 + 273.15;
}

//Convierte de Celsius a Fahrenheit 
double convertirCelsiusAFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

//Convierte de Celsius a Kelvin
double convertirCelsiusAKelvin(double celsius) {
    return celsius + 273.15;
}

//Convierte de Kelvin a Celsius  
double convertirKelvinACelsius(double kelvin) {
    return kelvin - 273.15;
}

//Convierte Kelvin a Fahrenheit
double convertirKelvinAFahrenheit(double kelvin) {
    return (kelvin - 273.15) * 9.0 / 5.0 + 32.0;
}

//Convierte de milimetros a metros, miligramos a gramos, gramos a kilogramos, metros a kilometros, kilogramos a toneladas
double convertirValorCompartido1(double valor){ 
    return (valor / 1000);
}

//Convierte de metros a milimetros,kilometros a metros, gramos a miligramos, kilogramos a gramos, toneladas a kilogramos
double convertirValorCompartido2(double valor){ 
    return (valor * 1000);
}

//Convierte de Metros a Centimetros
double convertirMetrosACentimetros(double metros) {
    return metros * 100;
}

//Convierte de Centimetros a Milimetros
double convertirCentimetrosAMilimetros(double centimetros) {
    return centimetros * 10;
}

//Convierte de Centimetros a Kilometros
double convertirCentimetrosAKilometros(double centimetros) {
    return centimetros / 100000;
}

//Convierte de Centimetros a Metros
double convertirCentimetrosAMetros(double centimetros) {
    return centimetros / 100;
}

//Convierte de milimetros a kilometros ,miligramos a kilogramos, centimetros a kilometros,gramos a toneladas
double convertirValorCompartido3(double valor) { 
    return valor / 1000000;
}

//Convierte de Milimetros a Centimetros
double convertirMilimetrosACentimetros(double milimetros) {
    return milimetros / 10;
}

//Convierte de Kilometros a Centimetros 
double convertirKilometrosACentimetros(double kilometros) {
    return kilometros * 100000;
}

//Convierte de Miligramos a Toneladas  
double convertirMiligramosAToneladas(double miligramos) {
    return miligramos / 1000000000;
}

//Convierte kilogramos a miligramos , toneladas a gramos,kilometros a milimetros
double convertirValorCompartido4(double valor) { 
    return valor * 1000000;
}

//Convierte de Toneladas a Miligramos
double convertirToneladasAMiligramos(double toneladas) {
    return toneladas * 1000000000;
}