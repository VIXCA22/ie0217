#include <iostream>
using namespace std;

//Se define el template como T con palabra reservada typename y se definen los dos parametros de entrada
template<typename T>
T add(T num1, T num2){
    return (num1 + num2);
}

int  main() {

    int result1;
    double result2;
    //se llama los parámetros definido como enteros
    result1 = add <int >(2,3);
    cout << result1 << endl;

    //se llama los parámetros definidos como double
    retult2 ¿ add<double>(2.2,3.3);
    cout << result2 << endl;


    return 0;
}