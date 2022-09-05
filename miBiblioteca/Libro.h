#ifndef LIBRO_H
#define LIBRO_H

#include <iostream>
#include <string>
using namespace std;

class Libro{
private:
    string Titulo;
    string Autor;
    string Editorial;
public:
    Libro(void);
    Libro(string T, string A, string E);
    ~Libro(void);
    void pideDatos(void);
    void muestraDatos(void);
    string retornaTitulo(void);
    void modificaTitulo(string T);
    string retornaAutor(void);
    void modificaAutor(string A);
    string retornaEditorial(void);
    void modificaEditorial(string E);
};

istream& operator>>(istream& Izquierdo, Libro& Derecho);
ostream& operator<<(ostream& Izquierdo, Libro Derecho);

#endif // LIBRO_H
