//Un puntero es una variable en el que se guarda una direccion de otra variable
//siendo que esta apunte hacia dicha direccion 
//*pointVar con esto podemos acceder a la varible guardada en la direccion en la que se apunta

#include <iostream>
using namespace std;

int main () {
    int var = 5;

    //se declara la variable puntero

    int* pointVar;

    //direccion del espacio de la variable
    pointVar = &var;

    //imprime el valor
    cout << "var = " << var << endl;

    // imprime la direccion de la varible
    cout << "Address of var  (&var) = " << &var << endl
        <<endl;

    //se imprimer el puntero de la info del espacio accesado
    cout << "pointVar = " << pointVar << endl;
    //imprime el contenido de la direccion del puntero

    cout << "Content  of the address pointed to by pointVar (*pointVar) = " << *pointVar << endl; 
    return 0;
}