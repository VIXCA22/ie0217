//El type castin es convertir una variable de tipo entero por ejemplo a double
//convertir las variables pueden perder numeros al convertirlo
#include <iostream>
using namespace std;

int main(){
    //se le asigna el valor entero  a num_int
    int num_int=9;

    //se declara la varible tipo double
    double num_double;

    //se hace la conversion 
    num_double = num_int;

    cout << "num_int = " << num_int << endl;
    cout << "num_double = " << num_double << endl;

    return 0;

}