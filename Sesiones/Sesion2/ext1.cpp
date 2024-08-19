//extern  se utiliza para hacer referencia de una variable funcion u objeto global utilizada en otro programa 
#include <iostream>
int count;
extern void  write_extern();

main (){
    count =5;
    write_extern();
}