//En este codigo se hará la explicacion de la estructura
//de la clase 

#include <iostream>
using namespace std;

class Molde {

    public:
    double largo;
    double ancho;
    double altura;

    Molde(){
        cout << "Esto se ejecuta en cada instanciacion" << endl;
        cout << "Iniciando un objeto de la clase Room" << endl;
    }

    double calcularArea(){
        return largo * ancho;
    }

    double  calcularVolumen(){
        return largo * ancho * altura;
    }
};

int main(){
    /*Instanciar  un objeto llamarado pared basado en la clase Molde*/
    Molde pared;

    /*Asignar un objeto pared.*/
    pared.largo = 400.5;
    pared.ancho = 20.8;
    pared.altura = 315.2;

    /*Calcular y desplegar el area y volumen.*/
    cout << "Area = " <<pared.calcularArea() << endl;
    cout << "Volumen" << pared.calcularVolumen() << endl;

    return 0;
}