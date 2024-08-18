#include <iostream>
using namespace std;
 //Utilizacion de argumentos en una funcion  donde primero se define el tipo de retorno de la funcion en este caso void que es vacia por lo que no pide alguna
 //entrada , despues el nombre de la funcion y por ultimo los parametros

void displayNum(int n1,float n2){
    cout << "El numero entero es " << n1;
    cout << "El numero double  es" << n2;
}

int main (){
    int num1 = 5;
    double num2 = 5.5;
    //se llama a la funcion 
    displayNum(num1,num2);
        
  return 0;
}   