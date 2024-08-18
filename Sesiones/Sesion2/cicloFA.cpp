#include <iostream>
using namespace std;
 //Utilizacion de bucle for  utilizando un arreglo donde n es el numero guardado en el arreglo y num_array es el numero max de espacios usados
int main (){
    int num_array[] = {1,2,3,4,5,6,7,8,9,10};
    for (int n:num_array){
        cout << n << "";
    } 
    return 0;
}