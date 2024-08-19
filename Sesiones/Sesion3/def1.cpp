// El define se utiliza como  varible en el que se planea seguir usando
//por lo que para seguir usando manualmente un valor se hace uso del mismo

#include <iostream>
using namespace std;

#define BOOK_ID_MAX 10

int main (){

    /*El valor de BOOK_ID_MAX es PRE-procesado. */
    cout << "El valor de Book ID Max es: " << BOOK_ID_MAX << endl;

    return 0;
}