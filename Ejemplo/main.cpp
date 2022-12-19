#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "ListaSimple.h"
using namespace std;

int main(void){
    ListaSimple L1;
    ListaSimple L2;
    ListaSimple L3;
    int x;
    srand(time(NULL));
    system("cls");

    cout<<endl<<"Insercion al inicio"<<endl;
    //Se inserta, en tres listas al inicio, datos aleatorios
    for(int i=0;i<3;i++){
        x = rand()%100;
        L1.insertaAlInicio(x);
        cout<<"Se inserta "<<x<<"\tal inicio en L1 : ";L1.muestraLista();cout<<endl;
        x = rand()%100;
        L2.insertaAlInicio(x);
        cout<<"Se inserta "<<x<<"\tal inicio en L2 : ";L2.muestraLista();cout<<endl;
        x = rand()%100;
        L3.insertaAlInicio(x);
        cout<<"Se inserta "<<x<<"\tal inicio en L3 : ";L3.muestraLista();cout<<endl<<endl;
    }

    cout<<endl<<"Insercion al final"<<endl;
    //Se inserta, en tres listas al final, datos aleatorios
    for(int i=0;i<3;i++){
        x = rand()%100;
        L1.insertaAlFinal(x);
        cout<<"Se inserta "<<x<<"\tal final en L1 : ";L1.muestraLista();cout<<endl;
        x = rand()%100;
        L2.insertaAlFinal(x);
        cout<<"Se inserta "<<x<<"\tal final en L2 : ";L2.muestraLista();cout<<endl;
        x = rand()%100;
        L3.insertaAlFinal(x);
        cout<<"Se inserta "<<x<<"\tal final en L3 : ";L3.muestraLista();cout<<endl<<endl;
    }

    cout<<endl<<"Insercion ordenada, en listas desordenadas (NO SIRVE)"<<endl;
    //Si despues de insertar desordenadamente,intenta insertarse ordenadamente,
    //NO SERVIRA insertaOrdenadamente()
    for(int i=0;i<3;i++){
        x = rand()%100;
        L1.insertaOrdenadamente(x);
        cout<<"Se inserta "<<x<<"\tordenadamente en L1 : ";L1.muestraLista();cout<<endl;
        x = rand()%100;
        L2.insertaOrdenadamente(x);
        cout<<"Se inserta "<<x<<"\ttordenadamente en L2 : ";L2.muestraLista();cout<<endl;
        x = rand()%100;
        L3.insertaOrdenadamente(x);
        cout<<"Se inserta "<<x<<"\ttordenadamente en L3 : ";L3.muestraLista();cout<<endl<<endl;
    }

    system("pause");
    system("cls");
    //Para que sirva insertaOrdenadamente(), las listas deben iniciar vacias
    //y DEBE usarse SIREMPRE y SOLAMENTE insertaOrdenadamente()
    cout<<endl<<"Insercion ordenada, en listas vacias"<<endl;
    L1.vaciaLista();
    L2.vaciaLista();
    L3.vaciaLista();
    cout<<"L1: ";L1.muestraLista();cout<<endl;
    cout<<"L2: ";L2.muestraLista();cout<<endl;
    cout<<"L3: ";L3.muestraLista();cout<<endl<<endl;
    for(int i=0;i<9;i++){
        x = rand()%100;
        L1.insertaOrdenadamente(x);
        cout<<"Se inserta "<<x<<"\tordenadamente en L1 : ";L1.muestraLista();cout<<endl;
        x = rand()%100;
        L2.insertaOrdenadamente(x);
        cout<<"Se inserta "<<x<<"\tordenadamente en L2 : ";L2.muestraLista();cout<<endl;
        x = rand()%100;
        L3.insertaOrdenadamente(x);
        cout<<"Se inserta "<<x<<"\tordenadamente en L3 : ";L3.muestraLista();cout<<endl<<endl;
    }

    system("pause");
    system("cls");
    //O puede compiarse una lista en otra
    cout<<endl<<"Listas desordenadas"<<endl<<endl;
    for(int i=0;i<3;i++){
        L1.insertaAlInicio(rand()%100);
        L2.insertaAlInicio(rand()%100);
        L3.insertaAlInicio(rand()%100);
    }

    cout<<"L1: ";L1.muestraLista();cout<<endl;
    cout<<"L2: ";L2.muestraLista();cout<<endl;
    cout<<"L3: ";L3.muestraLista();cout<<endl<<endl;

    cout<<endl<<"Se copia L1 en L2. Y se copia ordenadamente L1 en L3"<<endl<<endl;
    L2.copiaLista(L1);
    L3.copiaOrdenadamente(L1);
    cout<<"L1: ";L1.muestraLista();cout<<endl;
    cout<<"L2: ";L2.muestraLista();cout<<endl;
    cout<<"L3: ";L3.muestraLista();cout<<endl<<endl;

    return 0;
}
