#include <iostream>
using namespace std;

class Nodo{
private:
    string dato;
    Nodo* inferior;
public:
    Nodo(void);
    Nodo(string d, Nodo* i);
    void muestraDatos(void);
    void muestraDato(void);
    void pideDatos(void);
    string retornaDato(void);
    void modificaDato(string d);
    Nodo* retornaInferior(void);
    void modificaInferior(Nodo* i);
};
Nodo::Nodo(void){
    inferior = NULL;
}
Nodo::Nodo(string d, Nodo* i){
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
string Nodo::retornaDato(void){
    return dato;
}
void Nodo::modificaDato(string d){
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

    tope = NULL;//Pila vacia

    tope = new Nodo("Una", tope);    //Push a la pila, entra "Una" primero
    tope = new Nodo("cadena", tope);    //Push a la pila, entra "cadena"
    tope = new Nodo("de", tope);    //Push a la pila, entra "de"
    tope = new Nodo("caracteres", tope);   //Push a la pila, entra "caracteres" al final


    Nodo* aux;
    string d;

    //Pop a la pila, sale "caracteres" primero (ultimo en entrar)
    d = tope->retornaDato();
    aux = tope;
    tope = tope->retornaInferior();
    delete aux;
    cout << d << endl;

    //Pop a la pila, sale "de"
    d = tope->retornaDato();
    aux = tope;
    tope = tope->retornaInferior();
    delete aux;
    cout << d << endl;

    //Pop a la pila, sale "cadena"
    d = tope->retornaDato();
    aux = tope;
    tope = tope->retornaInferior();
    delete aux;
    cout << d << endl;

    //Pop a la pila, sale "Una" al final  (primero en entrar)
    d = tope->retornaDato();
    aux = tope;
    tope = tope->retornaInferior();
    delete aux;
    cout << d << endl;

    return 0;
}
