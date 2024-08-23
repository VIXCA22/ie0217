#include <iostream>
using namespace std;

class Animal {
    public:
    void info(){cout << "I am a Animal" << endl; }
};

class Dog : public Animal {
    public:
    void bark(){cout << "I am a dog woof woof" << endl; }
};

class Cat : public Animal {
    public:
    void meow(){cout << "I am a cat . Meow" << endl; }
};

int main(){
    //Create object of dog class
    Dog dog1;
    cout << "Dog Class:" << endl;
    dog1.info(); //parent class funtion
    dog1.bark();

    //create object of cat class
    Cat cat1;
    cout << "\nCat Class:" << endl;
    cat1.info();
    cat1.meow();
    
    return 0;
};
