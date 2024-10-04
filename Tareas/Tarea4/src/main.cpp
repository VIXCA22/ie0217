#include <iostream>
#include <vector>
#include <algorithm>
#include <chrono> 
#include <random>
#include <bits/stdc++.h>
#include <iomanip> // Esto es para la precisión de los segundos y mostrar los segundos con precisión

#include "implementaciones.hpp"

using namespace std;

/**
 * @brief Excepción personalizada para manejar tamaños de conjuntos de datos que no son permitidos.
 * 
 * Se lanza cuando se utilizan tamaños de datos no válidos.
 */
class InvalidDataSizeException : public exception {
public:
    /**
     * @brief Se muestra el  mensaje de error  cuando ocurre la excepción.
     * 
     * @return const char* Mensaje de error.
     */
    const char* what() const noexcept override {
        return "Error: El tamaño del conjunto de datos no es permitido.";
    }
};

/**
 * @brief Se utiliza la sobrecarga de la función para medir el tiempo de QuickSort con parámetros adicionales , se separan debido a que se necesitan parámetros.
 * de no contemplado en el template siguiente pero funciona de la misma manera.
 * 
 * Para este caso  mide el tiempo de ejecución de la función QuickSort y lo mismo pero solo con parametros de "data" 
 * para  los demas algortimos por lo en este se requiere índices como parámetros adicionales.
 * 
 * @tparam Func Tipo de la función de ordenamiento (QuickSort en este caso) pero tambien funciona para los demás ordenamientos.
 * @param sort_functions Se utiliza sort function  de ordenamiento a medir.
 * @param data Vector de enteros que se va a ordenar.
 * @return double establece  tiempo de ejecución en segundos.
 */
template <typename Func>
double measure_sort_time(Func sort_function, vector<int>& data, int low, int high) {
    auto start = chrono::high_resolution_clock::now();
    sort_function(data, low, high);  // Llamar a la función con los parámetros
    auto end = chrono::high_resolution_clock::now();
    return chrono::duration_cast<chrono::milliseconds>(end - start).count() / 1000.0;
}

template <typename Func>
double measure_sort_time(Func sort_function, vector<int>& data) {
    auto start = chrono::high_resolution_clock::now();
    sort_function(data);
    auto end = chrono::high_resolution_clock::now();
    return chrono::duration_cast<chrono::milliseconds>(end - start).count() / 1000.0;
}

int main() {
   for (int i = 0; i < 10; i++) {
    try {
        // Tamaños de prueba
        vector<size_t> sizes = {5000, 10000, 50000, 100000, 200000, 400000}; 

        // Comparación de tiempos de varios algoritmos de ordenamiento
        for (auto size : sizes) {
            if (size <= 0) {
                throw InvalidDataSizeException(); // Se lanza la  excepción para tamaño no válido
            }

            vector<int> data = generate_random_vector(size);

            cout << "Tamaño del conjunto de datos: " << size << "\n";
            
            //  Mide el tiempo de Bubble Sort
            vector<int> bubble_data = data;
            double bubble_time = measure_sort_time(bubble_sort, bubble_data);
            cout << fixed << setprecision(3);
            cout << "Bubble Sort: " << bubble_time << " segundos\n";

            //  Mide el tiempo de Insertion Sort
            vector<int> insertion_data = data;
            double insertion_time = measure_sort_time(insertion_sort, insertion_data);
            cout << "Insertion Sort: " << insertion_time << " segundos\n";

            //  Mide el tiempo de QuickSort
            vector<int> quick_data = data;
            double quick_time = measure_sort_time(quick_sort, quick_data, 0, quick_data.size() - 1);  // Llamada correcta a quick_sort con índices
            cout << "Quick Sort: " << quick_time << " segundos\n";

            //  Mide el tiempode Selection Sort
            vector<int> selection_data = data;
            double selection_time = measure_sort_time(selection_sort, selection_data);
            cout << "Selection Sort: " << selection_time << " segundos\n";

            // Mide el tiempo de STL Sort
            vector<int> stl_data = data;
            double stl_time = measure_sort_time([](vector<int>& arr) { sort(arr.begin(), arr.end()); }, stl_data);
            cout << "STL Sort: " << stl_time << " segundos\n";
            
            cout << "---------------------------------------------\n";
        }
    //Se hace el catch de los errores si los hay
    } catch (const std::bad_alloc& e) {
        cerr << "Error de fallo de asignación de memoria: " << e.what() << endl;
    } catch (const InvalidDataSizeException& e) {
        cerr << e.what() << endl;
    } catch (const std::exception& e) {
        cerr << "Error: " << e.what() << endl;
    }
 
   }
    return 0;
}
