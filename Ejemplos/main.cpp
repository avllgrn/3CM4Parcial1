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
    Nodo A, B, C, D;

    cout<<"D "; D.muestraTuEstado();
    cout<<"C "; C.muestraTuEstado();
    cout<<"B "; B.muestraTuEstado();
    cout<<"A "; A.muestraTuEstado();

    return 0;
}
