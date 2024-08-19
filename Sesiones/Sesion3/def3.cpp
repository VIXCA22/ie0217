#include <iostream>
using namespace std;

#define MI_PRIMER_DEFINE 925

enum seasons {
    spring = 34,
    summer = 4,
    autumn = 9,
    winter = 32
};

enum enumcito {
  carro = 40,
  casa,
  arbol,
  patio
};

int main(){
    seasons  s ;
    s = winter ;
    cout << "Summer = " << s << endl;
    
    cout << "arbol: "  << arbol << endl;

    return 0;
}