// Construir una función recursiva que calcule la suma de los n primeros números naturales.
// suma(n) = 1 , n=1 -----> caso base o condicion de corte
// suma(n) = n + suma(n-1) , n>1 -----> caso recursivo

#include <iostream>

using namespace std;

int suma(int);

int main(){

    int number = 0;
    cout<<"Ingrese el numero natural hasta donde desea sumar: ";
    cin>>number;

    cout<<"La suma de los numeros naturales es: "<<suma(number);


    return 0;
}

//funcion recursiva
int suma(int number){
    if(number == 1){
        return 1;
    }
    else{
        return number + suma(number - 1);
    }

    //10+9+8+7+6+5+4+3+2+1 = n
    /*
        10 + (10-9) + (9-1) + ...... 1
    */

}