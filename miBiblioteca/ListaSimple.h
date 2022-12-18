#ifndef LISTASIMPLE_H
#define LISTASIMPLE_H


#include <iostream>
using namespace std;

class ListaSimple{
private:
    class Nodo{
    public:
        int   dat;
        Nodo* sig;
        Nodo(void){
            dat = 0;
            sig = NULL;
        };
        Nodo(int d, Nodo* s){
            dat = d;
            sig = s;
        };
    };
    Nodo* ini;
    Nodo* fin;
public:
    ListaSimple(void){
        ini = NULL;
        fin = NULL;
    };
    ~ListaSimple(void){
        vaciaLista();
    };
    bool estaVacia(void){
        return ini==NULL && fin==NULL;
    };
    void vaciaLista(void){
        while(!estaVacia())
            cout<<eliminaAlInicio()<<endl;
    };
    void insertaAlFinal(int d){
        if(estaVacia()){
            fin = new Nodo(d,NULL);
            ini = fin;
        }
        else{
            fin->sig = new Nodo(d,NULL);
            fin = fin->sig;
        }
    };
    int eliminaAlInicio(void){
        Nodo* aux;
        int temp;
        //Si solo hay un nodo
        if(ini==fin && !estaVacia()){
            temp = ini->dat;
            delete ini;
            ini = NULL;
            fin = NULL;
        }
        else{//Si hay mas de un nodo
            aux = ini;
            temp = ini->dat;
            ini = ini->sig;
            delete aux;
        }
        return temp;
    };
    void muestraLista(void){
        Nodo* aux;
        aux = ini;
        while(aux != NULL){
            cout<<aux->dat;
            if(aux->sig != NULL)
                cout<<" -> ";
            aux = aux->sig;
        }
    };
    bool buscaNodo(int d){
        Nodo* aux;
        aux = ini;
        while(aux != NULL){
            if(d == aux->dat)
                return true;
            aux = aux->sig;
        }
        return false;
    };

    void insertaAlInicio(int d){
        if(estaVacia()){
            ini = new Nodo(d,NULL);
            fin = ini;
        }
        else
            ini = new Nodo(d,ini);
    };
    int eliminaAlFinal(void){
        Nodo* aux;
        int temp;
        //Si solo hay un nodo
        if(ini==fin && !estaVacia()){
            temp = fin->dat;
            delete fin;
            fin = NULL;
            ini = NULL;
        }
        else{//Si hay mas de un nodo
            //Se busca el penultimo
            aux = ini;
            while(aux->sig!=fin)
                aux=aux->sig;
            temp = fin->dat;
            delete fin;
            fin=aux;
            fin->sig=NULL;
        }
        return temp;
    };
    bool eliminaNodo(int d){
        if(ini->dat==d){//Si esta al inicio
            eliminaAlInicio();
            return true;
        }
        else if(fin->dat==d){//Si esta al final
            eliminaAlFinal();
            return true;
        }
        else if(ini==fin)//Si solo hay un nodo y no es el deseado
            return false;
        else{
            Nodo* aux1;
            Nodo* aux2;
            //Se busca con dos apuntadores
            aux1=ini;
            aux2=ini->sig;
            while(aux2!=fin && aux2->dat!=d){//Si se encuentra o se llega al final, para de buscarlo
                aux1=aux2;
                aux2=aux2->sig;
            }

            if(aux2==fin)//Si se llega al final, no estuvo
                return false;
            else{//Si no se llega al final, se encontro y se elimina
                aux1->sig = aux2->sig;
                delete aux2;
                return true;
            }
        }
    };
    void insertaOrdenadamente(int d){
        //Tarea
    };
};
#endif // LISTASIMPLE_H
