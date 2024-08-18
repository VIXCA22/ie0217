#include <iostream>
//Utilización de la estructura de control case en este caso se escoge la opcion 1
int main() {
    std::cout << "Hola Mundo ,  estudiantes de  IE0217!\n" ;
     
    int var1 = 1; 
    int var2 = 2;
    int var3 = 3;
    
    switch (var1)
    {
        case 1:
            std::cout << "Case 1!\n";
            break;
        case 2:
            std::cout << "Case 2!\n";
            break;
         case 3:
            std::cout << "Case 3!\n";
            break;
        
        default:
            break;
    }

    
  return 0;  
}   