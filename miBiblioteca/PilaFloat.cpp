#include "PilaFloat.h"

PilaFloat::PilaFloat(void){
    tope = NULL;
}
PilaFloat::~PilaFloat(void){
    //cout<<"Destructor:"<<endl;
    liberaPila();
}
void PilaFloat::push(float d){
    tope = new NodoFloat(d, tope);
}
float PilaFloat::pop(void){
    NodoFloat* aux;
    float d;
    d = tope->retornaDato();
    aux = tope;
    tope = tope->retornaInferior();
    delete aux;
    return d;
}
bool PilaFloat::estaVacia(void){
    return tope==NULL;
}
void PilaFloat::liberaPila(void){
    while(!estaVacia())
        cout<<pop()<<endl;
}
