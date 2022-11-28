#include <iostream>
#include "Cola.h"
using namespace std;

int main(void){
    Cola C;

    cout<< "Inicio de main "<<endl<<endl;
    C.push(1);
    C.push(3);
    C.push(5);
    C.push(7);
    C.push(9);
    cout<< "Fin de main "<<endl<<endl;

    return 0;
}
