#ifndef NODOFLOAT_H
#define NODOFLOAT_H


#include <iostream>
using namespace std;

class NodoFloat{
private:
    float dato;
    NodoFloat* inferior;
public:
    NodoFloat(void);
    NodoFloat(float d, NodoFloat* i);
    void muestraDatos(void);
    void muestraDato(void);
    void pideDatos(void);
    float retornaDato(void);
    void modificaDato(float d);
    NodoFloat* retornaInferior(void);
    void modificaInferior(NodoFloat* i);
};

#endif // NODOFLOAT_H
