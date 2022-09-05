#include "NodoFloat.h"


NodoFloat::NodoFloat(void){
    dato = 0;
    inferior = NULL;
}
NodoFloat::NodoFloat(float d, NodoFloat* i){
    dato = d;
    inferior = i;
}
void NodoFloat::muestraDatos(void){
    cout << "|" << dato << "|";
    if(inferior == NULL)
        cout<< "NULL|";
    else
        cout<< " -> " << inferior << "| ";
}
void NodoFloat::muestraDato(void){
    cout << "|" << dato << "|";
    if(inferior != NULL)
        cout<< " -> ";
}
void NodoFloat::pideDatos(void){
    cout<<"Dame mi dato: ";cin>>dato;
}
float NodoFloat::retornaDato(void){
    return dato;
}
void NodoFloat::modificaDato(float d){
    dato = d;
}
NodoFloat* NodoFloat::retornaInferior(void){
    return inferior;
}
void NodoFloat::modificaInferior(NodoFloat* i){
    inferior = i;
}
