#ifndef NODOCHAR_H
#define NODOCHAR_H


#include <iostream>
using namespace std;

class NodoChar{
private:
    float dato;
    NodoChar* inferior;
public:
    NodoChar(void);
    NodoChar(float d, NodoChar* i);
    void muestraDatos(void);
    void muestraDato(void);
    void pideDatos(void);
    float retornaDato(void);
    void modificaDato(float d);
    NodoChar* retornaInferior(void);
    void modificaInferior(NodoChar* i);
};

#endif // NODOCHAR_H
