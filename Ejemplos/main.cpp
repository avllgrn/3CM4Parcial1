#include <iostream>
#include <stdlib.h>
using namespace std;

class Pila{
private:
    class Nodo{//La clase Nodo es de uso exclusivo de la clase Pila
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
    Nodo* tope;
public:
    Pila(void){
        tope = NULL;
    };
    ~Pila(void){
        liberaPila();
    };
    void push(int d){
        tope = new Nodo(d, tope);
    };
    int pop(void){
        int d;
        Nodo* aux;
        d = tope->dato;
        aux = tope;
        tope = tope->inferior;
        delete aux;
        return d;
    };
    bool estaVacia(void){
        return tope==NULL;
    };
    void liberaPila(void){
        while(!estaVacia()){
            cout<<pop()<<endl;
        }
    };
};

int main(void){
    Pila P;
    int op,d;

    do{
        system("cls");
        cout<<"1. push"<<endl
            <<"2. pop"<<endl
            <<"3. libera Pila"<<endl
            <<"4. Salir"<<endl
            <<"Cual es tu opcion? ";
        cin>>op;
        system("cls");
        switch(op){
            case 1:
                cout<<"Ingresa dato ";cin>>d;
                P.push(d);
                cout<<endl<<endl<<"Dato insertado en Pila..."<<endl<<endl;
                break;
            case 2:
                if(P.estaVacia()){
                    cout<<"La pila esta vacia -.-"<<endl<<endl;
                }
                else{
                    d = P.pop();
                    cout<<"Salio nodo con dato "<<d<<endl<<endl;
                }
                break;
            case 3:
                if(P.estaVacia()){
                    cout<<"La pila ya esta vacia -.-"<<endl<<endl;
                }
                else{
                    P.liberaPila();
                    cout<<"La pila ha sido liberada =)"<<endl<<endl;
                }
                break;
            case 4:
                cout<<"Adios! =)"<<endl<<endl;
                break;
            default :
                cout<<"Opcion invalida! o.O"<<endl<<endl;
                break;
        }
        if(op!=4)
            system("pause");

    }while(op!=4);

    return 0;
}
