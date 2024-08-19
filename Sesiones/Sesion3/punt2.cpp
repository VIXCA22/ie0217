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
    cout << "*pointerVar =  " << *pointVar << endl
        <<endl;

   
    cout << "Changing value of var to 7: " << endl;
    
    //cambio del valor var a 7
    var = 7;

    //imp var 
    cout << "var = " << var << endl;

    //imprime *pointVar
    cout << "Changing value of *pointVar to 16 : " << endl;

    //cambio del valro a 16

    *pointVar =16;

    //imp var
    cout << "var " << var << endl;

    //imp *pointVar 
    cout << "*pointVar = " << *pointVar << endl;
    return 0;
}