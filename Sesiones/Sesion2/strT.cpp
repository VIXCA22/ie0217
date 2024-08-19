//las estructuras son muy utiles al usar objetos para no estar repitiendo sus caracteristicas ahorrando muchas lineas de codigo

#include <iostream>
#include <string>
#include <string.h>

using  namespace std;

struct Libros{
    char titulo[50];
    char autor[50];
    char tema[100];
    int libro_id;
};

int main(){
    struct Libros Libro1; //Se declara libro 1 y 2 de la estructura libros
    struct Libros Libro2;

    //especificaciones para el libro 1
    strcpy(Libro1.titulo, "Learn C++ Programming");
    strcpy(Libro1.autor, "Chand Miyan");
    strcpy(Libro1.tema, " C++ Programming");
    Libro1.libro_id=655234;

    //especificaciones para el libro 2
    strcpy(Libro2.titulo, "Telecom Billing");
    strcpy(Libro2.autor, "Yakit Singha");
    strcpy(Libro2.tema, " Telecom");
    Libro2.libro_id=4234525;

    //Imprime info del libro 1

    cout << "Titulo libro 1: " << Libro1.titulo << endl;
    cout << "Autor libro 1: " << Libro1.autor << endl;
    cout << "Tema libro 1: " << Libro1.tema << endl;
    cout << "Id libro 1: " << Libro1.libro_id << endl;

    //Imprime info del libro 1

    cout << "Titulo libro 2: " << Libro2.titulo << endl;
    cout << "Autor libro 2: " << Libro2.autor << endl;
    cout << "Tema libro 2: " << Libro2.tema << endl;
    cout << "Id libro 2: " << Libro2.libro_id << endl;

    return 0;
}



