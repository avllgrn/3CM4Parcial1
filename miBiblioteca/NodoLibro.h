#ifndef NODOLIBRO_H
#define NODOLIBRO_H


#include <iostream>
#include "Libro.h"
using namespace std;

class NodoLibro{
private:
    Libro dato;
    NodoLibro* inferior;
public:
    NodoLibro(void);
    NodoLibro(Libro d, NodoLibro* i);
    void muestraDatos(void);
    void muestraDato(void);
    void pideDatos(void);
    Libro retornaDato(void);
    void modificaDato(Libro d);
    NodoLibro* retornaInferior(void);
    void modificaInferior(NodoLibro* i);
};

#endif // NODOLIBRO_H
