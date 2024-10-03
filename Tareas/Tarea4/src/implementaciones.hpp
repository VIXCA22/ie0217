#ifndef IMPLEMENTACIONES_HPP
#define IMPLEMENTACIONES_HPP

#include <vector>
#include <algorithm>
#include <chrono>
#include <random>
#include <bits/stdc++.h>

using namespace std;

/**
 * @brief  Se implementa el arreglo para el algoritmo Bubble Sort.
 * 
 * Compara cada par de elementos adyacentes e intercambia  los elemento si están en el orden incorrecto.
 * Repite el proceso hasta que se ordene.
 * 
 * @param arr Se refencia el vector de enteros a ordenar esto para todos los demás.
 */
void bubble_sort(vector<int>& arr) {
    bool swapped;
    for (size_t i = 0; i < arr.size() - 1; i++) {
        swapped = false;
        for (size_t j = 0; j < arr.size() - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped)
            break;
    }
}

/**
 * @brief Primero se divide el arreglo en dos partes alrededor de un pivote.
 * 
 * Se colocan los elementos menores que el pivote a su izquierda y los mayores a su derecha.
 * 
 * @param low Indica el índice inicial de la porción del vector.
 * @param high Indica el índice final de la porción del vector.
 * @return int es el índice del pivote después de la partición.
 */
int partition_custom(vector<int>& arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);  
    return i + 1;
}

/**
 * @brief  Se ordena el arreglo usando el algoritmo QuickSort.
 * 
 * Como ya se sabe QuickSort es un algoritmo de ordenamiento eficiente que usa la técnica de divide y vencerás,
 * se basa en elegir un "pivote" y reorganizar los elementos de forma que los menores al pivote queden
 * a su izquierda y los mayores a su derecha.
 * 
 */
void quick_sort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pi = partition_custom(arr, low, high);
        quick_sort(arr, low, pi - 1);
        quick_sort(arr, pi + 1, high);
    }
}

/**
 * @brief Se ordena el arreglo usando el algoritmo Selection Sort.
 * 
 * Consiste en seleccionar el elemento más pequeño del arreglo y lo coloca en su posición correcta.
 * Repite este proceso para los demás elementos.
 * 
 */
void selection_sort(vector<int>& arr) {
    for (size_t i = 0; i < arr.size() - 1; i++) {
        size_t min_index = i;
        for (size_t j = i + 1; j < arr.size(); j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        swap(arr[i], arr[min_index]);
    }
}

/**
 * @brief Se ordena el arreglo usando el algoritmo Insertion Sort.
 * 
 * Se basa en insertar cada elemento en su posición correcta en la parte ya ordenada del arreglo.
 * 
 */
void insertion_sort(vector<int>& arr) {
    for (size_t i = 1; i < arr.size(); i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

/**
 * @brief Generador  de un vector de números random.
 * 
 * Se crea un vector de enteros con numeros random dentro de un rango.
 * 
 * @param size Es el tamaño del vector a generar.
 * @return vector<int> Se utiliza  "Vector" generado con números aleatorios.
 */
vector<int> generate_random_vector(size_t size) {
    vector<int> vec(size);
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(1, 10000);

    for (size_t i = 0; i < size; ++i) {
        vec[i] = dist(gen);
    }
    return vec;
}

#endif // IMPLEMENTACIONES_HPP
