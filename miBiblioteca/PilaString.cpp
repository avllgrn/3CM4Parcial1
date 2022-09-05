#include "PilaString.h"

PilaString::PilaString(void){
    tope = NULL;
}
PilaString::~PilaString(void){
    //cout<<"Destructor:"<<endl;
    liberaPila();
}
void PilaString::push(string d){
    tope = new NodoString(d, tope);
}
string PilaString::pop(void){
    NodoString* aux;
    string d;
    d = tope->retornaDato();
    aux = tope;
    tope = tope->retornaInferior();
    delete aux;
    return d;
}
bool PilaString::estaVacia(void){
    return tope==NULL;
}
void PilaString::liberaPila(void){
    while(!estaVacia())
        cout<<pop()<<endl;
}
