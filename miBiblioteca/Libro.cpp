#include "Libro.h"


Libro::Libro(void){
}
Libro::Libro(string T, string A, string E){
    Titulo = T;
    Autor = A;
    Editorial = E;
}
Libro::~Libro(void){
    //cout << "Libro destruido..." << endl;
}
void Libro::pideDatos(void){
    cout << "Ingresa Titulo ";
    getline(cin,Titulo);
    cout << "Ingresa Autor ";
    getline(cin,Autor);
    cout << "Ingresa Editorial ";
    getline(cin,Editorial);
}
void Libro::muestraDatos(void){
    cout << "Titulo:\t   " << Titulo << endl
         << "Autor:\t   " << Autor << endl
         << "Editorial: " << Editorial << endl;
}
string Libro::retornaTitulo(void){
    return Titulo;
}
void Libro::modificaTitulo(string T){
    Titulo = T;
}
string Libro::retornaAutor(void){
    return Autor;
}
void Libro::modificaAutor(string A){
    Autor = A;
}
string Libro::retornaEditorial(void){
    return Editorial;
}
void Libro::modificaEditorial(string E){
    Editorial = E;
}

istream& operator>>(istream& Izquierdo, Libro& Derecho){
    Derecho.pideDatos();
    return Izquierdo;
}
ostream& operator<<(ostream& Izquierdo, Libro Derecho){
    Derecho.muestraDatos();
    return Izquierdo;
}
