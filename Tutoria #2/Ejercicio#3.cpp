/*
    3. Hacer un programa en el cual el usuario introduzca una serie de caracteres en una arreglo, luego
	el usuario debe escribir una palabra y el programa le devolvera en que posicion se encuentra
	si no es encontrada la palabra notificarlo al usuario
*/

#include <iostream>

using namespace std;

int main(){

    char array[5], date;
    bool band = true;

    //Pidiendo datos
    for(int i = 0; i < 5; i++){
        cout<<"Ingrese un caracter: ";
        cin>>array[i];
        cout<<endl;
    }

    cout<<"Que caracter desea buscar: ";
    cin>>date;

    //Buscando caracter
    for(int i = 0; i < 5; i++){
        if(array[i] == date){
            cout<<"\nEl caracter "<<date<<" se encuentra en la posicion "<<i+1<<endl;
            i = 5;
            band = true;
        }
        else
            band = false;
    }

    if(!band)  //band == false
        cout<<"El caracter "<<date<<" no se encontro";

    return 0;
}