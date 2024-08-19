//Para sobrecarga de funciones se pueden declarar dos funciones con mismo nombre pero diferente tipo de argumento
//si se utiliza la variable y se utiliza dos tipos de argmentos y se llama  a la funcion el compilador sabra cual usar
#include <iostream> 
using namespace std; 

//funcion tipo flotante y parametro
float absolute(float var){
    if (var < 0.0)
        var = -var;
    return var;
}

//funcion con int parametro
float absolute(int var){
    if (var < 0)
        var = -var;
    return var;
}

int main(){
    //se llama la funcion con tipo int parámetro
    cout << "Valor absoluto de -5 = ",absolute(-5);

    //se llama la funcion con tipo flotante parámetro
    cout << "Valor absoluto de 5.5 = ",absolute(5.5f);

    return 0;
 }
