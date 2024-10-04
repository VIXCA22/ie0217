#ifndef TAREA_HPP
#define TAREA_HPP

#include <iostream>
#include <string>
#include <stdexcept>
#include <type_traits>

using namespace std;

/**
 * @brief La clase plantilla es la que  representa una tarea en un proyecto.
 * 
 * La clase Tarea es la que permitirá almacenar y modificar la  información sobre una tarea específica,
 * ya sea su nombre, costo, tiempo estimado, prioridad y recursos asociados.
 *
 * @tparam Se usa  template tipo T  de dato para las tareas del proyecto.
 */
template <typename T>
class Tarea {
private:
    string nombre; 
    double costo; 
    double tiempo_estimado; 
    int prioridad; 
    T recursos; 

public:
    /**
     * @brief Constructor de la clase Tarea.
     * 
     * @param nombre Representa el nombre de la tarea.
     * @param costo Representa el costo de la tarea.
     * @param tiempo_estimado Representa el tiempo estimado para completar la tarea.
     * @param prioridad Representa la prioridad de la tarea la cual debe estar en un rango de 1 a 3.
     * @param recursos Representa los recursos asociados de la tarea.
     * 
     * @throws invalid_argument  Se usa para control de excepciones  como si el  costo es negativo, el tiempo estimado es menor o igual a cero,
     * o si la prioridad está fuera del rango permitido además lanza una excepción si recursos no es numérico.
     */
    Tarea(const string& nombre, double costo, double tiempo_estimado, int prioridad, T recursos) 
        : nombre(nombre), costo(costo), tiempo_estimado(tiempo_estimado), prioridad(prioridad), recursos(recursos) {
        if (costo < 0) throw invalid_argument("El costo no puede ser negativo.");
        if (tiempo_estimado <= 0) throw invalid_argument("El tiempo estimado debe ser mayor que cero.");
        if (prioridad < 1 || prioridad > 3) throw invalid_argument("Prioridad fuera de rango.");
        if (!is_number<T>(recursos)) throw invalid_argument("Debe introducir un número.");
    }

    /**
     * @brief Se verifica si un valor es de tipo numérico y se hace el mismo caso pero en falso para el siguiente.
     * 
     * @tparam Se utiliza tipo U  del valor a verificarlo.
     * @param valor Valor a verificar.
     * @return true si el valor es numérico.
     * @return false si el valor no es numérico.
     */
    template<typename U>
    typename enable_if<is_arithmetic<U>::value, bool>::type
    is_number(const U& valor) {
        return true;  // Si es true dirá que es  es un número sea int o float.
    }

    template<typename U>
    typename enable_if<!is_arithmetic<U>::value, bool>::type
    is_number(const U& valor) {
        return false;  // Si no es numérico entonces será falso.
    }

    // Métodos Get
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

    // Métodos set
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

    /**
     * @brief Se muestra  la información de la tarea.
     * 
     * Se imprime el nombre, costo, tiempo estimado, prioridad y recursos de la tarea.
     */
    void mostrar() const {
        cout << "Tarea: " << nombre << "\n"
                  << "Costo: $" << costo << "\n"
                  << "Tiempo estimado: " << tiempo_estimado << " horas\n"
                  << "Prioridad: " << prioridad << "\n"
                  << "Recursos: " << recursos << "\n";
    }
};

#endif
