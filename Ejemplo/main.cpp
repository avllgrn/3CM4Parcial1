#include <iostream>
using namespace std;

class Nodo{
private:
    char dato;
    Nodo* inferior;
public:
    Nodo(void);
    Nodo(char d, Nodo* i);
    void muestraDatos(void);
    void muestraDato(void);
    void pideDatos(void);
    char retornaDato(void);
    void modificaDato(char d);
    Nodo* retornaInferior(void);
    void modificaInferior(Nodo* i);
};
Nodo::Nodo(void){
    dato = 0;
    inferior = NULL;
}
Nodo::Nodo(char d, Nodo* i){
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
char Nodo::retornaDato(void){
    return dato;
}
void Nodo::modificaDato(char d){
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

    tope = new Nodo('a', tope);    //Push a la pila, entra 'a' primero
    tope = new Nodo('b', tope);    //Push a la pila, entra 'b'
    tope = new Nodo('c', tope);    //Push a la pila, entra 'c'
    tope = new Nodo('d', tope);   //Push a la pila, entra 'd' al final


    Nodo* aux;
    char d;

    //Pop a la pila, sale 'd' primero (ultimo en entrar)
    d = tope->retornaDato();
    aux = tope;
    tope = tope->retornaInferior();
    delete aux;
    cout << d << endl;

    //Pop a la pila, sale 'c'
    d = tope->retornaDato();
    aux = tope;
    tope = tope->retornaInferior();
    delete aux;
    cout << d << endl;

    //Pop a la pila, sale 'b'
    d = tope->retornaDato();
    aux = tope;
    tope = tope->retornaInferior();
    delete aux;
    cout << d << endl;

    //Pop a la pila, sale 'a' al final  (primero en entrar)
    d = tope->retornaDato();
    aux = tope;
    tope = tope->retornaInferior();
    delete aux;
    cout << d << endl;

    return 0;
}
