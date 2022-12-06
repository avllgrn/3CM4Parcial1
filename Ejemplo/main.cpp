#include <iostream>
#include <stdlib.h>
#include <string>
#include "Pila.h"
#include "Cola.h"
using namespace std;

bool esNumero(char c){
    return c>=48 && c<=57;
}
bool esMayuscula(char c){
    return c>=65 && c<=90;
}
bool esMinuscula(char c){
    return c>=97 && c<=122;
}
bool esLetra(char c){
    return esMayuscula(c) || esMinuscula(c);
}
bool esEspecial(char c){
    return !esNumero(c) && !esLetra(c);
}

int main(void){
    Cola aux;
    Pila P;
    string cadena;
    int i,n;

    cout<<"Ingresa cadena ";
    getline(cin, cadena);
    n = cadena.size();

    //Pasar a aux y a pila, caracter por caracter, en mayusculas, los que no sean especiales
    i=0;
    while(i<n){
        if(!esEspecial(cadena[i])){
            aux.push(toupper(cadena[i]));
            P.push(toupper(cadena[i]));
        }
        i++;
    }

    //Comparar caracter por caracter aux con P
    i=0;
    while(!P.estaVacia()){
        if(aux.pop() != P.pop()){//Con una diferencia que haya, deja de compararse
            cout<<endl<<endl<<"NO es palindromo"<<endl<<endl;
            break;
        }
        i++;
    }

    if(P.estaVacia())
        cout<<endl<<endl<<"ES palindromo"<<endl<<endl;

    return 0;
}
