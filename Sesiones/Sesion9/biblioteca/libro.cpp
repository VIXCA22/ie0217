#include <iostream>
#include "libro.hpp"

using namespace std;


Libro::Libro(
    const string& titulo, const string&  autor
) : titulo(titulo), autor(autor) {}

void Libro::mostrarInfo() const{
    cout << "Titulo: " << titulo;
    cout << ", Autor : " << autor << endl;
}