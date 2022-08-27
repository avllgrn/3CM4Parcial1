#include <iostream>
using namespace std;

class Nodo{
private:
    int dato;
    Nodo* sig;
public:
    Nodo(void);
    Nodo(int d, Nodo* s);
    void muestraDatos(void);
    void muestraDato(void);
    void pideDatos(void);
    int dameDato(void);
    void modificaDato(int d);
    Nodo* dameSig(void);
    void modificaSig(Nodo* s);
};
Nodo::Nodo(void){
    dato = 0;
    sig = NULL;
}
Nodo::Nodo(int d, Nodo* s){
    dato = d;
    sig = s;
}
void Nodo::muestraDatos(void){
    cout << "|" << dato << "|";
    if(sig == NULL)
        cout<< "NULL|";
    else
        cout<< " -> " << sig << "| ";
}
void Nodo::muestraDato(void){
    cout << "|" << dato << "|";
    if(sig != NULL)
        cout<< " -> ";
}
void Nodo::pideDatos(void){
    cout<<"Dame mi dato: ";cin>>dato;
}

int Nodo::dameDato(void){
    return dato;
}
void Nodo::modificaDato(int d){
    dato = d;
}
Nodo* Nodo::dameSig(void){
    return sig;
}
void Nodo::modificaSig(Nodo* s){
    sig = s;
}

int main(void){
    Nodo* ptr;  //Declaracion de un apuntador a un objeto tipo Nodo

    ptr = new Nodo();       //Instacia de objeto tipo Nodo,
                            //dinamicamente creado

    cout << "ptr\t= " << ptr << endl;   //Direccion contenida en el apuntador
    cout << "&ptr\t= " << &ptr << endl; //Direccion del apuntador
    ptr->muestraDatos();                //Invocacion de un metodo del objeto dinamicamente instanciado,
                                        //usando el apuntador

    delete ptr; //Liberacion de memoria del objeto dinamicamente instanciado

    return 0;
}
