//Los punteros y arreglos funcionan de forma que primero se especifica el tipo de arreglo de estructura que se tomara sea int , char etc.
//los punteros funcionan de igual forma secuencialmente a la posicion en la se guarda cada dato en el arreglo

#include <iostream>
using namespace std;

int main(){
    float arr[3];

    //declara la varible de puntero
    float *ptr;

    cout << "Dislaying address using arrays: " << endl;

    //se usa el ciclo para imprimir las direcciones de todos los elementos del arreglo
    for (int i=0; i<3; ++i){
        cout << "&arr["<< i <<"] = " << &arr[i] << endl;
    }

    // ptr = &arr[0]
    ptr = arr;
    
    cout << arr;

    cout<<"\nDisplaying address using pointers: "<< endl;

    //se usa el ciclo para imprimir las direcciones de todos los elementos del arreglo
    //usando la notacion de puntero
    for(int i=0; i<3; ++i){
        cout << "ptr + " << i << " = "<<ptr + i << endl;

    }
    return 0;
}