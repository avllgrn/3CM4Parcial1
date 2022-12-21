#ifndef LISTADOBLE_H
#define LISTADOBLE_H


#include <iostream>
#include <stdlib.h>
using namespace std;

class ListaDoble{
private:
    class Nodo{
    public:
        int dat;
        Nodo* pre;
        Nodo* sig;
        Nodo(void){
            pre = NULL;
            sig = NULL;
        };
        Nodo(Nodo* p, int d, Nodo* s){
            pre = p;
            dat = d;
            sig = s;
        };
    };
    Nodo* ini;
    Nodo* fin;
    Nodo* buscaNodo(int d){
    };
public:
    ListaDoble(void){
    };
    bool estaVacia(void){
    };
    void insertaAlInicio(int d){
    };
    void muestraAscendentemente(void){
    };
    int eliminaAlInicio(void){
    };
    void insertaAlFinal(int d){
    };
    void muestraDescendentemente(void){
    };
    int eliminaAlFinal(void){
    };
    void vaciaLista(void){
    };
    bool buscaDato(int d){
    };
    bool eliminaNodo(int d){
    };
    ~ListaDoble(void){
    };
};

#endif // LISTADOBLE_H
