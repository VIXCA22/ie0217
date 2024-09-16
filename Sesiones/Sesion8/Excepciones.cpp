#include <iostream>
using namespace std;


//Se hace un código sencillo donde se demuestran las excepciones por medio
//de un try que es nuestra entrada , catch si nuestra entrada especificamente no sirve y throw si no sirve se le muestra un mensaje de error
int main(){

   double numerator , denominator , divide;
   cin >> numerator;

   cout << "Enter denominator";
   cin >> denominator;

   try {

    //throw an exception if denominator is 0
    if (denominator == 0)
    throw 0;

    //not excecuted if denominator is 0
    divide = numerator / denominator ;
    cout << numerator << " / " << denominator << " = " << divide << endl;
   }

   catch(int num_exception){
    cout << "Error : Cannot divide by " << num_exception << endl;
   }

   return 0;
}