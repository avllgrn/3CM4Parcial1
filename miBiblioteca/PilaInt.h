#ifndef PILAINT_H
#define PILAINT_H

#include <iostream>
#include "NodoInt.h"
using namespace std;

class PilaInt{
private:
    NodoInt* tope;
public:
    PilaInt(void);
    ~PilaInt(void);
    void push(int d);
    int pop(void);
    bool estaVacia(void);
    void liberaPila(void);
};


#endif // PILAINT_H
