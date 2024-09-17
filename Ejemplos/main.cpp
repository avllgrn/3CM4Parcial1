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
    int n, x;

    cout << "Ingresa n ";
    cin >> n;
    x = n;

    while(x>0){
        cout << (x%2);  //Se muestra cada residuo
        x = x/2;        //Se almacena cada nuevo cociente
    }

    return 0;
}
