#include <iostream>
#include <stdexcept>

using namespace std;

//Se da un ejemplo de un código sin excepciones lo que indica
//que no es robusto

int main() {
    int numerador, denominador, resultado ;

    cout << "Ingrese el numerador";
    cin >> numerador;

    cout << "Ingrese el numerador";
    cin >> denominador;

 
    resultado = numerador / denominador;
    cout << "El resultado es : " << resultado << endl;
   
    return 0;
}