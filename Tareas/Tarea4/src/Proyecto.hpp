#ifndef PROYECTO_HPP
#define PROYECTO_HPP

#include <vector>
#include <string>
#include <algorithm>
#include <iostream>
#include <stdexcept>
#include "Tarea.hpp"

using namespace std;

/**
 * @brief Se  representa un proyecto que tiene múltiples tareas.
 * 
 * @tparam Se usa  template tipo T  de dato para las tareas del proyecto 
 */
template <typename T>
class Proyecto {
private:
    string nombre;  ///< Corresponde para el nombre del proyecto.
    vector<Tarea<T>> tareas;  ///< Lista de tareas asociadas al proyecto.
public:
    /**
     * @brief Constructor por defecto que inicializa el proyecto sin nombre.
     *
     *
     * Constructor por defecto que inicializa el proyecto sin nombre.
     */
    Proyecto() : nombre("") {} 

    /**
     * @brief Se inicializa el contructor para el  proyecto con un nombre específico.
     *
     * @param nombre_proyecto Nombre del proyecto.
     */
    Proyecto(const string& nombre_proyecto) : nombre(nombre_proyecto) {}  // Usa el parámetro correcto

    /**
     * @brief Se agrega una tarea al proyecto.
     *
     * @param tarea Esto corresponde la tarea que se desea agregar al proyecto.
     */
    void agregar_tarea(const Tarea<T>& tarea) {
        tareas.push_back(tarea);
    }

    /**
     * @brief  Se elimina una tarea del proyecto por el nombre.
     *
     * Buscandola y eliminandola  por su nombre.
     *
     * @param nombre_tarea Se usa el nombre de la tarea a eliminar.
     * @throws std::runtime_error Se utiliza lo anterior para el manejo de excepciones  si la tarea no se encuentra.
     */
    void eliminar_tarea(const string& nombre_tarea) {
        auto it = find_if(tareas.begin(), tareas.end(), [&nombre_tarea](const Tarea<T>& tarea) {
            return tarea.getNombre() == nombre_tarea;
        });
        if (it != tareas.end()) {
            tareas.erase(it);
        } else {
            throw runtime_error("Tarea no encontrada.");
        }
    }

    /**
     * @brief Ordena las tareas por costo.
     *
     * Las tareas se ordenan de menor a mayor costo.
     */
    void ordenar_tareas_por_costo() {
        sort(tareas.begin(), tareas.end(), [](const Tarea<T>& a, const Tarea<T>& b) {
            return a.getCosto() < b.getCosto();
        });
    }

    /**
     * @brief Se ordena las tareas del proyecto según su costo en orden ascendente tipo sort.
     *
     * Las tareas se ordenan de mayor a menor tiempo estimado.
     */
    void ordenar_tareas_por_tiempo() {
        sort(tareas.begin(), tareas.end(), [](const Tarea<T>& a, const Tarea<T>& b) {
            return a.getTiempoEstimado() > b.getTiempoEstimado();
        });
    }

    /**
     * @brief Se ordena las tareas del proyecto según su prioridad (1 la mayor) en orden ascendente tipo sort.
     *
     * Las tareas se ordenan de menor a mayor prioridad.
     */
    void ordenar_tareas_por_prioridad() {
        sort(tareas.begin(), tareas.end(), [](const Tarea<T>& a, const Tarea<T>& b) {
            return a.getPrioridad() < b.getPrioridad(); // 1 es mayor prioridad que 3
        });
    }

    /**
     * @brief Se muestra el resumen general del proyecto, incluyendo el costo total y el tiempo estimado.
     *
     * Ademas se muestra el nombre del proyecto, total de tareas,
     * costo total y tiempo total estimado.
     */
    void mostrar_resumen_proyecto() const {
        double costo_total = 0;
        double tiempo_total = 0;

        cout << "Proyecto: " << nombre << "\n";
        for (const auto& tarea : tareas) {
            costo_total += tarea.getCosto();
            tiempo_total += tarea.getTiempoEstimado();
        }
        cout << "Total de tareas: " << tareas.size() << "\n"
             << "Costo total: $" << costo_total << "\n"
             << "Tiempo total estimado: " << tiempo_total << " horas\n";
    }

    /**
     * @brief Se muestra  todas las tareas del proyecto.
     *
     * Se mprime la información de cada tarea en la consola.
     */
    void mostrar_tareas() const {
        for (const auto& tarea : tareas) {
            tarea.mostrar();
            cout << "-----------------------------\n";
        }
    }
};

#endif
