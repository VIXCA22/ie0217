#ifndef CANCION_HPP
#define CANCION_HPP


#include <string>
#include<vector>

using namespace std;

// Se define la clase de cancion con sus repectivos atributos privados y se inicializan en publico
class Cancion {
private:
    string nombre;
    string artista;
    string duracion;
    Cancion* siguiente;

public:
    // Inicializacion de los atributos
    Cancion(string nombreValor = "    ", string artistaValor = "    ", string duracionValor = "    ")
        : nombre(nombreValor), artista(artistaValor), duracion(duracionValor), siguiente(nullptr) {}

    // Implementación de los métodos set 
    void setNombre(const string& nuevoNombre) {
        nombre = nuevoNombre;
    }
    
    void setArtista(const string& nuevoArtista) {
        artista = nuevoArtista;
    }

    void setDuracion(const string& nuevaDuracion) {
        duracion = nuevaDuracion;
    }

    void setSiguiente(Cancion* siguienteCancion) {
        siguiente = siguienteCancion;
    }

     // Implementación de los métodos get
    string getNombre() const {
        return nombre;
    }

    string getArtista() const {
        return artista;
    }

    string getDuracion() const {
        return duracion;
    }

    Cancion* getSiguiente() const {
        return siguiente;
    }
};

#endif // CANCION_HPP