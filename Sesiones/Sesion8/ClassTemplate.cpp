#include <iostream>
using namespace std;

//Clase template

template <class T>
class Number {
    private:
    //Variable of type T
    T num;
}

public :
    Number(T n) : num(n) {} //se define el contructor

T getNum(){
    return num;
};

int main(){

    //se crea el objeto con tipo int
    Number<int> numberInt(7);

    // create object with double type
    Number<double> numberDouble(7.7);

    cout << "int Number = " << numberInt.getNum()<<endl;
    cout << "double Number = " << numberDouble.getNum()<<endl; 

    return 0;
}