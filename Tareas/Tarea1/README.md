# Tarea #1

_La tarea 1 se basa en responder una serie de preguntas  y resolver dos retos de programación en C++_

## Cuestionario🚀

1. ¿Cuáles son las diferencias entre los lenguajes compilados e interpretados? Brinde un
ejemplo de cada uno.

Las diferencias entre un  lenguaje de tipo compilador y un  lenguaje de tipo intérprete es que un  lenguaje de tipo compilador convierte todo el código fuente en código ejecutable en un solo paso antes de que se ejecute el programa en cambio el lenguaje tipo intérprete procesa el código fuente línea por línea antes de que  se ejecute el programa por ejemplo python es de tipo intérprete ya que procesa linea a linea en cambio C o C++ es de tipo compilador ya que no importa si definimos una variable después ya que debe procesar todo el código antes de compilar y no en orden linea por linea.


2. ¿Qué son los tipos de datos en C++? ¿Cuáles son sus clasificaciones? Brinde dos ejemplos
de cada clasificación.

Definen los valores que se pueden guardar en las variables además del tipo de operaciones que se usarán para las mismas . Existen de tres tipos : Primarios(float,char), Derivados(array,pointer) , Definidos por el usuario(class,struct) .

Ejemplo: Primarios(float, char), 

```cpp**
//las estructuras son muy utiles al usar objetos para no estar repitiendo sus caracteristicas ahorrando muchas lineas de codigo

#include <iostream>
using  namespace std;

struct Persona{
    char nombre[50];
    char edad[50];
    float salario;
};

int main(){
    Persona p1;

    cout << "Ingrese el nombre completo: ";
    cin.get(p1.nombre, 50);
    cout << "Ingrese la edad: ";
    cin >> p1.edad;
    cout << "Ingrese el salario :";
    cin >> p1.salario;

    cout << "\nDesplegando info." << endl;
    cout << "Nombre : " << p1.nombre << endl;
    cout << "Edad : " << p1.edad << endl;
    cout << "Salario : " << p1.salario ;

    return 0;
}
```
Ejemplo: Derivados(array,pointer)
```cpp**
//Los punteros y arreglos funcionan de forma que primero se especifica el tipo de arreglo de estructura que se tomara sea int , char etc.
//los punteros funcionan de igual forma secuencialmente a la posicion en la se guarda cada dato en el arreglo

#include <iostream>
using namespace std;

int main(){
    float arr[3];

    //declara la varible de puntero
    float *ptr;

    cout << "Dislaying address using arrays: " << endl;

    //se usa el ciclo para imprimir las direcciones de todos los elementos del arreglo
    for (int i=0; i<3; ++i){
        cout << "&arr["<< i <<"] = " << &arr[i] << endl;
    }

    // ptr = &arr[0]
    ptr = arr;
    
    cout << arr;

    cout<<"\nDisplaying address using pointers: "<< endl;

    //se usa el ciclo para imprimir las direcciones de todos los elementos del arreglo
    //usando la notacion de puntero
    for(int i=0; i<3; ++i){
        cout << "ptr + " << i << " = "<<ptr + i << endl;

    }
    return 0;
}
```
Ejemplo: Definidos por el usuario(class,struct)
```cpp**
#ifndef LIBRO_HPP
#define LIBRO_HPP

//Esto es una estructura de la informacion de libro
struct Libro{
    char titulo[100];
    char autor[100];
    char ISBN[13];
    int anioPublicacion;
};



#endif // LIBRO_HPP
```

```cpp**
/*En este código se notara el ejemplo de objetos  como  parametros
a funciones  de dicha forma*/

#include <iostream>
using namespace std;

class Student {

    public: 
    double marks;

    Student(double m){
        marks = m;
    }
};

void calculateAverage(Student s1 , Student s2) {
    
    double average = (s1.marks + s2.marks) / 2;

    cout << "Average Marks = " << average << endl;
}

int main(){
    Student student1(88.0), student2(56.0);

    calculateAverage(student1,student2);

    return 0;
}

```
3. Explique qué es un linker en el contexto de un lenguaje de programación compilado. ¿Cuál
es su función principal y por qué es esencial en el proceso de compilación?

El linker en lenguaje de programación de compilado como anteriormente  se hace mención es debido a que toma todas los archivos relacionados para poder compilarlas individualemente como caracteriza  programacion compilado . Su función principal es enlazar estos archivos  tipo objeto, necesarios para el correcto funcionamiento del código ademas es esencial por debido a que solo se ejecuta un archivo para iniciar nuestro programa.

4. ¿Cuál es la diferencia entre usar el operador ‘=’ y ‘==’? Brinde un ejemplo para cada uno.

 "=" Se encarga de asignar variables  por ejemplo a = b
 
 "==" Se encargar de relaciona o comparar variables por ejemplo  si  4==5 entonces  es falso 
 
 ```cpp**
 #include <iostream>
//Utilización del operador ternario en vez de un if
int main() {
    std::cout << "Hola Mundo ,  estudiantes de  IE0217!\n" ;
     
    int var1 = 0; 
    int var2;
    
    //se compara var1 y si esta es igual a 0 se imprime 15 de otro modo se  imprimirá  27

    var2= (var1 == 0) ? 15: 27;

    std::cout << "var2: \n" <<var2 << "";
    
  return 0;  
}   
 ```

5. Observe el siguiente código, indique qué imprime el programa en la iteración número 7 y 9
del ciclo, explique el porqué

 ```cpp**
 #include  <iostream>
int main(){
    int sum= 0;
    int result =0;

    for (int i = 0; i < 10; i++)
    {
        sum += i;
        result = (i % 3 == 0) ? sum : 0;
        std::cout << result << std::endl;
    }
    return 0;
}
 ```
 
En el código anterior se observa el uso un operador ternario tomandolo como condicional por lo tanto si se cumple la condicion dividendo de 3 es igual a 0 se imprime la sum que lleva el iterador en ese instante de lo contrario imprimirá 0 la veces del que el iterador no lo cumpla.

En i=9 la sum es = 21 se imprime ya que es divisible por 3

En i=7 la sum es =20  se imprime 0 ya que no es divisible 3

6. Explique el proceso de pasar argumentos a la función principal. ¿Cuál es el primer
elemento de ‘argv[ ]’?

Usando argv o argc son parámetros que se encargan de recibir argumentos en el main cuando esta en proceso, interactuando con el entorno del programa 

En argv[] el primer elemento es el nombre del mismo programa

7. ¿Cuál es la diferencia entre declarar e inicializar una variable?

La declaración de una variable es asignarle el tipo de estructura en el que se va catalogar en cambio inicializar una variable se trata de darle un valor .

8. ¿Para qué sirven los modificadores en C++?

Los modificadores en C++ sirven actualizando la variable a nuestra conveniencia del tal modo que si originalmente por tomar un ejemplo se tiene un una varible de tipo flotante y queremos tener una cantidad limitada de numeros podemos re-asignar ya con el valor obtenido un int entonces minimizará el valor a la cantidad establecida por defecto del int 

9. ¿Qué es la sobrecarga de funciones en C++ y cómo se utiliza?

La sobrecarga de funciones es cuando tenemos dos funciones con mismo nombre pero estas tienen diferentes argumentos y funciona de tal forma que se llama a la función la cual tiene el mismo nombre pero debido al tipo de argumento de estructura coincidirá en la función designada al mismo valor del tipo de estructura de la función.

10. ¿Cuál es la diferencia entre una variable local y una local estática?

La principal diferencia entre la variable local y la variable estática es
que el valor de la variable estática persiste al final del programa.

Además que la variable estática solo existe en la función y solo hasta que esta función es llamada entonces es usada.

11. ¿Qué es el type casting? ¿Cuáles existen? Brinde un ejemplo de cada uno.

El type casting es convertir una variable de tipo entero por ejemplo a double
convertir las variables pueden perder numeros al convertirlo.
Ejemplos:

Implicit casting
 ```cpp**
 #include <iostream>
using namespace std;

int main(){
    //se le asigna el valor entero  a num_int
    int num_int=9;

    //se declara la varible tipo double
    double num_double;

    //se hace la conversion 
    num_double = num_int;

    cout << "num_int = " << num_int << endl;
    cout << "num_double = " << num_double << endl;

    return 0;

}
 ```
 Casting C-style
 ```cpp**
 #include <iostream>

using namespace std;

int main (){
    //se inicialiazan las variables doubles
    double num_double = 3.56;
    cout << "num_double = " << num_double << endl;\

    //conversion double a int
    int num_int1 = (int)num_double;
    cout << "num_int1 =" << num_int1 << endl;

    //conversion buble a int
    int num_int2 = int(num_double);
    cout << "num_int2 = " << num_int2 << endl;

    return 0;
}
 ```
12. ¿Cuál es la principal diferencia entre un bucle ‘do-while’ y un bucle ‘while’?

La diferencia es que en el do-while se el orden es primero el proceso y después la condición en cambio en el while es primeramente la condición y luego el proceso.

13. Explique por qué es útil y común dividir el código en archivos .hpp, .cpp y main.cpp en
C++. Describa el propósito específico de cada tipo de archivo.

Es útil deebido a que aveces se debe hacer un programa grande y se deben dividir entre varias personas por lo que cada persona trabaja con lo que se  le da y sus valores , ademas de ser mas ordenado .

14. ¿Qué hace la sentencia ‘goto’ y por qué es considerada una mala práctica en la
programación moderna? ¿Qué alternativas se pueden usar en su lugar?

La funcion de la sentencia goto se salta código por lo que prodría afectar a la lógica de programación y a grande escala , la gran dificultad al darle mantenimiento a un código y por tanto optar por diferentes bucles de programación .

15. ¿Para qué se utiliza la directiva ‘#ifndef’ y por qué es importante?

#ifndef significa "si no esta difinido" y se usa ya  que los macros pueden estar o no definidos en otras clases  por lo tanto al entrar al header se usa para evitar errores en el compilador.

16. ¿Qué es un puntero y para qué es útil? ¿Cómo se declara e inicializa?

Un puntero es una variable que apunta hacia otra variable y su función es acceder a información almacenada en la variable apuntada *ptr para acceder al elemento y  int * ptr  a la ubicación del elemento almacenada en la memoria.

17. ¿Cuál es la diferencia entre pasar parámetros por valor, por referencia y por puntero?

El puntero al pasar parámetro por valor copia el valor del elemento , por referencia hace referencia a la variable original y por puntero direcciona a la memoria.

18. Cuando se usa un puntero para apuntar a un arreglo en C++, ¿a qué valor o dirección
apunta inicialmente? Describa cómo sería la forma de acceder a todos los datos de ese
arreglo mediante el puntero.

El puntero apuntará al primer elemento del arreglo  y la almacenará . Se accederá recorriendo el arreglo con el puntero .

19. ¿En qué caso es conveniente usar el operador ‘->’ en punteros y por qué es beneficioso?

Es conveniente para acceder a datos en los que se usa clases o estructuras y es beneficioso debido a que produce menos errores en el compilador.

20. ¿Cuál es la manera de implementar punteros dobles, triples, etc? Brinde un ejemplo de en
qué caso sería beneficioso usar esta implementación.

Los punteros dobles apuntan  a otro puntero para obtener la información del puntero y estas se usan en las estructuras dinámicas .

 ```cpp**
 
 //punteros dobles, nos damos cuenta que tendra una direccion diferente en el **puntero y asi sucesivamente si anadimos *

#include <iostream>
using namespace std;



int main(){
  int var = 2050;
  int* ptr_var;

  ptr_var=&var;

  cout << "var: " << var << ", ptr_var " << ptr_var << endl;

  int** ptr_ptr_var;
  ptr_ptr_var = &ptr_var;
  cout << "ptr_ptr_var: " << ptr_ptr_var << endl;

  cout << "&ptr_var: " << &ptr_var << endl;

  cout<< "&ptr_ptr_var:  " << &ptr_ptr_var << endl;
 
    return 0;
}
 ```
21. ¿Qué es el puntero this en C++?

El puntero this apunta hacia el elemento de una clase y accede a la información requerida, se usan mucho en clases y sirven tambien para apuntar clases con sus respectivos parámetros .

22. ¿Qué es un puntero nullptr?

El puntero nullptr es en sí un puntero nulo como indica su nombre  estas no apuntan a alguna dirección del almacenamiento válida , se  pueden usar para comprobar si otros elementos son válidos 

23. ¿Qué es una función prototipo?

La función prototipo consiste en declarar la función antes del main si se quiere realizar después del main ,  ya que allí es cuando se invoca esta función para usarla por lo que le indica al compilador que hay una función antes de ingresar al main .

24. ¿Dónde y cómo se guardan las variables que se crean en C++? Explique la diferencia entre
el almacenamiento de variables locales y globales.

La variable local solo se puede acceder dentro de la funcion o main , esta se guarda en el stack y la varible global se puede acceder desde cualquier parte de nuestro código y se guarda de forma segmentada.

25. ¿Investigue qué es un memory leak?

La memoria leak significa memoria de fuga , lo que pasa es que esta memoria nos es liberada y se acumula la información utilizada en el programa haciendo que sea mas lento el proceso y disminuyendo el rendimiento haciendo que se bloquee nuestro programa o nuestro sistema operativo

26. ¿Qué es memoria dinámica?

La memoria dinámica consiste en que al usar los datos requeridos en el código aún cuando el proceso de nuestro código termine los datos suministrados quedarán guardados en la memoria

27. ¿Qué es memoria estática?

La memoria estática solo se almacena en el proceso de nuestro código solamente , cuando se termina este proceso la memoria se libera automaticamente


## Código #1 Conversión de unidades ⚙️

_En este código se le solicita al usuario que escoja el tipo de unidad a convertir sea de longitud, peso, temperatura  luego se le solicita que ingrese la medida de origen y por medio de un menú la unidad a convertir._

### Algunos errores:
-  Error de en la funciones de conversión debido a que no se estaba tilizando "{}" en los diferentes casos del switch lo que permite la elaboración de las diferentes operaciones para convertir las unidades respectivas.

-  La inicilización de indice a CantidadConversiones en el archivo "Funciones1.cpp" anterior a esto no se guardaba la información o daba un error de "-17.7777" debido a que no se estaba guardando en el espacio del arreglo.

-  Al ser bastantes funciones aparecieron diferentes errores de systaxis sobre los nombres de las funciones.

###  Para ejecutar:
```cpp**
   mingw32-make run    
 ```
### Link Doxyfile:

https://conversor-unidades-x.netlify.app

## Código #2 Calculadora de Estadísticas y Búsqueda en un Arreglo ⌨️

_En este código se le solicita al usuario que determine la cantidad de numeros a ingresar , para ingresar cada numero y generar el promedio,suma,valor min,valor max y la búsqueda del número a ingresar por de punteros._

### Algunos errores:
-  Error en la funcion de sumar los números ya que no se estaban usando los repectivos parentesis por lo que nuestro "i" tomaba el valor de la posicion y no del elemento por lo tanto se sumaba el primer elemento y la posición  y se cambió  a *(memoria+i) .
  
-  En la funcion buscar número daba error al no devolver ningún valor ni mesaje , esto se debía a que no habia un return que devolviera el valor indicado o el mensaje de que no había numero alguno .

-  En la función promedio se quería hacer uso de la función "sumaNumeros" por lo que se implementa por medio de un static_cast pero al usar solo la función "promedio" daba errores debido a que se tenia que definir e inicializar la suma  en el main  para tomar dicho valor e ingresarlo por parametros a la función promedio .

###  Para ejecutar:
```cpp**
-  mingw32-make run2     
 ```
### Link Doxyfile1:

https://conversor-unidades-x.netlify.app

### Link Doxyfile2:

https://estadistica-busqueda-numeros-x.netlify.app

## Autor ✒️


* **Kenneth Daniel Vizcaíno Jiménez** - *TAREA 1* - [VIXCA22](https://github.com/VIXCA22)




---