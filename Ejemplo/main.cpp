#include <iostream>
#include "Pila.h"
using namespace std;

int main(void){
    Pila A, B, Aux;
    int temp;

    A.push(5);
    A.push(-1);
    A.push(3);
    A.push(9);
    A.push(4);

    //Pasar datos de A a Aux
    while(!A.estaVacia())
        Aux.push(A.pop());

    //Pasar datos de Aux a A y B
    while(!Aux.estaVacia()){
        //Se almacena temporalmente cada dato
        temp = Aux.pop();
        //Se copia cada dato a A y a B
        A.push(temp);
        B.push(temp);
    }

    cout<<"A"<<endl;
    A.vaciaPila();cout<<endl<<endl;
    cout<<"B"<<endl;
    B.vaciaPila();cout<<endl<<endl;

    return 0;
}
