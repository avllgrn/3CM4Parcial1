#include <iostream>
#include <stdlib.h>
using namespace std;

class Nodo{
public:
    int dato;
    Nodo* inferior;
    Nodo(void){
        dato = 0;
        inferior = NULL;
    };
    Nodo(int d, Nodo* i){
        dato = d;
        inferior = i;
    };
    void muestraTuEstado(void){
        cout<<"| "<<dato<<" -> ";
        if(inferior==NULL)
            cout << "NULL";
        else
            cout<< inferior;
        cout<<" |"<<endl;
    };
};

int main(void){
    Nodo* tope = NULL;  //Pila vacia

    tope = new Nodo(5, tope);    //Push 5
    tope = new Nodo(3, tope);    //Push 3
    tope = new Nodo(7, tope);    //Push 7
    tope = new Nodo(-4, tope);   //Push -4

    Nodo* aux;
    int d;

    //Pop -4
    d = tope->dato;
    aux = tope;
    tope = tope->inferior;
    delete aux;
    cout<<d<<endl;

    //Pop 7
    d = tope->dato;
    aux = tope;
    tope = tope->inferior;
    delete aux;
    cout<<d<<endl;

    //Pop 3
    d = tope->dato;
    aux = tope;
    tope = tope->inferior;
    delete aux;
    cout<<d<<endl;

    //Pop 5
    d = tope->dato;
    aux = tope;
    tope = tope->inferior;
    delete aux;
    cout<<d<<endl;

    return 0;
}
