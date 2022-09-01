#include <iostream>
using namespace std;

class Nodo{
private:
    int dato;
    Nodo* inferior;
public:
    Nodo(void);
    Nodo(int d, Nodo* i);
    void muestraDatos(void);
    void muestraDato(void);
    void pideDatos(void);
    int retornaDato(void);
    void modificaDato(int d);
    Nodo* retornaInferior(void);
    void modificaInferior(Nodo* i);
};
Nodo::Nodo(void){
    dato = 0;
    inferior = NULL;
}
Nodo::Nodo(int d, Nodo* i){
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
int Nodo::retornaDato(void){
    return dato;
}
void Nodo::modificaDato(int d){
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

    tope = new Nodo(5, tope);    //Push a la pila, entra 5 primero
    tope = new Nodo(3, tope);    //Push a la pila, entra 3
    tope = new Nodo(7, tope);    //Push a la pila, entra 7
    tope = new Nodo(-4, tope);   //Push a la pila, entra -4 al final


    Nodo* aux;
    int d;

    //Pop a la pila, sale -4 primero (ultimo en entrar)
    d = tope->retornaDato();
    aux = tope;
    tope = tope->retornaInferior();
    delete aux;
    cout << d << endl;

    //Pop a la pila, sale 7
    d = tope->retornaDato();
    aux = tope;
    tope = tope->retornaInferior();
    delete aux;
    cout << d << endl;

    //Pop a la pila, sale 3
    d = tope->retornaDato();
    aux = tope;
    tope = tope->retornaInferior();
    delete aux;
    cout << d << endl;

    //Pop a la pila, sale 5 al final  (primero en entrar)
    d = tope->retornaDato();
    aux = tope;
    tope = tope->retornaInferior();
    delete aux;
    cout << d << endl;

    return 0;
}
