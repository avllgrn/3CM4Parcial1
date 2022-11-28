#ifndef COLA_H
#define COLA_H

#include <iostream>
using namespace std;

class Cola{
private:
    class Nodo{
    public:
        int   dat;
        Nodo* sig;
        Nodo(void){
            dat = 0;
            sig = NULL;
        };
        Nodo(int d, Nodo* s){
            dat = d;
            sig = s;
        };
    };
    Nodo* ini;
    Nodo* fin;
public:
    Cola(void){
        ini = NULL;
        fin = NULL;
    };
    ~Cola(void){
        vaciaCola();
    };
    bool estaVacia(void){
        return ini==NULL && fin==NULL;
    };
    void vaciaCola(void){
        while(!estaVacia())
            cout<<pop()<<endl;
    };
    void push(int d){
        if(estaVacia()){
            ini = new Nodo(d,NULL);
            fin = ini;
        }
        else{
            fin->sig = new Nodo(d,NULL);
            fin = fin->sig;
        }
    };
    int pop(void){
        Nodo* aux;
        int temp;
        //Si solo hay un nodo
        if(ini==fin && !estaVacia()){
            temp = ini->dat;
            delete ini;
            ini = NULL;
            fin = NULL;
        }
        else{//Si hay mas de un nodo
            aux = ini;
            temp = ini->dat;
            ini = ini->sig;
            delete aux;
        }
        return temp;
    };
};

#endif // COLA_H
