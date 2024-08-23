//La herencia se puede decir que es un molde de otro molde
//en el cual se le asocia mas caracteristicas aparte de las que tenia  anteriormente

#include <iostream>
using  namespace std;

class Animal {
    public:
    void eat(){
        cout << "I can eat! " << endl;
    }

    void sleep() {
        cout << "I can sleep!" << endl;
    }
};

class Dog : public  Animal {
    public:
      void bark() {
        cout << "I can bark ! Woof woof!!" << endl;
     }
};

int main (){
    Dog dog1;

    //calling members of the base class
    dog1.eat();
    dog1.sleep();

    //calling members of the derived class 
    dog1.bark();

    return 0;
}