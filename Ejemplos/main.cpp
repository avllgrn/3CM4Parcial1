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

bool esNumero(char c);
bool esMayuscula(char c);
bool esMinuscula(char c);
bool esLetra(char c);
bool esEspecial(char c);

int main(void){
    string Cadena, Trabajada;
    char c;
    int i,tam;
    cout<<"Ingresa una cadena de caracteres ";
    getline(cin, Cadena);
    tam = Cadena.size();

    PilaChar P;
    for(i=0; i<tam; i++){
        if(!esEspecial(Cadena.at(i))){
            c = toupper(Cadena.at(i));
            P.push(c);
            Trabajada.push_back(c);
        }
    }
    cout<<endl
        <<Cadena<<endl<<endl
        <<Trabajada<<endl<<endl;
    P.liberaPila();
    return 0;
}

bool esNumero(char c){
    return 48<=c && c <=57;
}
bool esMayuscula(char c){
    return 65<=c && c <=90;
}
bool esMinuscula(char c){
    return 97<=c && c <=122;
}
bool esLetra(char c){
    return esMayuscula(c) || esMinuscula(c);
}
bool esEspecial(char c){
    return !esLetra(c) && !esNumero(c);
}
