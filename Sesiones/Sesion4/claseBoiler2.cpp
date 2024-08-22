//En este codigo se hará la explicacion de la estructura
//de la clase 

#include <iostream>
using namespace std;

class Molde {
    public:
        double largo;
        double ancho;
        double alto;
        
          /*otra forma:  Molde(double largo_p,double ancho_p, double alto_p){
            largo = largo_p;
            ancho = ancho_p;
            alto = alto_p
        */
        Molde(double largo_p, double ancho_p, double alto_p) : largo(largo_p), ancho(ancho_p),alto(alto_p){}
           
};

int main(){
    int variable_entera;
    /*Instanciar  un objeto llamarado pared basado en la clase Molde*/
    Molde pared(10.0,20.0,35.0);

    cout << pared.largo << endl;
    pared.largo = 20.0;
    cout << pared.largo << endl;
    pared.ancho = 13.2;
    pared.alto = 23.4;

    return 0;
}
