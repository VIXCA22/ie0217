#include <iostream>
//Utilización de anidaciones de if similar a case
int main() {
   int num;

    std::cout << "Ingrese un entero: ";
    std::cin >> num;
  //si la condicion es verdadera entra aqui  
    if(num!=0){
        //esta es una anidacion de if ya que si entra en la primera condición llega a este otro if para verificar su condicion sea cierta o falsa
        if (num > 0){
            std::cout << "El numero es positivo" ;
        }
        //de lo contrario
        else {
          std::cout << "El numero es negativo" ;      
        }

    } 
    // si en nuestro primer if  no se  cumple la condicion entonces
    else {
     std::cout << "El numero es 0 y no es ni positivo ni negativo" ;
    }
    std::cout << "Esta linea siempre se imprime" ;
  return 0;  
}   