#include "PilaInt.h"

PilaInt::PilaInt(void){
    tope = NULL;
}
PilaInt::~PilaInt(void){
    //cout<<"Destructor:"<<endl;
    liberaPila();
}
void PilaInt::push(int d){
    tope = new NodoInt(d, tope);
}
int PilaInt::pop(void){
    NodoInt* aux;
    int d;
    d = tope->retornaDato();
    aux = tope;
    tope = tope->retornaInferior();
    delete aux;
    return d;
}
bool PilaInt::estaVacia(void){
    return tope==NULL;
}
void PilaInt::liberaPila(void){
    while(!estaVacia())
        cout<<pop()<<endl;
}
