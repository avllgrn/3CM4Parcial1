#include "PilaLibro.h"

PilaLibro::PilaLibro(void){
    tope = NULL;
}
PilaLibro::~PilaLibro(void){
    //cout<<"Destructor:"<<endl;
    liberaPila();
}
void PilaLibro::push(Libro d){
    tope = new NodoLibro(d, tope);
}
Libro PilaLibro::pop(void){
    NodoLibro* aux;
    Libro d;
    d = tope->retornaDato();
    aux = tope;
    tope = tope->retornaInferior();
    delete aux;
    return d;
}
bool PilaLibro::estaVacia(void){
    return tope==NULL;
}
void PilaLibro::liberaPila(void){
    while(!estaVacia())
        cout<<pop()<<endl;
}
