#ifndef NODOSTRING_H
#define NODOSTRING_H


#include <iostream>
#include <string>
using namespace std;

class NodoString{
private:
    string dato;
    NodoString* inferior;
public:
    NodoString(void);
    NodoString(string d, NodoString* i);
    void muestraDatos(void);
    void muestraDato(void);
    void pideDatos(void);
    string retornaDato(void);
    void modificaDato(string d);
    NodoString* retornaInferior(void);
    void modificaInferior(NodoString* i);
};

#endif // NODOSTRING_H
