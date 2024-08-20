//En la funciones de arreglos se puede pasar la direccion del espacio del elemento
//o tambien el elemento (por referencia o por valor)

//La funcion toma el valor del parametro
void func1(int numVal){
    //code
}

//la funcion toma el valor de la referencia como parametro
//se notifica el & antes del parametro

void func2(int &numRef) {
    //code
}

int main(){
    int num = 5;

    //pasa por valor
    func1(num);

    //pasa por referencia
    func2(num);

    return 0;
}