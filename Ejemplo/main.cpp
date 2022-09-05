#include <iostream>
#include <stdlib.h>
#include "PilaInt.h"
using namespace std;

int main(void){
    PilaInt A;
    PilaInt B;
    int d;

    //1. Ingresar datos en Pila A
    do{
        cout<<"Ingresa numero ";
        cin>>d;
        if(d!=0)
            A.push(d);
    }while(d!=0);

    //2. Pasar datos positivos de Pila A hacia Pila B
    while(!A.estaVacia()){
        d = A.pop();
        if(d>0)
            B.push(d);
    }

    //3. Mostrar Pila B
    cout<<endl<<endl<<"B"<<endl;
    while(!B.estaVacia())
        cout<<B.pop()<<endl;

    return 0;
}
