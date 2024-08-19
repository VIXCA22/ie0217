#include <iostream> // nuestro main encabezara las otras programaciones, cabe recalcar que se necesitan de declarar los otros archivos por medio del sum.hpp
#include "sum.hpp"
using namespace std;

int main (){
    int num1 = 5;
    int num2 = 3;
    int result = sum(num1,num2);

    cout << "El resultado de " << num1 << " + " << num2 << "es igual a: " << result << endl;

    return 0;
}