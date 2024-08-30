#ifndef CONVERSIONES_HPP 
#define CONVERSIONES_HPP
//Utilizamos una cabecera para las caracteristicas de Conversiones
//Esto es una estructura de la informacion de las diferentes unidades
struct Long{
    double milimetros;
    double centimetros;
    double metros;
    double kilometros;
};

struct Temp{
    double fahrenheit;
    double celsius;
    double kelvin;
};

struct Peso{
    double miligramos;
    double gramos;
    double kilogramos;
    double toneladas;
};
//Esto es un struct anidado para contener las diferentes mediciones
struct Conversiones{
    Long longitud ;
    Temp temperatura;
    Peso peso ;
};

#endif // CONVERSIONES_HPP