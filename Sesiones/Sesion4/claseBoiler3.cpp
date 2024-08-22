//En este codigo se hará la explicacion de la estructura
//de la clase 

#include <iostream>
using namespace std;

class Molde {

    public:
    double largo;
    double ancho;
    double alto;

    Molde(double largo_p, double ancho_p, double alto_p) : largo(largo_p), ancho(ancho_p),alto(alto_p){}


    double calcularArea(){
        return largo * ancho;
    }

    double  calcularVolumen(){
        return largo * ancho * alto;
    }
};

int main(){
    /*Instanciar  un objeto llamarado pared basado en la clase Molde*/
    Molde pared(10.0,20.0,35.0);

    /*Calcular y desplegar el area y volumen.*/
    cout << "Area = " <<pared.calcularArea() << endl;
    cout << "Volumen = " << pared.calcularVolumen() << endl;

    return 0;
}