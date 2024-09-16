#include <iostream>
using namespace std;

//Clase con múltiples parámetros y parametro en default

template <class T,class U,class V = char>
class ClassTemplate
{
private:
    T var1;
    U var2;
    V var3;
public:
    ClassTemplate(T v1,U V2, V v3) : var1(v1), var2(v2), var3(v3){}

    void printVar(){
        cout << "var1 = " << var1 << endl;
        cout << "var2 = " << var2 << endl;
        cout << "var3 = " << var3 << endl; 
    }
};

int main (){
    //crea el objeto dependiendo del tipo establecido de parámetro
    ClassTemplate<int,double > obj1(7,7.7,'c');
    cout << "obj1 values: " << endl;
    obj1.printVar();

    //se crea otro objeto cambiendole el tipo de asignación
    ClassTemplate<double,char,bool > obj1(8.8,'a',false);
    cout << "\nobj2 values: " << endl;
    obj2.printVar();

    return 0;
}
