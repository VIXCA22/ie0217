// la sentencia go to lo que hace es saltar a cualquier parte de nuestro
//programa lo que lo hace enredado y puede llegar a afectar la logica de programacion
#include <iostream>
using namespace std;

int main(){
    float num, average, sum=0.0;
    int i , n;

    cout << "numero maximo de inputs";
    cin >> n;

    for (i = 1; i <= n; ++i){
        cout << "Ingrese n " << i << " : ";
        cin >> num;

        if (num < 0.0)
        {
            //controlador del salto
            goto jump;
        }
        sum +=num;
    
    }
jump: 
    average = sum/(i-1);
    cout << "\nAverage = " << average;
    return 0;
}
