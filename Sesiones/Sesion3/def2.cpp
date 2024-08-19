#include <iostream>
using namespace std;

#define BOOK_ID_MAX 10
//cabe destacar si se le asigna un numero a la primera enum va a sumar 
//ese nuemero si se pidiera otra enum
enum {
    CASA_BADILLA,
    CASA_ALVARADO,
    CASA_SOLANO,
    CASA_MAX
}casas_t;

int main (){
    //el valor  de book-id-max es pre- procesado
    cout << "El valor de Book ID es : " << BOOK_ID_MAX << endl;
    cout << "La cantidad de casas en el condominio es: " << CASA_MAX << endl;

    return 0;
}