#ifndef PILAFLOAT_H
#define PILAFLOAT_H


#include <iostream>
#include "NodoFloat.h"
using namespace std;

class PilaFloat{
private:
    NodoFloat* tope;
public:
    PilaFloat(void);
    ~PilaFloat(void);
    void push(float d);
    float pop(void);
    bool estaVacia(void);
    void liberaPila(void);
};

#endif // PILAFLOAT_H
