#include <iostream>
//Utilización de la estructura de control case en este caso se procede a oprimir la letra alt+flecha arriba para que si se escoge la opcion 2 o 3 nos
//ejecute las instrucciones dadas en el caso en este caso la opción 3

int main() {
    std::cout << "Hola Mundo ,  estudiantes de  IE0217!\n" ;
     
    int var1 = 3; 
    //int var2 = 2;
    //int var3 = 3;
    
    switch (var1)
    {
        case 1:
            std::cout << "Case 1!\n";
            break;
        case 2:
        case 3:
            std::cout << "Case Final!\n";
            break;
    
        default:
            break;
    }

    
  return 0;  
}   