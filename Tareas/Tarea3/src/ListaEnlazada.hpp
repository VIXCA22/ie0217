/**
 * @brief Definición de las funciones para  poder manipular la lista enlazada de canciones.
 *
 * Las funciones permiten insertar, eliminar, modificar e imprimir  las canciones de la lista enlazada.
 */
class ListaEnlazada {
private:
    Nodo* cabeza; ///< Puntero al primer nodo de la lista.

public:

    ListaEnlazada() : cabeza(nullptr) {}

    /**
     * @brief Definición para incertar una canción en una posición específica de la lista.
     * 
     * Este método permite insertar una canción en el inicio
     * @param nuevaCancion La canción que se va a insertar.
     */
    void insertarInicio(const Cancion& nuevaCancion);

    /**
     * @brief Definición para incertar canción en la mitad de la lista.
     * 
     * Definición para incertar canción a la mitad de la lista .
     * 
     */
    void insertarMitad(const Cancion& nuevaCancion);

    /**
     * @brief Inserta una nueva canción al final de la lista.
     * 
     */
    void insertarFinal(const Cancion& nuevaCancion);

    /**
     * @brief Elimina una canción de la lista dado su nombre.
     * @param nombre El nombre de la canción a eliminar.
     */
    void eliminarCancion(const string& nombre);

    /**
     * @brief Modifica una canción en la lista dado su nombre.
     * @param nombre El nombre de la canción a modificar.
     * @param nuevaCancion La nueva información de la canción.
     */
    void modificarCancion(const string& nombre, const Cancion& nuevaCancion);

    /**
     * @brief Imprime la lista de canciones.
     */
    void imprimir() const;
};
