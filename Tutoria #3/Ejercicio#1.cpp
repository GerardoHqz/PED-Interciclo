//#1. Escribir un programa en C++ que reciba una cadena de caracteres, luego escribir 
// una función que reciba la dirección de inicio de la cadena y devuelva el número de vocales 
// que hay en la cadena.
#include <iostream>
#include <cstring>
#include <stdlib.h>

using namespace std;

//Prototipo de funciones
int countVowels(char *);

int main(){

    char word[20];

    cout<<"Digite una palabra: ";
    cin>>word;
    cout<<"La cantidad de vocales es: "<<countVowels(word);

    return 0;
}

int countVowels(char *word){
    int cont = 0;
    char aux = *word;

    for(int i=0;i<strlen(word);i++){
        if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u')
            cont++;
    }

    return cont;
}