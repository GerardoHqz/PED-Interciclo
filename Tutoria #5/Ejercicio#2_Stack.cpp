// #2 Elabore una función que reciba una pila y la devuelva con los elementos colocados de forma inversa.
#include <iostream>
#include <stack>

using namespace std;

void showStack(stack<int>);
void showStackInvert(stack<int>);

int main(){

    stack<int> pila;
    int dato = 0;

    cout<<"Ingrese los datos de la pila (ingrese una letra para finalizar): "<<endl;

    do{
        cout<<"Ingrese un dato: ";
        cin>>dato;
        pila.push(dato);
    }while(dato != 0);

    //Mostrarndo pila normal
    cout<<"Pila normal: ";
    showStack(pila);

    //Mostrando pila invertida
    cout<<endl<<"Pila invertida: ";
    showStackInvert(pila);

    return 0;
}

void showStack(stack<int> stacks){
    stack<int>clone = stacks;

    while(!clone.empty()){
        cout<<clone.top()<<" ";
        clone.pop();
    }
}

void showStackInvert(stack<int> stacks){
    stack<int>clone = stacks;
    stack<int>invertida;
    int dato = 0;

    while(!clone.empty()){
        dato = clone.top();
        invertida.push(dato);
        clone.pop();
    }

    while(!invertida.empty()){
        cout<<invertida.top()<<" ";
        invertida.pop();
    }
}