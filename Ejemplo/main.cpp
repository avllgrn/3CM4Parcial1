#include <iostream>
#include <stdlib.h>
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
    Nodo* aux;
    int op,d;

    tope = NULL;

    do{
        system("cls");
        cout<<"1. push"<<endl
            <<"2. pop"<<endl
            <<"3. elimina Pila"<<endl
            <<"4. Salir"<<endl
            <<"Cual es tu opcion? ";
        cin>>op;
        system("cls");
        switch(op){
            case 1:
                cout<<"Ingresa dato ";cin>>d;
                tope = new Nodo(d,tope);
                break;
            case 2:
                if(tope==NULL){
                    cout<<"La pila esta vacia... =("<<endl;
                }
                else{
                    d = tope->retornaDato();
                    aux = tope;
                    tope = tope->retornaInferior();
                    delete aux;
                    cout<<"Salio nodo con dato "<<d<<endl<<endl;
                }
                break;
            case 3:
                while(tope!=NULL){
                    d = tope->retornaDato();
                    aux = tope;
                    tope = tope->retornaInferior();
                    delete aux;
                    cout<<"Salio nodo con dato "<<d<<endl<<endl;
                }
                break;
            case 4:
                cout<<"Adios! =)"<<endl<<endl;
                while(tope!=NULL){
                    d = tope->retornaDato();
                    aux = tope;
                    tope = tope->retornaInferior();
                    delete aux;
                    cout<<"Salio nodo con dato "<<d<<endl<<endl;
                }
                break;
            default :
                cout<<"Opcion invalida...! =("<<endl<<endl;
                break;
        }
        if(op!=4)
            system("pause");

    }while(op!=4);

    return 0;
}
