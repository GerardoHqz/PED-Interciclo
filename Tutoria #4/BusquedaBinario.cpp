#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int main(){

    int array[10] = {10,20,30,40,50,60,70,80,90,100};

    int inferior = 0, superior = 10, medio = 0, cont=0, buscado = 0;
    bool band = false;

    cout<<"Ingrese el numero a buscar (1-10): "; 
    cin>>buscado;

    while((inferior <= superior) && (cont < 10)){
        medio = (inferior + superior)/2;

        if(array[medio] == buscado){
            band = true;
            break;
        }
        else if(array[medio] > buscado){
            superior = medio - 1;
        }
        else{
            inferior = medio + 1;
        }

        cont++;
    }

    if(band){
        cout<<"El numero "<<buscado<<" se encuentra en la posicion "<<medio+1<<endl;
    }
    else{
        cout<<"El numero "<<buscado<<" no se encuentra en el arreglo"<<endl;
    }

    system("pause");
    system("cls");

    return 0;
}