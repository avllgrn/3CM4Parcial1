#ifndef PILACHAR_H
#define PILACHAR_H


#include <iostream>
#include "NodoChar.h"
using namespace std;

class PilaChar{
private:
    NodoChar* tope;
public:
    PilaChar(void);
    ~PilaChar(void);
    void push(char d);
    char pop(void);
    bool estaVacia(void);
    void liberaPila(void);
};

#endif // PILACHAR_H
