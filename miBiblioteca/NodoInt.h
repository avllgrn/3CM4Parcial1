#ifndef NODOINT_H
#define NODOINT_H


#include <iostream>
using namespace std;

class NodoInt{
private:
    int dato;
    NodoInt* inferior;
public:
    NodoInt(void);
    NodoInt(int d, NodoInt* i);
    void muestraDatos(void);
    void muestraDato(void);
    void pideDatos(void);
    int retornaDato(void);
    void modificaDato(int d);
    NodoInt* retornaInferior(void);
    void modificaInferior(NodoInt* i);
};

#endif // NODOINT_H
