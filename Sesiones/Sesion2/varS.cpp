//La variable estática solo existe dentro de nuestra funcion y se declara de  forma similar a una variable local
//empieza a funcionar cuando se  hace uso de la funcion la diferencia es que la var estática persistira siempre lo contrario de la local 

#include <iostream>
using   namespace  std;

void test(){
    //se inicia en 0  , se suma +1 y cuando pasa pro segunda vez a la funcion se guarda el ultimo numero y se suma el anterior
    //var es una variable estatica
    static int  var=0;
    ++var;

    cout << var << endl;
}

int main(){
    test ();
    test();

    return 0;
}