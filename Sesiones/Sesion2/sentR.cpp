#include <iostream>
using namespace std; //sentencia return
//se declara la funcion 
int add(int a,int b){
    return (a+b);
}
 int main(){
 int sum;
 // se llama la funcion y se retorna los valores 
 sum = add(100,78);
 cout << "100 + 78 ="<< sum << endl;
 return 0;
 }
   