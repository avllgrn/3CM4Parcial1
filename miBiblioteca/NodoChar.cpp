#include "NodoChar.h"


NodoChar::NodoChar(void){
    dato = 0;
    inferior = NULL;
}
NodoChar::NodoChar(float d, NodoChar* i){
    dato = d;
    inferior = i;
}
void NodoChar::muestraDatos(void){
    cout << "|" << dato << "|";
    if(inferior == NULL)
        cout<< "NULL|";
    else
        cout<< " -> " << inferior << "| ";
}
void NodoChar::muestraDato(void){
    cout << "|" << dato << "|";
    if(inferior != NULL)
        cout<< " -> ";
}
void NodoChar::pideDatos(void){
    cout<<"Dame mi dato: ";cin>>dato;
}
float NodoChar::retornaDato(void){
    return dato;
}
void NodoChar::modificaDato(float d){
    dato = d;
}
NodoChar* NodoChar::retornaInferior(void){
    return inferior;
}
void NodoChar::modificaInferior(NodoChar* i){
    inferior = i;
}
