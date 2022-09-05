#include "PilaChar.h"

PilaChar::PilaChar(void){
    tope = NULL;
}
PilaChar::~PilaChar(void){
    //cout<<"Destructor:"<<endl;
    liberaPila();
}
void PilaChar::push(char d){
    tope = new NodoChar(d, tope);
}
char PilaChar::pop(void){
    NodoChar* aux;
    char d;
    d = tope->retornaDato();
    aux = tope;
    tope = tope->retornaInferior();
    delete aux;
    return d;
}
bool PilaChar::estaVacia(void){
    return tope==NULL;
}
void PilaChar::liberaPila(void){
    while(!estaVacia())
        cout<<pop()<<endl;
}
