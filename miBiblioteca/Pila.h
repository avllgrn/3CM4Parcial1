#ifndef PILA_H
#define PILA_H

#include <iostream>
using namespace std;

class Pila{
private:
    class Nodo{
    public:
        int dat;
        Nodo* inf;
        Nodo(void){
            dat = 0;
            inf = NULL;
        };
        Nodo(int d, Nodo* i){
            dat = d;
            inf = i;
        };
    };
    Nodo* top;
public:
    Pila(void){
        top = NULL;
    };
    ~Pila(void){
        vaciaPila();
    };
    void push(int d){
        top = new Nodo(d,top);
    };
    int pop(void){
        int d = top->dat;
        Nodo* aux = top;
        top = top->inf;
        delete aux;
        return d;
    };
    bool estaVacia(void){
        return top == NULL;
    };
    void vaciaPila(void){
        while(!estaVacia())
            cout<<pop()<<endl;
    };
};


#endif // PILA_H
