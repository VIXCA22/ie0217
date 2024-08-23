//Las funciones virtuales se esperan que de la clase base  redifinir en la clases derivadas si o si de lo contrario da error

class Base {
    public:
        void print(){
            //code
        }
};

class Derived : public Base {
    public:
        void print() {
            //code
        }
};

int main (){
    Derived derived1;
    Base * base1 = &derived1;

    //calls funtion
    base1->print();
    return 0;
}
