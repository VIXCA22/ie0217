#include "ListaEnlazada.hpp"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    ListaEnlazada lista;
    int opcion, opcion2;
    string nombre, artista, duracion;
    string nuevoNombre;

    // Se inicializan algunos objetos en los nodos con información prestablecida
    lista.insertarFinal(Cancion("Time in A Bottle", "Jim Croce", "2:26"));
    lista.insertarFinal(Cancion("Golden Hour", "JVKE", "3:51"));
    lista.insertarFinal(Cancion("Lose Control", "Teddy Swims", "3:29"));

    do {
        cout << "1. Insertar una nueva canción\n";
        cout << "2. Eliminar una canción\n";
        cout << "3. Modificar los datos de una canción\n";
        cout << "4. Imprimir lista de canciones\n";
        cout << "5. Salir del programa\n";
        cout << "Seleccione una opción: ";
        cin >> opcion;

        //Se invoca cada funcione correspondiente
        switch (opcion) {
            case 1: //Se obtiene la informacion con getline guardandose cada atributo correspondiente
                cout << "1. Insertar canción al inicio\n";
                cout << "2. Insertar canción en la mitad\n";
                cout << "3. Insertar canción al final\n";
                cout << "Seleccione una opción: ";
                cin >> opcion2;
                cout << "Ingrese el nombre de la canción: ";
                cin.ignore(); //limpia el buffer
                getline(cin, nombre);
                cout << "Ingrese el artista de la canción: ";
                getline(cin, artista);
                cout << "Ingrese la duración de la canción: ";
                getline(cin, duracion);

                switch (opcion2) {
                    case 1:
                        lista.insertarInicio(Cancion(nombre, artista, duracion));
                        break;
                    case 2:
                        lista.insertarMitad(Cancion(nombre, artista, duracion));
                        break;
                    case 3:
                        lista.insertarFinal(Cancion(nombre, artista, duracion));
                        break;
                    default:
                        cout << "Opción inválida.\n";
                }
                break;
            case 2:
                cout << "Ingrese el nombre de la canción a eliminar: ";
                cin.ignore();
                getline(cin,nombre);
                lista.eliminarCancion(nombre);
                break;
            case 3:
                cout << "Ingrese el nombre de la canción a modificar: ";
                cin.ignore();
                getline(cin, nombre);
                cout << "Ingrese el nuevo nombre de la canción: ";
                getline(cin, nuevoNombre);
                cout << "Ingrese el nuevo artista de la canción: ";
                getline(cin, artista);
                cout << "Ingrese la nueva duración de la canción: ";
                getline(cin, duracion);
                lista.modificarCancion(nombre, Cancion(nuevoNombre, artista, duracion));
                break;
            case 4:
                lista.imprimir();
                break;
            case 5:
                cout << "Saliendo...\n";
                break;
            default:
                cout << "Opción inválida.\n";
        }
    } while (opcion != 5);

    return 0;
}
