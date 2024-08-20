//paso de referencia sin punteros
#include <iostream>
using namespace std;

//funcion de intercambio de valores 
void swap(int &n1, int &n2){
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
}

int main(){
    //se incializan las variables
    int a = 1, b = 2;

    cout << "Before swapping" << endl;
    cout << " a = " << a << endl;
    cout << " b = " << b << endl;
    
    //llama a la funcion para intercambiar numeros
    swap(a, b);

    cout << "\nAfter swapping" << endl;
    cout << " a = " << a << endl;
    cout << " b = " << b << endl;

    return 0;

}