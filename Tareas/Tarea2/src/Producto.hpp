#ifndef PRODUCTO_HPP
#define PRODUCTO_HPP
//Se defiene  el archivo cabecera de producto

#include <iostream>
#include <string>

using namespace std;

//Se crea la clase producto con dos especificadores de acceso tales como protected para la clase base
//público  para poder acceder por ejemplo al especificador protegido desde sus clases derivadas y la parte pública para acceder desde cualquier sitio
class Producto {
   protected://Se definen las varibles propias de la clase
        string nombre;
        double precio;
    public:
        //Se inicializa el contructor con las variables anteriores 
        Producto(const string &nombre, double precio);

        virtual ~Producto() = default; // Esto libera las varibles para evitar la fuga de información

        void setPrecio(double precio); //Se definen los setters y getters de cada variable de la clase
        double getPrecio() const;

        void setNombre(const string &nombre);
        string getNombre() const;
};       

//Clase derivada de Producto solamente cambia el acceso a privado  debido a que no es una base derivada 
class ProductoDigital : public Producto {
    private: //Se definen las varibles propias de la clase
        int id;
        string tamano;
    public://Se inicializa el contructor con las variables anteriores  y se heredan las de la clase base
        ProductoDigital(const string &nombre, int id, double precio, const string &tamano);
        //Se definen los setters y getters de cada variable de la clase
        void setId(int id);
        int getId() const;

        void setTamano(const string &tamano);
        string getTamano() const;
};
//Clase derivada de Producto solamente cambia el acceso a privado  debido a que no es una base derivada 
class ProductoFisico : public Producto {
    private:
        double peso;
    public://Se inicializa el contructor con las variables anteriores y se heredan las de la clase base
        ProductoFisico(const string &nombre, double precio, double peso);
        
        void setPeso(double peso);
        double getPeso() const;
};

#endif //PRODUCTO_HPP
