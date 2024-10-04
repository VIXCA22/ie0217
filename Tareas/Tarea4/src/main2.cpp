#include <iostream>
#include <map>
#include "Proyecto.hpp"
#include "Tarea.hpp"

using namespace std;

/**
 * @file main2.cpp
 * @brief El el main para gestionar la simulación del programa.
 *
 * El programa tiene como sentido que los usuarios puedan agregar, eliminar y gestionar tareas
 * dentro de proyectos, además de  ordenar tareas y mostrar resúmenes de proyectos.
 */

int main() {
    // En map  almacena proyectos por su nombre
    map<string, Proyecto<int>> proyectos; 
    int opcion; 

    do {
        // Menú de diferentes opciones
        cout << "1. Agregar un nuevo proyecto.\n";
        cout << "2. Agregar una tarea a un proyecto existente.\n";
        cout << "3. Eliminar una tarea de un proyecto.\n";
        cout << "4. Ordenar tareas por costo, tiempo o prioridad.\n";
        cout << "5. Mostrar el resumen de un proyecto.\n";
        cout << "6. Eliminar un proyecto.\n";
        cout << "7. Salir del programa.\n";
        cout << "Seleccione una opción: ";
        cin >> opcion; 

        string nombre_proyecto, nombre_tarea;
        double costo, tiempo;
        int prioridad, recursos;

        switch (opcion) {
        case 1:
            cout << "Ingrese el nombre del nuevo proyecto: ";
            cin.ignore(); // Limpia el buffer de entrada
            getline(cin, nombre_proyecto);
            proyectos[nombre_proyecto] = Proyecto<int>(nombre_proyecto); // Crea y agrega un nuevo proyecto
            break;

        case 2:
            // Agregar una tarea a un proyecto existente
            cout << "Ingrese el nombre del proyecto: ";
            cin.ignore();
            getline(cin, nombre_proyecto);
            if (proyectos.find(nombre_proyecto) != proyectos.end()) {
                cout << "Ingrese el nombre de la tarea: ";
                getline(cin, nombre_tarea);
                cout << "Ingrese el costo de la tarea: ";
                cin >> costo;
                cout << "Ingrese el tiempo estimado (horas): ";
                cin >> tiempo;
                cout << "Ingrese la prioridad de la tarea (1, 2, 3): ";
                cin >> prioridad;
                cout << "Ingrese la cantidad de recursos necesarios: Cantidad de Peones o Cantidad de materiales: ";
                cin >> recursos;
                try {
                    // Agrega la nueva tarea al proyecto
                    proyectos[nombre_proyecto].agregar_tarea(Tarea<int>(nombre_tarea, costo, tiempo, prioridad, recursos));
                } catch (const exception& e) {
                    cout << "Error: " << e.what() << "\n"; // Muestra el error en caso de excepción
                }
            } else {
                cout << "Proyecto no encontrado.\n";
            }
            break;

        case 3:
            // Eliminar una tarea de un proyecto
            cout << "Ingrese el nombre del proyecto: ";
            cin.ignore();
            getline(cin, nombre_proyecto);
            if (proyectos.find(nombre_proyecto) != proyectos.end()) {
                cout << "Ingrese el nombre de la tarea a eliminar: ";
                getline(cin, nombre_tarea);
                try {
                    // Elimina la tarea del proyecto
                    proyectos[nombre_proyecto].eliminar_tarea(nombre_tarea);
                    cout << "Tarea eliminada.\n";
                } catch (const exception& e) {
                    cout << "Error: " << e.what() << "\n"; // Muestra el error en caso de excepción
                }
            } else {
                cout << "Proyecto no encontrado.\n";
            }
            break;

        case 4:
            // Ordenana las tareas por costo, tiempo o prioridad
            cout << "Ingrese el nombre del proyecto: ";
            cin.ignore();
            getline(cin, nombre_proyecto);
            if (proyectos.find(nombre_proyecto) != proyectos.end()) {
                int opcion_ordenar;
                cout << "1. Ordenar por costo\n";
                cout << "2. Ordenar por tiempo\n";
                cout << "3. Ordenar por prioridad\n";
                cout << "Seleccione una opción: ";
                cin >> opcion_ordenar;
                switch (opcion_ordenar) {
                case 1:
                    proyectos[nombre_proyecto].ordenar_tareas_por_costo();
                    cout << "Tareas ordenadas por costo.\n";
                    break;
                case 2:
                    proyectos[nombre_proyecto].ordenar_tareas_por_tiempo();
                    cout << "Tareas ordenadas por tiempo estimado.\n";
                    break;
                case 3:
                    proyectos[nombre_proyecto].ordenar_tareas_por_prioridad();
                    cout << "Tareas ordenadas por prioridad.\n";
                    break;
                default:
                    cout << "Opción no válida.\n";
                    break;
                }
            } else {
                cout << "Proyecto no encontrado.\n";
            }
            break;

        case 5:
            // Muestra el resumen de un proyecto
            cout << "Ingrese el nombre del proyecto: ";
            cin.ignore();
            getline(cin, nombre_proyecto);
            if (proyectos.find(nombre_proyecto) != proyectos.end()) {
                proyectos[nombre_proyecto].mostrar_resumen_proyecto(); // Muestra el resumen del proyecto
            } else {
                cout << "Proyecto no encontrado.\n";
            }
            break;

        case 6:
            // Elimina un proyecto
            cout << "Ingrese el nombre del proyecto a eliminar: ";
            cin.ignore();
            getline(cin, nombre_proyecto);
            if (proyectos.erase(nombre_proyecto)) {
                cout << "Proyecto eliminado.\n";
            } else {
                cout << "Proyecto no encontrado.\n";
            }
            break;

        case 7:
            cout << "Saliendo del programa.\n"; 
            break;

        default:
            cout << "Opción no válida.\n"; 
            break;
        }

    } while (opcion != 7);

    return 0;
}
