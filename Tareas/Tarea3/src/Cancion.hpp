#ifndef CANCION_HPP
#define CANCION_HPP

#include <string>
#include <vector>

using namespace std;

/**
 * @brief Clase que representa una Canción en una lista enlazada.
 * 
 * @details
 * Esta clase tiene atributos de una canción, como lo es  el nombre, artista y  duración.
 * Y permite enlazar la canciones usando el puntero `siguiente`.
 */
class Cancion {
private:
    string nombre; 
    string artista; 
    string duracion; 
    Cancion* siguiente; 

public:
    /**
     * @brief Constructor de la clase Cancion.
     * 
     * @param nombreValor Nombre de la canción.
     * @param artistaValor Artista de la canción.
     * @param duracionValor Duración de la canción.
     * 
     * @details
     * El constructor inicializa los atributos de la canción. El puntero `siguiente` se inicializa como  `nullptr`.
     */
    Cancion(string nombreValor = "    ", string artistaValor = "    ", string duracionValor = "    ")
        : nombre(nombreValor), artista(artistaValor), duracion(duracionValor), siguiente(nullptr) {}

    /**
     * @brief Asigna el nombre de la canción.
     * 
     * @param nuevoNombre Nuevo nombre de la canción.
     */
    void setNombre(const string& nuevoNombre) {
        nombre = nuevoNombre;
    }

    /**
     * @brief Asigna el nombre del artista.
     * 
     * @param nuevoArtista Nuevo nombre del artista.
     */
    void setArtista(const string& nuevoArtista) {
        artista = nuevoArtista;
    }

    /**
     * @brief Asigna la duración de la canción.
     * 
     * @param nuevaDuracion Nueva duración de la canción.
     */
    void setDuracion(const string& nuevaDuracion) {
        duracion = nuevaDuracion;
    }

    /**
     * @brief Asigna el puntero a la siguiente canción.
     * 
     * @param siguienteCancion Puntero a la siguiente canción.
     */
    void setSiguiente(Cancion* siguienteCancion) {
        siguiente = siguienteCancion;
    }

    /**
     * @brief Obtiene el nombre de la canción.
     * 
     * @return string Nombre de la canción.
     */
    string getNombre() const {
        return nombre;
    }

    /**
     * @brief Obtiene el nombre del artista.
     * 
     * @return string Nombre del artista.
     */
    string getArtista() const {
        return artista;
    }

    /**
     * @brief Obtiene la duración de la canción.
     * 
     * @return string Duración de la canción.
     */
    string getDuracion() const {
        return duracion;
    }

    /**
     * @brief Obtiene el puntero a la siguiente canción.
     * 
     * @return Cancion* puntero a la siguiente canción.
     */
    Cancion* getSiguiente() const {
        return siguiente;
    }
};

#endif // CANCION_HPP
