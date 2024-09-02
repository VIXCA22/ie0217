
# Sesion: #5 


## C++ Manejo de Memoria, Estructuras de Datos y Algoritmos



1. **¿Cómo se guardan los programas en C++ dentro de la memoria?**:
   - **Text**: Almacena el código que se está ejecutando.
   - **Data**: Almacena variables globales, separadas en inicializadas y no inicializadas.
   - **Heap**: Memoria dinámica que el programador puede asignar.
   - **Stack**: Almacena variables locales.

2. **Memoria dinámica**:
   - **new**: Asigna memoria dinámicamente y devuelve la dirección de la memoria asignada.
   - **delete**: Libera la memoria previamente asignada con `new`.
   - **malloc**: Asigna un bloque de memoria en el heap y devuelve un puntero `void*`.
   - **calloc**: Similar a `malloc`, pero inicializa la memoria a cero.
   - **realloc**: Redimensiona un bloque de memoria previamente asignado con `malloc` o `calloc`.
   - **free**: Libera la memoria asignada con `malloc`, `calloc`, o `realloc`.

3. **Algoritmos**:
   - **Definición**: Conjunto de instrucciones bien definidas para resolver un problema.
   - **Complejidad**: Se refiere a los recursos necesarios, como tiempo y memoria, para ejecutar un algoritmo.
   - **Notaciones asintóticas**: Matemáticas usadas para describir el tiempo de ejecución (Big-O, Omega, Theta).

4. **Corrección de algoritmos**:
   - **Verificación de complejidad**: Comparación teórica y práctica de la cantidad de operaciones necesarias.
   - **Medición de eficiencia**: Se mide el tiempo de ejecución y uso de recursos con diferentes tamaños de entrada.

5. **Estructuras de datos**:
   - **Definición**: Métodos de organización y almacenamiento de datos para acceder y actualizarlos eficientemente.
   - **Tipos**:
     - **Stack (Pila)**: Sigue el principio LIFO (Last-In, First-Out).
     - **Queue (Cola)**: Sigue el principio FIFO (First-In, First-Out).
     - **Lista enlazada**: Serie de nodos conectados que almacenan datos y la dirección del siguiente nodo.
     - **Hash-table**: Almacena pares clave-valor y permite operaciones en tiempo constante.
     - **Árbol**: Estructura jerárquica con nodos conectados por aristas.
       - **Árbol binario**: Cada nodo tiene un máximo de dos hijos.

6. **Recorridos de árboles**:
   - **In-order**: Visita primero el subárbol izquierdo, luego el nodo raíz, y finalmente el subárbol derecho.
   - **Pre-order**: Visita primero el nodo raíz, luego el subárbol izquierdo, y finalmente el subárbol derecho.
   - **Post-order**: Visita primero el subárbol izquierdo, luego el derecho, y finalmente el nodo raíz.

    