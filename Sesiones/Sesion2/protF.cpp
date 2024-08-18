//se puede usar la funcion despues del main
//se delcara la funcion prototipo antes del main
#include <iostream> 
using namespace std; 
//se declara la funcion 
int add(int,int);

int main(){
    int sum;
    // se llama la funcion y se retorna los valores 
    sum = add(100,78);
    cout << "100 + 78 ="<< sum << endl;
    return 0;
 }
   //se define la funcion
int add (int a, int b){
    return (a + b);
}