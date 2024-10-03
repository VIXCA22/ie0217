#include <iostream>
#include <vector>
#include <algorithm>
#include <chrono> // Para medir tiempo
#include <random>
#include <bits/stdc++.h>
#include <iomanip> // Para setprecision

#include "implementaciones.hpp"


using namespace std;

// Excepción personalizada para tamaños de conjuntos de datos inválidos
class InvalidDataSizeException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Error: El tamaño del conjunto de datos no es válido.";
    }
};

// Sobrecarga para QuickSort que requiere parámetros adicionales (índices)
template <typename Func>
double measure_sort_time(Func sort_function, vector<int>& data, int low, int high) {
    auto start = chrono::high_resolution_clock::now();
    sort_function(data, low, high);  // Llamar a la función con los parámetros
    auto end = chrono::high_resolution_clock::now();
    return chrono::duration_cast<chrono::milliseconds>(end - start).count()/1000.0;
}


// Función para medir tiempo de ejecución de un algoritmo de ordenamiento
template <typename Func>
double measure_sort_time(Func sort_function, vector<int>& data) {
    auto start = chrono::high_resolution_clock::now();
    sort_function(data);
    auto end = chrono::high_resolution_clock::now();
    return chrono::duration_cast<chrono::milliseconds>(end - start).count()/1000.0;
}

int main() {
try{
    // Tamaños de prueba
    vector<size_t> sizes = {5000,10000,50000,100000,200000,400000}; 

    // Comparación de tiempos de varios algoritmos de ordenamiento
    for (auto size : sizes) {
            if (size <= 0) {
                throw InvalidDataSizeException(); // Lanzar excepción para tamaño no válido
            }
        vector<int> data = generate_random_vector(size);


        cout << " Tamaño del conjunto de datos:"  << size << "\n";
        // Medir tiempo de Bubble Sort
        vector<int> bubble_data = data;
        double bubble_time = measure_sort_time(bubble_sort, bubble_data);
        cout << fixed << setprecision(3);
        cout << "Bubble Sort : " << bubble_time << " segundos\n";

        // Medir tiempo de Insertion Sort
        vector<int> insertion_data = data;
        double insertion_time = measure_sort_time(insertion_sort, insertion_data);
        cout << "Insertion Sort: " << insertion_time<< " segundos\n";

        // Medir tiempo de QuickSort
        vector<int> quick_data = data;
        double quick_time = measure_sort_time(quick_sort, quick_data, 0, quick_data.size() - 1);  // Llamada correcta a quick_sort con índices
        cout << "Quick Sort: " << quick_time<< " segundos\n";

        // Medir tiempo de Selection Sort
        vector<int> selection_data = data;
        double selection_time = measure_sort_time(selection_sort, selection_data);
        cout << "Selection Sort:" << selection_time << " segundos\n";

        // Medir tiempo de STL Sort
        vector<int> stl_data = data;
        double stl_time = measure_sort_time([](vector<int>& arr) { sort(arr.begin(), arr.end()); }, stl_data);
        cout << "STL Sort: " << stl_time<< " segundos\n";
        

        cout << "---------------------------------------------\n";
    }
  } catch (const std::bad_alloc& e) {
        cerr << "Error: Fallo de asignación de memoria: " << e.what() << endl;
  } catch (const InvalidDataSizeException& e) {
        cerr << e.what() << endl;
  } catch (const std::exception& e) {
        cerr << "Error: " << e.what() << endl;
  }

    return 0;
}
