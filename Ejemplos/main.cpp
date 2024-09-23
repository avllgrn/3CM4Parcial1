#include <iostream>
#include <stdlib.h>
using namespace std;

class Cola{
private:
    class Nodo{//La clase Nodo es de uso exclusivo de la clase Cola
    public:
        int dato;
        Nodo* detras;
        Nodo(void){
            dato = 0;
            detras = NULL;
        };
        Nodo(int dat, Nodo* det){
            dato = dat;
            detras = det;
        };
        void muestraTuEstado(void){
            cout<<"| "<<dato<<" -> ";
            if(detras==NULL)
                cout << "NULL";
            else
                cout<< detras;
            cout<<" |"<<endl;
        };
    };
    Nodo* primero;
    Nodo* ultimo;
public:
    Cola(void){
        primero = NULL;
        ultimo = NULL;
    };
    ~Cola(void){
        liberaCola();
    };
    void push(int dat){
        if(estaVacia()){
            primero = new Nodo(dat, NULL);
            ultimo = primero;
        }
        else{
            ultimo->detras = new Nodo(dat, NULL);
            ultimo = ultimo->detras;
        }
    };
    int pop(void){
        int d;
        Nodo* aux;
        if(!estaVacia() && primero!=ultimo){
            d = primero->dato;
            aux = primero;
            primero = primero->detras;
            delete aux;
        }
        else if(!estaVacia() && primero==ultimo){
            d = primero->dato;
            delete primero;
            primero = NULL;
            ultimo = NULL;
        }
        return d;
    };
    bool estaVacia(void){
        return primero==NULL && ultimo==NULL;
    };
    void liberaCola(void){
        while(!estaVacia()){
            cout<<pop()<<endl;
        }
    };
};

int main(void){
    Cola C;
    int op,d;

    do{
        system("cls");
        cout<<"1. push"<<endl
            <<"2. pop"<<endl
            <<"3. libera Cola"<<endl
            <<"4. Salir"<<endl
            <<"Cual es tu opcion? ";
        cin>>op;
        system("cls");
        switch(op){
            case 1:
                cout<<"Ingresa dato ";cin>>d;
                C.push(d);
                cout<<endl<<endl<<"Dato insertado en Cola..."<<endl<<endl;
                break;
            case 2:
                if(C.estaVacia()){
                    cout<<"La Cola ya esta vacia -.-"<<endl<<endl;
                }
                else{
                    d = C.pop();
                    cout<<"Salio nodo con dato "<<d<<endl<<endl;
                }
                break;
            case 3:
                if(C.estaVacia()){
                    cout<<"La Cola ya esta vacia -.-"<<endl<<endl;
                }
                else{
                    C.liberaCola();
                    cout<<"La Cola ha sido liberada =)"<<endl<<endl;
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
