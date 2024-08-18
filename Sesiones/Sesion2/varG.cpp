#include <iostream>
using namespace std;

//Definimos g como global para poder acceder en otra funcion o proceso a la informacion guardada en la variable
int g;

int main(){
//estas otras varibles se definirán como locales  ya que solo se usarán en dicho proceso
int a,b;

//se incializan 
a=10;
b=20;
//no se debe inicializar la variable g porque se inicializó anteriormente
g=a+b ;

cout << g;

return 0;
}