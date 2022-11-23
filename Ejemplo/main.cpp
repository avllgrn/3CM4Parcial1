#include <iostream>
#include "Pila.h"
using namespace std;

int main(void){
    Pila P;

    cout<<"Inicio"<<endl<<endl;

    P.push(5);
    P.push(-1);
    P.push(3);
    P.push(9);
    P.push(4);


    cout<<P.pop()<<endl;
    cout<<P.pop()<<endl;
    cout<<P.pop()<<endl;

    cout<<"Final"<<endl<<endl;

    return 0;
}
