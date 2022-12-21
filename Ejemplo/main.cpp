#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "ListaDoble.h"
using namespace std;

int main(void){
    srand(time(NULL));
    int x;

    //Prueba de Constructor
    ListaDoble L;

    //Prueba de estaVacia()
    if(L.estaVacia())
        cout<<"Esta vacia"<<endl<<endl;
    else
        cout<<"NO esta vacia"<<endl<<endl;
    system("pause");
    system("cls");

    //Prueba de insertaAlInicio(), muestraAscendentemente()
    cout<<"Inserta al inicio"<<endl<<endl;
    for(int i=1;i<=5; i++){
        L.insertaAlInicio(rand()%100);
        cout<<"ini a fin: ";L.muestraAscendentemente();cout<<endl<<endl;
    }
    cout<<endl;
    system("pause");
    system("cls");

    //Prueba de eliminaAlInicio()
    cout<<"Elimina al inicio"<<endl<<endl;
    cout<<"ini a fin: ";L.muestraAscendentemente();cout<<endl<<endl;

    for(int i=1;i<=5; i++){
        L.eliminaAlInicio();
        cout<<"ini a fin: ";L.muestraAscendentemente();cout<<endl<<endl;
    }
    cout<<endl;
    system("pause");
    system("cls");

    //Prueba de insertaAlFinal(), muestraDescendentemente()
    cout<<"Inserta al final"<<endl<<endl;
    for(int i=1;i<=5; i++){
        L.insertaAlFinal(rand()%100);
        cout<<"ini a fin: ";L.muestraAscendentemente();cout<<endl;
        cout<<"fin a ini: ";L.muestraDescendentemente();cout<<endl<<endl;
    }
    system("pause");
    system("cls");

    //Prueba de eliminaAlFinal()
    cout<<"Elimina al final"<<endl<<endl;
    cout<<"ini a fin: ";L.muestraAscendentemente();cout<<endl;
        cout<<"fin a ini: ";L.muestraDescendentemente();cout<<endl<<endl;

    for(int i=1;i<=5; i++){
        L.eliminaAlFinal();
        cout<<"ini a fin: ";L.muestraAscendentemente();cout<<endl;
        cout<<"fin a ini: ";L.muestraDescendentemente();cout<<endl<<endl;
    }
    system("pause");
    system("cls");

    //Prueba de vaciaLista()
    cout<<"Vacia la lista"<<endl<<endl;
    for(int i=1;i<=5; i++)
        L.insertaAlInicio(rand()%100);
    cout<<"ini a fin: ";L.muestraAscendentemente();cout<<endl;
    cout<<"fin a ini: ";L.muestraDescendentemente();cout<<endl<<endl;
    L.vaciaLista();
    cout<<"ini a fin: ";L.muestraAscendentemente();cout<<endl;
    cout<<"fin a ini: ";L.muestraDescendentemente();cout<<endl<<endl;
    system("pause");
    system("cls");

    //Prueba de buscaDato() que manda llamar a buscaNodo()
    for(int i=1;i<=5; i++)
        L.insertaAlInicio(rand()%100);
    cout<<"ini a fin: ";L.muestraAscendentemente();cout<<endl;
    cout<<"fin a ini: ";L.muestraDescendentemente();cout<<endl<<endl;
    cout<<"Que dato buscas qu SI este? ";cin>>x;
    if(L.buscaDato(x))
        cout<<"ESTA el dato"<<endl<<endl;
    else
        cout<<"NO esta el dato"<<endl<<endl;

    cout<<"Que dato buscas que NO este? ";cin>>x;
    if(L.buscaDato(x))
        cout<<"ESTA el dato"<<endl<<endl;
    else
        cout<<"NO esta el dato"<<endl<<endl;
    system("pause");
    system("cls");

    //Prueba de eliminaNodo() que manda llamar a buscaNodo()
    cout<<"Elimina los datos, hasta dejar vacia la lista"<<endl<<endl;
    while(!L.estaVacia()){
        cout<<"ini a fin: ";L.muestraAscendentemente();cout<<endl;
        cout<<"fin a ini: ";L.muestraDescendentemente();cout<<endl<<endl;
        cout<<"Que dato quieres eliminar (existente o inexistente)? ";cin>>x;
            if(L.eliminaNodo(x))
                cout<<"Eliminado"<<endl<<endl;
            else
                cout<<"NO eliminado"<<endl<<endl;
        cout<<"ini a fin: ";L.muestraAscendentemente();cout<<endl;
        cout<<"fin a ini: ";L.muestraDescendentemente();cout<<endl<<endl;
    }
    system("pause");
    system("cls");

    //Prueba de Destructor
    for(int i=1;i<=5; i++)
        L.insertaAlInicio(rand()%100);
    cout<<"ini a fin: ";L.muestraAscendentemente();cout<<endl;
    cout<<"fin a ini: ";L.muestraDescendentemente();cout<<endl<<endl;
    cout<<"Fin de Programa. Destructor:"<<endl<<endl;

    return 0;
}
