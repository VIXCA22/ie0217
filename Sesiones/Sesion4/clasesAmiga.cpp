/*Las clases amigas restringen el acceso a miembros privados desde fuera de la clase
solo desde derivadas se pueden accseder además nos permite acceder a funciones miembro fuera de la clase */

#include <iostream>
using namespace std;

class Distance {
    private:
        int meter;
    
    //friend funtion 
    friend int addFive(Distance);

    public:
        Distance() : meter(0) {}
};

int addFive(Distance d){
    //accessing private members from the friend function
    d.meter +=5;
    return d.meter;
}

int main(){
    Distance D;
    cout << "Distance: " << addFive(D);
    return 0;
}
