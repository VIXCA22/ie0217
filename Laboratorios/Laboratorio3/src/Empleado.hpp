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

        virtual ~Empleado() = default; //limpiar variables

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

};       





#endif //EMPLEADO_HPP