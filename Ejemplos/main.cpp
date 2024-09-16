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
    Nodo A(5,NULL), B(3,&A), C(7,&B), D(-4,&C);

    cout<<"&D = "<<&D<<" "; D.muestraTuEstado();
    cout<<"&C = "<<&C<<" "; C.muestraTuEstado();
    cout<<"&B = "<<&B<<" "; B.muestraTuEstado();
    cout<<"&A = "<<&A<<" "; A.muestraTuEstado();

    return 0;
}
