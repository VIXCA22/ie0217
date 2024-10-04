#ifndef PROYECTO_HPP
#define PROYECTO_HPP

#include <vector>
#include <string>
#include <algorithm>
#include <iostream>
#include <stdexcept>
#include "Tarea.hpp"

using namespace std;

template <typename T>
class Proyecto {
private:
    string nombre;  // Miembro de clase
    vector<Tarea<T>> tareas;

public:
    // Constructor por defecto
    Proyecto() : nombre("") {}  // Inicializa a una cadena vacía

    // Constructor que toma un string
    Proyecto(const string& nombre_proyecto) : nombre(nombre_proyecto) {}  // Usa el parámetro correcto

    // Agregar una tarea
    void agregar_tarea(const Tarea<T>& tarea) {
        tareas.push_back(tarea);
    }

    // Eliminar una tarea
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

    // Ordenar las tareas por costo
    void ordenar_tareas_por_costo() {
        sort(tareas.begin(), tareas.end(), [](const Tarea<T>& a, const Tarea<T>& b) {
            return a.getCosto() < b.getCosto();
        });
    }

    // Ordenar las tareas por tiempo estimado (descendente)
    void ordenar_tareas_por_tiempo() {
        sort(tareas.begin(), tareas.end(), [](const Tarea<T>& a, const Tarea<T>& b) {
            return a.getTiempoEstimado() > b.getTiempoEstimado();
        });
    }

    // Ordenar las tareas por prioridad
    void ordenar_tareas_por_prioridad() {
        sort(tareas.begin(), tareas.end(), [](const Tarea<T>& a, const Tarea<T>& b) {
            return a.getPrioridad() < b.getPrioridad(); // 1 es mayor prioridad que 3
        });
    }

    // Mostrar resumen del proyecto
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

    // Mostrar todas las tareas
    void mostrar_tareas() const {
        for (const auto& tarea : tareas) {
            tarea.mostrar();
            cout << "-----------------------------\n";
        }
    }
};

#endif
