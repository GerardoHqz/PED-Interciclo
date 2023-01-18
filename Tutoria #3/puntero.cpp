#include <iostream>

using namespace std;

int main(){

    int a = 5;
    int *p;

    //Manera de obtener la direccion de memoria
    p = &a;
    cout<<"Direccion: "<<p;

    *p = a;
    cout<<"\nDireccion: "<<p;

    //obtener el dato de un puntero
    cout<<"El dato de a es :"<<*p;

    //casos que no se pueden realizar
    //p = a;
    //*p = &a;

    return 0;
}