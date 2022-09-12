#include <iostream>
#include <stdlib.h>
#include "PilaChar.h"
using namespace std;

int main(void){
    PilaChar P;
    string cadena;
    int i, n;

    cout<<"Ingresa la expresion ";
    getline(cin,cadena);
    n = cadena.size();


    i=0;
    while(i<n){
        if(cadena.at(i)=='(')
           P.push(')');
        else if(cadena.at(i)==')'&&!P.estaVacia())
            P.pop();
        else if(cadena.at(i)==')'&&P.estaVacia())
            break;
        i++;
    }

    cout<<endl<<endl<<cadena<<endl<<endl;
    if(!P.estaVacia() || i<n)
        cout<<" NO es correcta"<<endl<<endl;
    else
        cout<<" ES correcta"<<endl<<endl;

    return 0;
}
