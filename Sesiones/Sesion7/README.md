
# Sesión #7: STL (Standard Template Library)

En esta sesión se explicaran algunos conceptos de sobre STL(Standard Template Library) y sus conceptos relacionados al uso del mismo como contenedores, iteradores y algoritmos STL
## Componentes principales de la STL


1. **¿Qué es la STL?**:
   - **Definición**: Es una biblioteca de clases y funciones que proporciona herramientas para la programación genérica en C++.
   - **Beneficios**:
     - **Reutilización de código**: Facilita la reutilización de estructuras de datos y algoritmos.
     - **Rendimiento**: Está optimizada para ofrecer eficiencia en términos de tiempo y espacio.
     - **Portabilidad**: Es parte del estándar de C++, por lo que el código es portable entre diferentes compiladores.
     - **Flexibilidad**: Utiliza plantillas que permiten trabajar con diferentes tipos de datos.

2. **Contenedores (Containers)**:
   - **Tipos de contenedores**:
     - **Secuenciales**: Almacenan elementos en orden secuencial (e.g., `vector`, `deque`, `list`).
     - **Asociativos**: Almacenan elementos ordenados según las claves (e.g., `set`, `map`).
     - **Asociativos desordenados**: Utilizan tablas hash para almacenar elementos sin orden (e.g., `unordered_set`, `unordered_map`).
   - **Adaptadores de contenedor**: Modifican la interfaz de un contenedor existente (e.g., `stack`, `queue`, `priority_queue`).

3. **Iteradores (Iterators)**:
   - Son objetos similares a punteros que permiten recorrer los elementos de un contenedor.
   - **Tipos de iteradores**:
     - **Iterador de entrada/salida**: Lectura o escritura mientras se itera hacia adelante.
     - **Iterador bidireccional**: Permite moverse hacia adelante y hacia atrás.
     - **Iterador de acceso aleatorio**: Permite acceso directo a cualquier elemento (e.g., `vector`, `deque`).

4. **Algoritmos en la STL**:
   - **Búsqueda**:
     - `find`, `binary_search`, `find_if`, `count`.
   - **Ordenamiento**:
     - `sort`, `stable_sort`, `partial_sort`, `nth_element`.
   - **Manipulación de rangos**:
     - `copy`, `move`, `fill`, `transform`.
   - **Eliminación y modificación**:
     - `remove`, `replace`, `reverse`.
   - **Algoritmos numéricos**:
     - `accumulate`, `inner_product`, `partial_sum`, `iota`.
   - **Algoritmos de conjuntos**:
     - `set_intersection`, `set_union`, `set_difference`, `includes`.

---