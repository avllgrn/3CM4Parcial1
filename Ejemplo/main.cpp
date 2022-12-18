#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "ListaSimple.h"
using namespace std;

int main(void){
    ListaSimple L;
    int x;
    srand(time(NULL));
    for(int i=0;i<5;i++)
        L.insertaAlInicio(rand()%10);
    L.muestraLista();cout<<endl<<endl;


    while(!L.estaVacia()){
        cout<<"A quien quieres eliminar ";
        cin>>x;
        if(L.eliminaNodo(x))
            cout<<"SE elimino: ";
        else
            cout<<"NO se elimino: ";
        L.muestraLista();cout<<endl<<endl;
    }

    return 0;
}
