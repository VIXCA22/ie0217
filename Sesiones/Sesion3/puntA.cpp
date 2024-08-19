// con el & podremos acceder donde se localizan guardadas nuestras variables
//en la memoria 
#include <iostream>
using namespace std;

int main (){
    //declare variables
    int var1 = 3;
    int var2 =24;
    int var3 =17;

    //se imprime la dereccion de las varibles

    cout << "Address of var1 : " << &var1 << endl;

    cout << "Address of var2 : " << &var2 << endl;

    cout << "Address of var3 : " << &var3 << endl;
}