#include "NodoInt.h"


NodoInt::NodoInt(void){
    dato = 0;
    inferior = NULL;
}
NodoInt::NodoInt(int d, NodoInt* i){
    dato = d;
    inferior = i;
}
void NodoInt::muestraDatos(void){
    cout << "|" << dato << "|";
    if(inferior == NULL)
        cout<< "NULL|";
    else
        cout<< " -> " << inferior << "| ";
}
void NodoInt::muestraDato(void){
    cout << "|" << dato << "|";
    if(inferior != NULL)
        cout<< " -> ";
}
void NodoInt::pideDatos(void){
    cout<<"Dame mi dato: ";cin>>dato;
}
int NodoInt::retornaDato(void){
    return dato;
}
void NodoInt::modificaDato(int d){
    dato = d;
}
NodoInt* NodoInt::retornaInferior(void){
    return inferior;
}
void NodoInt::modificaInferior(NodoInt* i){
    inferior = i;
}

