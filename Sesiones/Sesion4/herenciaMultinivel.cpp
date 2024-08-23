//En la herecnia multinivel se puede observar un tipo domino en el 
//que se da herencia a las clases  sucesivamente 

#include <iostream>
using namespace std;

class A{
    public:
        void display() {
            cout << "Base class content. ";
        }
};

class B : public A {};

class C: public B {};

int main() {
    C obj;
    obj.display();
    return 0;
}