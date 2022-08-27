#include <iostream>
using namespace std;

int main(void){
    int a;//Declaracion de una variable
    int* ptr1;//Declaracion de un apuntador a un espacio que guarda un int

    a=5;
    ptr1=&a;

    cout << "a\t= " << a << endl;//Contenido en a
    cout << "&a\t= " << &a << endl;//Direccion de a
    cout << "ptr1\t= " << ptr1 << endl;//Contenido en ptr1
    cout << "&ptr1\t= " << &ptr1 << endl;//Direccion de ptr1
    cout << "*ptr1\t= " << *ptr1 <<endl << endl;//ptr1, tienes una direccion,
                                              //ve a ella y usa el dato contenido ahi

    float b;//Declaracion de una variable
    float* ptr2;//Declaracion de un apuntador a un espacio que guarda un float

    b=6.7;
    ptr2=&b;

    cout << "b\t= " << b << endl;//Contenido en a
    cout << "&b\t= " << &b << endl;//Direccion de a
    cout << "ptr2\t= " << ptr2 << endl;//Contenido en ptr2
    cout << "&ptr2\t= " << &ptr2 << endl;//Direccion de ptr2
    cout << "*ptr2\t= " << *ptr2 <<endl << endl;//ptr2, tienes una direccion,
                                                //ve a ella y usa el dato contenido ahi

    long c;//Declaracion de una variable
    long* ptr3;//Declaracion de un apuntador a un espacio que guarda un long

    c=8;
    ptr3=&c;

    cout << "c\t= " << c << endl;//Contenido en a
    cout << "&c\t= " << &c << endl;//Direccion de a
    cout << "ptr3\t= " << ptr3 << endl;//Contenido en ptr3
    cout << "&ptr3\t= " << &ptr3 << endl;//Direccion de ptr3
    cout << "*ptr3\t= " << *ptr3 <<endl << endl;//ptr3, tienes una direccion,
                                                //ve a ella y usa el dato contenido ahi

    double d;//Declaracion de una variable
    double* ptr4;//Declaracion de un apuntador a un espacio que guarda un double

    d=9.87;
    ptr4=&d;

    cout << "d\t= " << d << endl;//Contenido en a
    cout << "&d\t= " << &d << endl;//Direccion de a
    cout << "ptr4\t= " << ptr4 << endl;//Contenido en ptr4
    cout << "&ptr4\t= " << &ptr4 << endl;//Direccion de ptr4
    cout << "*ptr4\t= " << *ptr4 <<endl << endl;//ptr4, tienes una direccion,
                                                //ve a ella y usa el dato contenido ahi

    return 0;
}
