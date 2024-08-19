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



