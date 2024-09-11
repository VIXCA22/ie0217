
# Sesión #6 : Algoritmos de Ordenamiento

## Algoritmos de Clasificación en C++

En resumen se explicara el tema de Algoritmos de Clasificación por medio de definiciones resumidas en la información de "Algoritmos de Clasificación" de los tipos de Sort.


1. **¿Qué es un algoritmo de ordenamiento?**:
   - **Definición**: Un conjunto de instrucciones diseñadas para organizar los elementos de una matriz o lista en un orden específico (ascendente o descendente).
   - **Aplicación**: Utilizado en múltiples contextos, como la clasificación de datos, búsqueda eficiente, entre otros.

2. **Algoritmos de ordenamiento más comunes**:
   - **Bubble Sort**: 
     - Compara elementos adyacentes y los intercambia si están en el orden incorrecto.
     - **Complejidad**: \(O(n^2)\) en el peor caso.
   - **Selection Sort**: 
     - Busca el elemento más pequeño en el arreglo y lo coloca en su posición correcta, repitiendo el proceso para los elementos restantes.
     - **Complejidad**: \(O(n^2)\).
   - **Insertion Sort**: 
     - Inserta cada elemento en su posición correcta en la parte ya ordenada del arreglo.
     - **Complejidad**: \(O(n^2)\).
   - **Quick Sort**:
     - Utiliza la técnica de "divide y vencerás". Selecciona un pivote y particiona el arreglo en dos sub-arreglos, repitiendo el proceso recursivamente.
     - **Complejidad**: \(O(n \log n)\) en el mejor caso; \(O(n^2)\) en el peor caso si el pivote no se elige adecuadamente.

3. **Comparación de algoritmos**:
   - **Bubble Sort** y **Selection Sort** son sencillos pero ineficientes para grandes cantidades de datos debido a su complejidad cuadrática.
   - **Insertion Sort** es más eficiente para listas pequeñas o casi ordenadas.
   - **Quick Sort** es el más eficiente en la mayoría de los casos, pero puede sufrir en el peor escenario.

4. **Recomendaciones**:
   - Usar **Quick Sort** para grandes volúmenes de datos.
   - Para conjuntos pequeños o cuando la simplicidad del código es prioritaria, **Bubble Sort**, **Selection Sort**, o **Insertion Sort** son buenas opciones.

--- 
