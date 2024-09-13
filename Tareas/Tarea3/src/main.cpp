/**
 * @brief Programa principal para la gestión de un árbol binario de búsqueda.
 * 
 * Este programa permite al usuario:
 * - Insertar un nodo en el árbol.
 * - Eliminar un nodo del árbol.
 * - Imprimir el árbol en orden.
 * - Calcular la altura del árbol.
 * - Verificar si el árbol está balanceado.
 * - Salir del programa.
 * 
 * Se inicializan algunos valores del nodo del árbol.
 */
int main() {
    ArbolBinarioBusqueda arbol;

    // Inicialización del árbol con algunos nodos
    NodoArbol* raiz = new NodoArbol(15);
    raiz->izquierdo = new NodoArbol(10);
    raiz->derecho = new NodoArbol(20);
    raiz->derecho->derecho = new NodoArbol(25);
    raiz->derecho->izquierdo = new NodoArbol(17);
    raiz->izquierdo->izquierdo = new NodoArbol(8);  
    raiz->izquierdo->derecho = new NodoArbol(12);   

    arbol.establecerRaiz(raiz);
    // Se hace esta utilización debido a que se debe manipular manualmente nuestro árbol para introducir los nodos con valores preestablecidos 

    int opcion, valor;
    do {
        cout << "1. Insertar un nodo\n";
        cout << "2. Eliminar un nodo\n";
        cout << "3. Imprimir un árbol\n";
        cout << "4. Calcular la altura del árbol\n";
        cout << "5. Verificar si el árbol está balanceado\n";
        cout << "6. Salir del programa\n";
        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingrese un valor: ";
                cin >> valor;
                arbol.insertar(valor);
                break;
            case 2:
                cout << "Ingrese el valor a eliminar: ";
                cin >> valor;
                arbol.eliminar(valor);
                break;
            case 3:
                cout << "Árbol Binario:" << endl;
                arbol.inOrden();
                break;
            case 4:
                cout << "Altura del árbol: " << arbol.altura() << endl;
                break;
            case 5:
                if (arbol.estaBalanceado()) {
                    cout << "El árbol está balanceado.\n";
                } else {
                    cout << "El árbol no está balanceado.\n";
                }
                break;
            case 6:
                cout << "Saliendo...\n";
                break;
            default:
                cout << "Opción inválida.\n";
        }
    } while (opcion != 6);

    return 0;
}
