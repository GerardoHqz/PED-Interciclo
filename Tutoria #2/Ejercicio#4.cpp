/*
    #1 . Cree una funcion la cual solicita dos numeros al usuario y en una funcion
    realize una suma
*/


#include <iostream>

using namespace std;

//Prototipos de funciones
int suma(int,int);

int main(){

    int A = 0, B = 0;

    cout<<"Ingrese el numero A: ";
    cin>>A;
    cout<<"Ingrese el numero B: ";
    cin>>B;

    cout<<"\nLa suma de "<<A<<"+"<<B<<" es: "<<suma(A,B);

    return 0;
}

//Desarollo de la funcion
int suma(int A,int B){

    int suma = A + B;

    return suma;
}
