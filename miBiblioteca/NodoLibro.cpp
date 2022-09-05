#include "NodoLibro.h"

NodoLibro::NodoLibro(void){
    inferior = NULL;
}
NodoLibro::NodoLibro(Libro d, NodoLibro* i){
    dato = d;
    inferior = i;
}
void NodoLibro::muestraDatos(void){
    cout << "|" << dato << "|";
    if(inferior == NULL)
        cout<< "NULL|";
    else
        cout<< " -> " << inferior << "| ";
}
void NodoLibro::muestraDato(void){
    cout << "|" << dato << "|";
    if(inferior != NULL)
        cout<< " -> ";
}
void NodoLibro::pideDatos(void){
    cout<<"Dame mi dato: "<<endl;cin>>dato;
}
Libro NodoLibro::retornaDato(void){
    return dato;
}
void NodoLibro::modificaDato(Libro d){
    dato = d;
}
NodoLibro* NodoLibro::retornaInferior(void){
    return inferior;
}
void NodoLibro::modificaInferior(NodoLibro* i){
    inferior = i;
}
