#ifndef PILALIBRO_H
#define PILALIBRO_H


#include <iostream>
#include "NodoLibro.h"
using namespace std;

class PilaLibro{
private:
    NodoLibro* tope;
public:
    PilaLibro(void);
    ~PilaLibro(void);
    void push(Libro d);
    Libro pop(void);
    bool estaVacia(void);
    void liberaPila(void);
};

#endif // PILALIBRO_H
