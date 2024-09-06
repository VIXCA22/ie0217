# Tarea #2

_La tarea 2 se basa en responder una serie de preguntas y resolver un reto de programación en C++ enfocado en clases y objetos_

## Cuestionario🚀

1. ¿Qué es la programación orientada a objetos y cuáles son sus principios fundamentales?

La programación orientada a objetos se puede tratar como un molde conformado por la clase, en el que este molde tiene cualidades,  estos son los atributos y por último  este hace acciones y esto vendría siendo los métodos.

Sus principios son: Encapsulamiento,Polimorfismo,Herencia,Abstracción

 



2. Mencione y explique al menos tres problemas clásicos de programación que POO es capaz de resolver.

- Programas Grandes: Ayuda a reducir y manejar la complejidad del código en  clases y objetos más sencillos.

 - Actualizar Código: Se hace mas fácil su mantenimiento.
 
 -Inseguridad de datos: Hace mas seguro el código aislando objetos y administrando los atributos y métodos.

3. Describa el concepto de polimorfismo y brinde un ejemplo de su implementación en POO.

El polimorfismo es la capacidad de un objeto para tomar diferentes formas siendo posible representar variedad de objetos con diferentes comportamientos y existen dos tipos : Estático y Dinámico.

 ```cpp**
#ifndef EMPLEADO_HPP
#define EMPLEADO_HPP

#include <iostream>
#include <string>

using namespace std;

class Empleado {
    protected:
        string nombre;
        int id;
        double salario;
    
    public:
        Empleado(const string &nombre, int id, double salario);

  

       

};       

#endif //EMPLEADO_HPP
 ```
 
4. Describa el concepto de abstracción y brinde un ejemplo de su implementación en POO.

El concepto de abstracción es para simplificar un sistema complejo de tal modo que el programador se centre solo en el objeto sin distracciones de como funciona.

 ```cpp**
 
       virtual ~Empleado() = default;  
       //limpiar variables
    
    void setNombre(const string &nombre);
    
        string getNombre() const; //const no altera el objeto como tal 

        void setId(int id);
        int getId() const;

        void setSalario(double salario);
        virtual double getSalario() const;  //virtual que no tiene implementación y se debe imponer uno

        friend bool  compararSalario(const Empleado &e1, const Empleado &e2);

        friend ostream &operator<<(ostream &os, const Empleado &empleado);

        virtual void mostrarInformacion() const = 0; //=0 metodo virtual puro , no tendremos en el cpp este metodo sigue en domino y cambia la clase a abstracta
        //es almenos una clase con un metodo virtual y no se puede crear un objeto en esta clase(es para que una clase use esta clase)
 ```
5. Describa el concepto de encapsulamiento y brinde un ejemplo de su implementación en POO.

Son datos o funciones agrupados que operan en una clase ocultando sus datos y exponiendo los necesarios según corresponda.

 ```cpp**
#include <iostream>

class Base{
    private: 
        int primera;
    protected:
        int segunda;
    public:
        int tercera;
        Base() : primera(1), segunda(2), tercera(3) {} 
};

```

6. Defina los conceptos de clase, objeto, método y atributo de la programación orientada a
objetos y brinde un ejemplo de la vida real (No de programación) que los describa
intuitivamente

Clase: Es como una plantilla que está conformado por atributos que son definidos y métodos.

(Un molde de galletas.)

Objeto: Es una instancia que tiene datos.

(Mezcla de la galleta.)

Método: Comportamiento que se realiza con el objeto .

(Se come la galleta)

Atributo: Contiene los datos que caracterizan al objeto o clase.

(Son las chispitas de las galletas de chocolate, menta, etc.)

7. Mencione qué elementos tiene el “boilerplate” de una clase y explique cada uno

 - Declaracion de las clases: Es la que que define la clase con todos los elementos en el que está compuesta(atributos,métodos).
 - Modificadores de Acceso:Permiten acceder a los datos según su función (private,public,protected).
 - Atributos: Son los datos o caracteristicas del objeto(int edad,string nombre , etc).
 - Constructores : Sirven para inicializar los objetos de la clase(parametrizado,por defecto,copia).
 - Destructor: Libera la memoria en el que se ha guardado anteriormente el objeto.
 - Métodos:Comportamiento o acciones del objeto en la clase.
 - Funciones(const):Métodos que no modifican el estado del objeto(int objetnerCedula() const).
 - Sobrecarga de Operadores: Define o redefine la forma en que los objetos interactuan con la clase(bool operator).
 - Función Clase amiga: Tienen acceso a la información de los miembros privados o protegidos de la clase.(friend ostream&).

8. ¿Qué es el constructor de una clase? ¿Para qué sirve?

Constructores : Sirven para inicializar los objetos de la clase(parametrizado,por defecto,copia). Puede asignar atributos del objeto.

9. ¿Qué es instanciar un objeto en el contexto de POO? ¿Para qué sirve?

Cuando se les asigna atributos a los objetos por medio de los constructores.

Sirve para dar ciertas caracteristicas al objeto creado.

10. ¿Cuáles son las diferencias entre los especificadores de acceso públicos,privados y protegidos?

Públicos: Se puede acceder a la información de cualquier miembro.

Privados: No se puede acceder a la información fuera de la clase a menos que sea una clase amiga.

Protegidos: Solo se pueden acceder dentro de la clase o clases derivadas o clases amigas.

11. ¿Qué es el destructor de una clase y para qué aplicaciones es conveniente usarlo?

El destructor de una clase se encarga de liberar la información recolectada en el objeto destruyendolo de algún modo.

12. Explique qué es la sobrecarga de operadores y proporcione un ejemplo de cómo se implementa en C++.

La sobrecarga de operadores definen o redefinen la forma en que trabajan los objetos de la clase.

13. ¿Qué es la herencia en POO?

La herencia permite que otras clases hereden los atributos o métodos en otras clases para reutlizar código y hacerlo mas eficiente.


14. Mencione las diferencias entre la herencia pública, privada o protegida de una clase, qué sucede al heredar cada tipo

Herencia publica: Miembros visibles por la clase.

Herencia Protegida: Los miembros publicos se convierten en protected por lo que se ocultan de la interfaz pública de la clase original.

Herencia Privada: Todos los miembros se vuelven private ocultando por completo la visibilidad de la clase original

15. Observe el siguiente fragmento de código: Considerando que existen seis variables en el código (primera, segunda, tercera, cuarta,quinta y sexta), desde el main del programa:

● A cuáles de estas variables puede acceder un objeto instanciado de la clase Base, a
cuales no puede acceder y por qué.

● A cuáles de estas variables puede acceder un objeto instanciado de la clase Derived, a
cuales no puede acceder y por qué.

 ```cpp**
#include <iostream>

class Base{
    private: 
        int primera;
    protected:
        int segunda;
    public:
        int tercera;
        Base() : primera(1), segunda(2), tercera(3) {} 
};

class Derived: public Base {
    private:
        int cuarta;
    protected: 
        int quinta;
    public:
        int sexta;
        Derived() : cuarta(4),quinta(5), sexta(6) {}
};
 ```
En la clase base solo se podrá acceder a segunda y tercera ya que se inicializa en public y las variables a las que se pueden accesar desde la clase derivadad son todas menos la privada que es primera, demodo que no se puede accesar a ella fuera de la clase base y las demas sí porque es derida permitiendo el acceso a protected y pública también .
16. ¿Qué es una clase amiga y para qué se usa? ¿Cúal es la manera de definirla?

La clase amiga es una clase en donde se  puede acceder a información de los miembros privados y protegidos sin que exponga dicha información. Se define `friend class NombreDeLaClase;`

17. ¿Qué es una función amiga y para qué se usa? ¿Cúal es la manera de definirla?

Una función amiga tiene acceso  desde el exterior a los miembros privados y protegidos de la clase por lo que se usa para acceder especificamente a información interna para la funcionalidad del método . Se defien `friend` 


18. Explique la importancia de los métodos virtuales en C++ y cómo se utilizan en la implementación de polimorfismo

La importancia es debido a que se definen en la clase y se pueden sobrescribir en la clase derivada y en la implementación del polimorfismo se utiliza de tal modo que los métodos actúen de diversas formas permitiendo que sistemas flexibles y objetos adaptados al tiempo de ejecución.


## Código 

_Nuestro código se trata sobre hacer un sistema de supermercado en donde se almacenan los productos y los clientes con sus respectivos atributos además del cálculo total de los productos que el cliente compre o añada al carrito dependiendo del cliente se hará un decuento._

### Algunos errores:
 - Algunos errores como dejar las clases bases como privadas en lugar de protegidas por lo que daba un error al no poder acceder a la clase , por lo que lo cambié por protected para que las clases derivadas pudieran acceder.
 - Error de jump to case label el cual se corrigio de forma que se la clase tipo puntero del cliente quedara antes del segundo switch.
 - Error con la entrada de los contructores debido a una cofusión de atributos al no tomar en cuenta los atributos heredados en la inicialización del contructor cliente.
 - En calcularTotal el vector que se había definido estaba definido como int y se inicializó como double para el manejo de decimales .
 - Error en la parte de Tienda como clase , no necesitaba atributos al contructor ya que solo se tomaban los datos de los vectores de las clases cliente y producto.
###  Para ejecutar:
```cpp**
   mingw32-make run
 ```
### Link Doxyfile:

supermercado-x-38bf47.netlify.app

## Autor ✒️


* **Kenneth Daniel Vizcaíno Jiménez** - *TAREA 2* - [VIXCA22](https://github.com/VIXCA22)




---