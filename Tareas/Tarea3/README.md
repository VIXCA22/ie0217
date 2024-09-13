# Tarea #3

_La tarea 3 se basa en responder una serie de preguntas y resolver dos retos de programación en C++ enfocado en Manejo de Memoria, Estructuras de Datos y Algoritmos_

# Cuestionario🚀 sobre Manejo de Memoria, Estructuras de Datos y Algoritmos

## 1. Explique cada sección del nivel de usuario de la memoria (Text, Heap, Stack, etc.). ¿Cuáles de estas secciones son de memoria dinámica?

#### Text: Almacena el código que se está ejecutando.

#### Data: Almacena variables globales, separadas en inicializadas y no inicializadas.

#### Heap: "Memoria dinámica" que el programador puede asignar.

#### Permite asignar y liberar memoria durante la ejecución del código

#### Stack: Almacena variables locales.

## 2. Observe el siguiente fragmento de código. Considerando que existen cuatro variables en el código (globalVar, staticVar, localVar y dynamicVar), mencione en qué sección de la memoria se almacena cada variable y explique el porqué.

 ```cpp**
#include <iostream>

int globalvar = 42;

int main(){
    static int staticVar= 100;
    int localVar = 10;
    int* dynamicVar = new int(5);

    delete dynamicVar;

    return 0;
}
 ```
#### globalVar : Esta alojado en Data debido a que es una variable global por lo que se le asigna un valor que es inicializado en Data.

#### staticVar: Es otra variable estática alojada en Data.

#### dynamicVar: Se aloja en el Heap debido a que es un puntero el cual apunta hacia una variable dinámica y se utiliza  `new`.

#### localVar: Está alojado en el Stack debido a que se declara dentro del main() usualmente las varibles locales se almacenan en Stack donde se modifica lo valores temporales.



## 3. ¿Cuál es la diferencia entre memoria dinámica y memoria estática? Brinde un ejemplo de qué tipos de variables se almacenan en cada tipo.

La memoria estática se asigna en el momento de la compilación con datos prestablecidos mientras que las varibles dinámicas se asignan en el momento de ejecución del programa y el usuario puede manipular estos datos de las varibles o liberarlos.

## Memoria Estática:
```cpp**
int globalvar = 42; //Esto es parte de la memoria estática con valores prestablecidos 

int main(){
    static int staticVar= 100;
    //Esto es parte de la memoria estática con valores prestablecidos 
   
    return 0;
    }
 ```
## Memoria Dinámica:

```cpp**
int main(){ //Notamos que a la memoria dinámica se le asigna un valor de 5  a dynamicVar 
y luego se libera dando las características de la misma.

int* dynamicVar = new int(5);

delete dynamicVar;

    return 0;
}

  ```

## 4. ¿Cómo se accede a la memoria dinámica del heap? Brinde un ejemplo programado de cómo guardar un valor en una posición de memoria ubicada ahí.

Usualmente para acceder a la memoria dinámica Heap se utiliza   `new` y este le devuelve un puntero para acceder a al información o modificar la misma.

## Ejemplo de memoria dinámica Heap:

 ```cpp**
 #include <iostream>
using namespace std;

int main() {

    //declare an int pointer 
    int* pointInt;

    //declare a float pointer 
    float* pointFloat;

    //dynamically allocate memory

    pointInt = new int;
    pointFloat = new float;

    //assigning value to the memory 

    *pointInt = 45;
    *pointFloat =45.45f;

    cout << *pointInt << endl;
    cout << *pointFloat<< endl;

    // deallocate the memory

    delete pointInt;
    delete pointFloat;

    return 0;
}
 ```

## 5. ¿Por qué es importante liberar la memoria asignada dinámicamente cuando ya no se esté utilizando?

Se debe liberar la  memoria para que nuestros procesos no se realenticen al estar guardando memoria existe fuga de memoria afectando el rendimiento de nuestro código y evitando errores relacionados con ello.

## 6. ¿Para qué se utilizan las funciones malloc, calloc y realloc? ¿Qué parámetros recibe cada una?

## malloc 
Asigna un bloque de memoria en el heap y devuelve un puntero `void*`. Recibe el tamaño en bytes del bloque de memoria.

## calloc 

Similar a `malloc`, pero inicializa la memoria a cero.Recibe el número de elementos y el tamaño de cada uno.

## realloc 
Redimensiona un bloque de memoria previamente asignado con `malloc` o `calloc`. Recibe un puntero a memoria previamente asignada y el nuevo tamaño deseado en bytes.

## 7. Mencione las diferencias entre el uso de free y delete. ¿En qué contexto se utilizaría cada uno?

La diferencia entre free y delete es que al usar delete se libera la memoria asignada a `new` . Mientras que con delete libera la memoria asignada en `malloc`,`calloc` o `realloc`.

## 8. Explique la diferencia entre new y malloc en C++. ¿Cuándo debería utilizar uno sobre el otro?

La diferencia entre `new` y `malloc` es que  en `new` se asigna memoria dimicamente y devuelve la dirección asinada mientras que `malloc` asigna un bloque de memoria en el Heap devolviendo un puntero tipo `void*`.

## 9. Explique el concepto de punteros inteligentes (smart pointers) y proporcione ejemplos de su uso.

Los punteros inteligentes sirven para una mejor y segura gestión de memoria 

## Ejemplos: 

`unique_ptr`: Propiedad exclusiva de un recurso, no se puede copiar.

`shared_ptr`: Propiedad compartida, el recurso es liberado cuando el último shared_ptr deja de apuntar a él.

`weak_ptr`: Referencia no propietaria que no afecta el ciclo de vida del recurso.



## 10. Mencione qué es un algoritmo y explique qué características básicas debería tener.

### Se define como
Conjunto de instrucciones bien definidas y con una serie de pasos a seguir para resolver un problema.

## Debe ser:

#### Claro : Que nuestro algoritmo no sea ambigüo y todos puedan entenderlo.

#### Ordenado: La manera de como se desarrolla el algoritmo debe de ser de tal modo que se siga una lógica simple para lograr resolver el problema.

#### Finito: Un algoritmo debe de tener un numero finito de pasos

#### Eficiente: Un algoritmo debe de ser eficiente en cuanto a la manipulación de memoria y espacio.

#### Generalidad: El código debe ser capaz de reutilizarse o aportar el concepto para la realización de algoritmos similares.

## 11. ¿Qué es la complejidad y eficiencia de un algoritmo? ¿De qué manera se miden?


### Complejidad

Se refiere a los recursos necesarios, como tiempo y memoria, para ejecutar un algoritmo.

### Notaciones asintóticas

Matemáticas usadas para describir el tiempo de ejecución (Big-O, Omega, Theta).

## 12. ¿Cuál es la diferencia entre las estructuras de datos lineales y no lineales? Mencione dos ejemplos de cada una.

La diferencia entre estructuras de datos lineales y no lineales es que las lineales siguen una secuencia o linea lo que hace que cada elemento le sigue un solo elemento , contrario al no lineal 

## Ejemplos

### Lineales:
#### -Listas
#### -Colas

### No Lineales:

#### -Árboles
#### -Grafos


## 13. Explique cómo funciona la estructura Stack.

#### Stack (Pila): Sigue el principio LIFO (Last-In, First-Out)significa que el último elemento agregado es el primero en ser retirado

Los elementos se agregan y se eliminan desde el mismo extremo, conocido como la cima.
Solo se puede acceder al elemento en la cima de la pila. Los elementos más antiguos están debajo y no se pueden acceder directamente sin eliminar los elementos encima de ellos. Como una pila de platos


## 14. Explique cómo funciona la estructura Queue.

#### Queue (Cola): Sigue el principio FIFO (First-In, First-Out).El primer elemento agregado es el primero en ser retirado. Los elementos se agregan en un extremo (final) y se eliminan desde el otro extremo (frente).

## 15. Explique cómo funciona la estructura Lista Enlazada.

#### Lista enlazada: Serie de nodos conectados que almacenan datos y la dirección del siguiente nodo.

## 16. Explique cómo funciona la estructura Árbol. ¿Qué características presenta esta estructura?

## Concepto

#### Árbol: Estructura jerárquica con nodos conectados por aristas.

## Características

### Conformado por Nodos,Raíces,Hojas

##### Raíz: Es el nodo superior del árbol, desde el cual se derivan todos los demás nodos. Solo hay un nodo raíz en un árbol.
##### Nodos Internos: Son nodos que tienen al menos un hijo. Todos los nodos que no son hojas son nodos internos.
##### Hojas: Son los nodos que no tienen hijos. Se encuentran en el nivel más bajo del árbol.


### Se carateriza

##### Nivel: El nivel de un nodo es la distancia desde la raíz. La raíz está en el nivel 0.
##### Altura: La altura de un nodo es la longitud del camino más largo desde ese nodo hasta una hoja. La altura del árbol es la altura de la raíz.
##### Grado: El grado de un nodo es el número de hijos que tiene. El grado del árbol es el grado máximo de cualquier nodo.
##### Profundidad: La profundidad de un nodo es la longitud del camino desde la raíz hasta el nodo.



## 17. Explique los tipos de recorridos que se le pueden aplicar a un árbol.

#### In-order: Visita primero el subárbol izquierdo, luego el nodo raíz, y finalmente el subárbol derecho.
#### Pre-order: Visita primero el nodo raíz, luego el subárbol izquierdo, y finalmente el subárbol derecho.
#### Post-order: Visita primero el subárbol izquierdo, luego el derecho, y finalmente el nodo raíz.

## 18. ¿Cuál es la diferencia entre un árbol y un árbol binario? Mencione y explique tres tipos de árboles binarios.

La diferencia es la limitación de nodos que tiene el árbol binario diferencte del árbol normal.

## Tipos de árboles binarios

#### Árbol Binario Completo : Todos los nodos tienen dos hijos, excepto los nodos en el último nivel . Los nodos del último nivel están alineados a la izquierda.
#### Árbol Binario de Búsqueda (BST):Permite búsquedas eficientes con un tiempo promedio de O(log n) si el árbol está equilibrado. Las inserciones y eliminaciones también son eficientes si el árbol se mantiene equilibrado.
#### Árbol AVL: Mantiene el equilibrio para garantizar tiempos de búsqueda, inserción y eliminación eficientes.La rotación de nodos se utiliza para mantener el equilibrio después de operaciones de inserción y eliminación.

## Código :Árbol Binario de Búsqueda con Verificación y Balance 

_Nuestro código se trata de usar un  Árbol Binario de Búsqueda (ABB) en
C++. El árbol inicial estará compuesto por una estructura predefinida de nodos. Las funciones son inserción(inicio,medio,final) y eliminación de nodos, además del cálculo de la altura del árbol y determinar si está balanceado._


### Algunos errores Código #1:
 - Al incertar los valores prestablecidos de los nodos no se guardaban hasta que lo pude solucionar con    `arbol.establecerRaiz(raiz);` .
 - No se podía encontrar el valor del nodo a eliminar debido a que no se     había hecho la función de obtenerMinimo para que se buscara el número      menor sucesivamente hasta encontrar el valor cuando habían dos hijos. 
- Errores al apuntar mal con los punteros producía errores al apuntar a     nodos nulos por lo que se mejoró la lógica para que pudiera apuntar al la  dirección contraria donde no habia nodo .
###  Para ejecutar:
```cpp**
   mingw32-make make
 ```
### Link Doxyfile:

arbol-binario-19c561.netlify.app

## Código :Gestión de una Lista Enlazada Dinámica de Canciones
_Es un cancionero donde se debe desarrollar un programa que implemente una lista enlazada dinámica para gestionar una colección de canciones. Cada nodo de la lista almacenará un objeto de la clase
Cancion, en el que se obtendrán características como nombre,artista, duración y se complementan con las funciones , agregar cancion al inicio , medio o final , eliminar canción, modificar , imprimir.
 ._

### Algunos errores Código #2:
- Algunos errores pequeños como olvidar el #endif y cuestiones como invocar funciones con el nombre diferente al que se habia declarado además de erroes con el contructor `error: only constructors take member initializers`
- Un error con `GetNombre()` , la función se estaba dando error por lo que se concluye a usar `::` tomando la listaEnlaza para la modificación en cada caso dividiendo la listaEnlaza con funciones inicializadas en cpp y listaEnlazada hpp donde se definen.
- Se procede realizar un cpp de listaEnlazada ya que da errores de que primero se debe inicializar el struct cancion.
- Al modificar las canciones no hacia encontraba ninguna canción ya que no encontraba su misma comparación por lo que se deduce que es debido a los espacios que tiene el nombre , lo que conduce a que finalmente no se había importardo la libreria vector para que tomara toda la cadena de caracteres para la comparación , se implemetaron getline y se liberadores para el buffer debido a que se creía que de allí venía el problema

###  Para ejecutar:
```cpp**
   mingw32-make make2
 ```
### Link Doxyfile:

cancionero-listaenlazada-cd82d6.netlify.app

## Autor ✒️


* **Kenneth Daniel Vizcaíno Jiménez** - *TAREA 2* - [VIXCA22](https://github.com/VIXCA22)


---