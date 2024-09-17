#include <iostream>
#include <stdlib.h>
using namespace std;

class PilaChar{
private:
    class Nodo{//La clase Nodo es de uso exclusivo de la clase Pila
    public:
        char dato;
        Nodo* inferior;
        Nodo(void){
            dato = 0;
            inferior = NULL;
        };
        Nodo(char d, Nodo* i){
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
    PilaChar(void){
        tope = NULL;
    };
    ~PilaChar(void){
        liberaPila();
    };
    void push(char d){
        tope = new Nodo(d, tope);
    };
    char pop(void){
        char d;
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
    string Cadena;
    int i,tam;

    cout<<"Ingresa una cadena de caracteres ";
    getline(cin, Cadena);
    tam = Cadena.size();

    cout<<endl<<endl;
    cout<<"Cadena izquierda a derecha"<<endl;
    for(i=0; i<tam; i++)
        cout<<Cadena.at(i)<<endl;

    PilaChar P;
    for(i=0; i<tam; i++)
        P.push(Cadena.at(i));

    cout<<endl<<endl;
    cout<<"Cadena de derecha a izquierda"<<endl;
    P.liberaPila();

    return 0;
}
