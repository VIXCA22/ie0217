#include <iostream>
using namespace std;
//se usa sobre carga de funciones con diferentes parametros muy similar al ej anterior
//pero con mas parametros
// funcion de dos parametros
void  display(int var1,double var2){
    cout << "Numero entero: " << var1;
    cout << "y numero decimal " << var2 << endl;
}

//funcion tipo double con un solo parametro
void display(double var){
    cout << "Numero decimal: " << var << endl;
}

//funcion tipo entero con un solo parametro
void display(int var ){
    cout << "Numero entero" << var << endl;
}

int main () {

    int a=5;
    double b=5.5;

    //llamando funciones con parametro entero
    display(a);

    //llamando funciones con parametro decimal
    display(b);

    //llamando funciones con parametro decimal y entero
    display(a,b);

    return 0;
}