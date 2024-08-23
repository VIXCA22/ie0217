//En la sobre escritura de funciones lo que pasa es que al obtener  la herenia 
//de la clase anterior tambien se puede trasncribir lo y caerle  al recientre atributo 

#include <iostream>
using namespace std ;

class Base {
    public :
        void print() {
            cout << "Base Function" << endl;
        }
};

class Derived : public Base { //se imprimira este 
    public :
    void  print () {
            cout << "Derived Function" << endl;
    }
};

int main (){
    Derived derived1, derived2;
    derived1.print();

    //access print() funtion of the Base Class
    derived2.Base::print(); //le cae encima al valor anterior

    return 0;
}

