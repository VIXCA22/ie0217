#ifndef TAREA_HPP
#define TAREA_HPP

#include <iostream>
#include <string>
#include <stdexcept>
#include <cctype>  // Para isdigit

using namespace std;

template <typename T>
class Tarea {
private:
    string nombre;
    double costo;
    double tiempo_estimado;
    int prioridad;
    T recursos;

public:
    Tarea(const string& nombre, double costo, double tiempo_estimado, int prioridad, T recursos) 
        : nombre(nombre), costo(costo), tiempo_estimado(tiempo_estimado), prioridad(prioridad), recursos(recursos) {
        if (costo < 0) throw invalid_argument("El costo no puede ser negativo.");
        if (tiempo_estimado <= 0) throw invalid_argument("El tiempo estimado debe ser mayor que cero.");
        if (prioridad < 1 || prioridad > 3) throw invalid_argument("Prioridad fuera de rango.");
        if (!isdigit(recursos)) throw invalid_argument("Debe introducir un número.");
    }

    // Métodos de acceso
    string getNombre() const {
        return nombre; }

    double getCosto() const { 
        return costo; }

    double getTiempoEstimado() const {
        return tiempo_estimado; }

    int getPrioridad() const { 
        return prioridad; }
        
    T getRecursos() const { 
        return recursos; }

    // Métodos de modificación
    void setCosto(double nuevo_costo) { 
        if (nuevo_costo < 0) throw invalid_argument("El costo no puede ser negativo.");
        costo = nuevo_costo; 
    }

    void setTiempoEstimado(double nuevo_tiempo) { 
        if (nuevo_tiempo <= 0) throw invalid_argument("El tiempo debe ser mayor que cero.");
        tiempo_estimado = nuevo_tiempo; 
    }

    void setPrioridad(int nueva_prioridad) {
        if (nueva_prioridad < 1 || nueva_prioridad > 3) throw invalid_argument("Prioridad fuera de rango.");
        prioridad = nueva_prioridad;
    }

    // Mostrar la información de la tarea
    void mostrar() const {
        cout << "Tarea: " << nombre << "\n"
                  << "Costo: $" << costo << "\n"
                  << "Tiempo estimado: " << tiempo_estimado << " horas\n"
                  << "Prioridad: " << prioridad << "\n"
                  << "Recursos: " << recursos << "\n";
    }
};

#endif
