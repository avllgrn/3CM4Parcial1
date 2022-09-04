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

class Nodo{
private:
    Libro dato;
    Nodo* inferior;
public:
    Nodo(void);
    Nodo(Libro d, Nodo* i);
    void muestraDatos(void);
    void muestraDato(void);
    void pideDatos(void);
    Libro retornaDato(void);
    void modificaDato(Libro d);
    Nodo* retornaInferior(void);
    void modificaInferior(Nodo* i);
};

Nodo::Nodo(void){
    inferior = NULL;
}
Nodo::Nodo(Libro d, Nodo* i){
    dato = d;
    inferior = i;
}
void Nodo::muestraDatos(void){
    cout << "|" << dato << "|";
    if(inferior == NULL)
        cout<< "NULL|";
    else
        cout<< " -> " << inferior << "| ";
}
void Nodo::muestraDato(void){
    cout << "|" << dato << "|";
    if(inferior != NULL)
        cout<< " -> ";
}
void Nodo::pideDatos(void){
    cout<<"Dame mi dato: ";cin>>dato;
}
Libro Nodo::retornaDato(void){
    return dato;
}
void Nodo::modificaDato(Libro d){
    dato = d;
}
Nodo* Nodo::retornaInferior(void){
    return inferior;
}
void Nodo::modificaInferior(Nodo* i){
    inferior = i;
}

int main(void){
    Nodo* tope;
    Libro L1("El aleph","Jorge Luis Borges","Alianza");
    Libro L2("Las desventuras del joven Werther","Johann Wolfgang von Goethe","Catedra");
    Libro L3("La experiencia literaria","Alfonso Reyes","FCE");
    Libro L4("En Busca Del Tiempo Perdido","Marcel Proust","Alianza");

    tope = NULL;//Pila vacia

    tope = new Nodo(L1, tope);    //Push a la pila, entra L1 primero
    tope = new Nodo(L2, tope);    //Push a la pila, entra L2
    tope = new Nodo(L3, tope);    //Push a la pila, entra L3
    tope = new Nodo(L4, tope);   //Push a la pila, entra L4 al final


    Nodo* aux;
    Libro d;

    //Pop a la pila, sale L4 primero (ultimo en entrar)
    d = tope->retornaDato();
    aux = tope;
    tope = tope->retornaInferior();
    delete aux;
    cout << d << endl;

    //Pop a la pila, sale L3
    d = tope->retornaDato();
    aux = tope;
    tope = tope->retornaInferior();
    delete aux;
    cout << d << endl;

    //Pop a la pila, sale L2
    d = tope->retornaDato();
    aux = tope;
    tope = tope->retornaInferior();
    delete aux;
    cout << d << endl;

    //Pop a la pila, sale L1 al final  (primero en entrar)
    d = tope->retornaDato();
    aux = tope;
    tope = tope->retornaInferior();
    delete aux;
    cout << d << endl;

    return 0;
}
