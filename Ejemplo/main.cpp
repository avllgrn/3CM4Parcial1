#include <iostream>
#include <stdlib.h>
#include "PilaInt.h"
using namespace std;

int main(void){
    PilaInt P;
    int n, b;

    //1. Ingresar dato
    cout << "Ingresa numero ";
    cin >> n;
    b = n;

    //2. Convertir a binario n
    do{
        P.push(b%2);//Ingresar a la Pila cada residuo
        b = b/2;
    }while(b>0);

    //3. Mostrar Pila B
    cout<<endl<<n<<" = ";
    while(!P.estaVacia())//Mostrar la pila, que guarda la conversion invertidamente
        cout<<P.pop();
    cout<<endl<<endl;

    return 0;
}
