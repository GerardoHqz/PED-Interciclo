/*
   #2. Se le pide que cree un programa donde este tenga un arreglo quemado o dado por el usuario,
   en el cual debe recorrerlo y encontrar el el mayor numero del arreglo
*/

#include <iostream>

using namespace std;

int main(){
    int array[5] = {1,2,20,4,5}, mayor=0;

    for(int i=0; i<5; i++){
        if(array[i] > mayor)
            mayor = array[i];
    }

    cout<<"El numero mayor es: "<<mayor;

    return 0;
}