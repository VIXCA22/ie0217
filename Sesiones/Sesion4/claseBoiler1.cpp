//En este codigo se hará la explicacion de la estructura
//de la clase 

#include <iostream>
using namespace std;

class Molde {
    public:
        double largo;
        double ancho;
        double alto;

        Molde(){
            cout << "Instanciando Molde" << endl;
            largo = 15;
            ancho = 12;
            alto = 21;
        }    

};

int main(){
    int variable_entera;
    /*Instanciar  un objeto llamarado pared basado en la clase Molde*/
    Molde pared;

    cout << pared.largo << endl;
    pared.largo = 20.0;
    cout << pared.largo << endl;
    pared.ancho = 13.2;
    pared.alto = 23.4;

    return 0;
}
