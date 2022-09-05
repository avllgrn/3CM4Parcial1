#include "NodoString.h"



NodoString::NodoString(void){
    inferior = NULL;
}
NodoString::NodoString(string d, NodoString* i){
    dato = d;
    inferior = i;
}
void NodoString::muestraDatos(void){
    cout << "|" << dato << "|";
    if(inferior == NULL)
        cout<< "NULL|";
    else
        cout<< " -> " << inferior << "| ";
}
void NodoString::muestraDato(void){
    cout << "|" << dato << "|";
    if(inferior != NULL)
        cout<< " -> ";
}
void NodoString::pideDatos(void){
    cout<<"Dame mi dato: ";cin>>dato;
}
string NodoString::retornaDato(void){
    return dato;
}
void NodoString::modificaDato(string d){
    dato = d;
}
NodoString* NodoString::retornaInferior(void){
    return inferior;
}
void NodoString::modificaInferior(NodoString* i){
    inferior = i;
}
