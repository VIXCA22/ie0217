#ifndef FUNCIONES_HPP
#define FUNCIONES_HPP

//Se invoca a header file de conversiones ya que se accederá e él
#include "Conversiones.hpp"

//Se definen las diferentes funciones para agregar los datos al arreglo  y para las diferentes funciones de conversión
void agregarUnidadlong(Conversiones  conversiones[],int &cantidadConversiones);
void agregarUnidadtemp(Conversiones  conversiones[],int &cantidadConversiones);
void agregarUnidadpeso(Conversiones  conversiones[],int &cantidadConversiones);
double convertirFahrenheitACelsius(double fahrenheit);
double convertirFahrenheitAKelvin(double fahrenheit);
double convertirCelsiusAFahrenheit(double celsius);
double convertirCelsiusAKelvin(double celsius);
double convertirKelvinACelsius(double kelvin);
double convertirKelvinAFahrenheit(double kelvin);
double convertirValorCompartido1(double valor);
double convertirValorCompartido2(double valor);
double convertirValorCompartido3(double valor);
double convertirValorCompartido4(double valor);
double convertirMetrosACentimetros(double metros);
double convertirCentimetrosAMilimetros(double centimetros);
double convertirCentimetrosAKilometros(double centimetros);
double convertirCentimetrosAMetros(double centimetros);
double convertirMilimetrosACentimetros(double milimetros);
double convertirKilometrosACentimetros(double kilometros);
double convertirMiligramosAToneladas(double miligramos);
double convertirToneladasAMiligramos(double toneladas);


#endif // FUNCIONES_HPP