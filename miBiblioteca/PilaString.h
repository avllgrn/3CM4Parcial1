#ifndef PILASTRING_H
#define PILASTRING_H


#include <iostream>
#include "NodoString.h"
using namespace std;

class PilaString{
private:
    NodoString* tope;
public:
    PilaString(void);
    ~PilaString(void);
    void push(string d);
    string pop(void);
    bool estaVacia(void);
    void liberaPila(void);
};

#endif // PILASTRING_H
