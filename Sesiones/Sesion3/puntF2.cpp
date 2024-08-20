//paso de referencia usando punteros

#include <iostream>
using namespace std;

//define la funcion a intercabiar numeros
void swap(int* n1, int* n2){
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

int main(){
    //Se inicializa las variables
    int a = 1 , b = 2;

    cout << "Before swapping" << endl ;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    //llama la funcion pasaando la direccion de las variables
    cout << "&a = " << &a << endl;
    cout << "&b = " << &b << endl;

    swap(&a, &b);

    cout << "\nAfter swapping" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}