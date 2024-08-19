//En las enumeraciones similiares a una lista solo que 
//solo se puede solicitar enteros  y no texto

#include <iostream>
using namespace std;

enum seasons {spring =34,summer = 4, autumn =9, winter =32};

int main() {
    seasons s;

    s= summer;

    cout << "Summer = " << s << endl;

    return 0;
}