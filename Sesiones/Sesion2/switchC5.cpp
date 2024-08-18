#include <iostream>
//Utilización de la estructura de control case en este caso se procede a explicar el caso default en el que si no es se digita ninguno de los valores 
//prestablecidos en los cases cae en este ejecutando las isntrucciones respectivas
int main() {
    std::cout << "Hola Mundo ,  estudiantes de  IE0217!\n" ;
     
    int var1 = 56; 
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
            std::cout << "Case default!\n";
            break;
    }

    
  return 0;  
}   