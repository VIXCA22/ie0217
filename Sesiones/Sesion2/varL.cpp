#include <iostream>
using namespace std;
//se debe tener en claro por ej: "int age" esto es definir nuestra variable(asigna el espacio en la RAM)  , "int age=15;" esto es inicializarla  
int main(){
//Asignamos estas variables de forma local solo se podra acceder para este proceso 
int a,b,c;
//se proceden a inicializar
a= 10;
b= 20;
c= a+b;

cout << c;

return 0;
}
