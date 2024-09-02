#include <iostream>
using namespace std;

class Student {
    private :
        int  age;

    public:

        //contructor initializes age to  12
        Student() : age(12) {}

        void getAge() {
            cout << "Age = " << age << endl;
        }
};

int mai(){

    //dynamically declare Student object 

    Student* ptr = new Student();

    // call getAge() funtion
    ptr->getAge();

    // ptr memory is released

    delete ptr;

    return 0;
}
