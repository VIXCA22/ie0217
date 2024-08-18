#include <iostream>
//Utilización del operador ternario en vez de un if
int main() {
    std::cout << "Hola Mundo ,  estudiantes de  IE0217!\n" ;
     
    int var1 = 0; 
    int var2;
    
    //se compara var1 y si esta es igual a 0 se imprime 15 de otro modo se  imprimirá  27

    var2= (var1 == 0) ? 15: 27;

    std::cout << "var2: \n" <<var2 << "";
    
  return 0;  
}   