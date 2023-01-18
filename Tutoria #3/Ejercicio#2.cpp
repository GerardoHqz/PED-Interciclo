// #2. Dada una cadena de caracteres que ha sido ingresada por el usuario. 
// Crear una función que devuelva la posición de un carácter específico dentro de la cadena, 
// utilizando punteros.

#include <iostream>
#include <cstring>

using namespace std;

int searchCharacter(char *,char);

int main(){
    char word[20], search;

    cout<<"Digite una palabra: ";
    cin>>word;
    cout<<"Que caracter desea buscar: ";
    cin>>search;
    cout<<"La poisicon del caracter "<<search<<" es: "<<searchCharacter(word,search);

    return 0;
}

int searchCharacter(char *word,char search){
    int size = strlen(word);
    int position = 0;

    for(int i = 0; i < size; i++){
        if(word[i] == search){
            position = i;
            i = size;
        }
    }

    return position+1;
}