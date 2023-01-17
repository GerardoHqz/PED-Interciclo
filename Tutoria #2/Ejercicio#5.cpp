/*
    #2. Crea un programa donde se solicite el nombre del usuario y en una funcion
    debera mostrar un mensaje saludando al usuario con su nombre
*/

#include <iostream>

using namespace std;

//Prototipo de funcion
void Welcome(string);

int main(){
    string name;

    cout<<"Dime tu nombre: ";
    cin>>name;

    //Llamando a la funcion
    Welcome(name);

    return 0;
}

void Welcome(string name){
    cout<<"\nBienvenido "<<name; 
}