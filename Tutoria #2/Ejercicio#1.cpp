/*
   #1. Realizar un programa que cuente con un arreglo que almacene 5 numeros quemados,
	luego mostrar el arreglo multiplicado por dos cada numero del arreglo.
*/

#include <iostream>

using namespace std;

int main(){
    int array[5] = {1,2,3,4,5};

    for(int i=0; i<5;i++){
        array[i] *= 2;   //array[i] = array[i] * 2;
        cout<<"Numero ["<<i<<"]: "<<array[i]<<endl;
    }

}


