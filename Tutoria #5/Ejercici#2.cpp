// #2 Elabore una función que reciba una pila y la devuelva con los elementos colocados de forma inversa.

#include <iostream>
#include <string>

using namespace std;

struct nodo{
    int dato;
    nodo *siguiente;
};
typedef nodo *Pilas;

void inicializar(Pilas *);
bool Empty(Pilas *);
void push(Pilas *,int);
void pop(Pilas *);
void showstack(Pilas *);
void showstackInvertida(Pilas *);

int main(){
    Pilas stack;
    inicializar(&stack);

    int dato = 0;

    cout<<"Ingrese los datos de la pila (ingrese una letra para finalizar): \n";

    do{
        cout<<"Ingrese un dato: ";
        cin>>dato;
        push(&stack,dato);
    }while(dato != 0);

    //Mostrarndo pila normal
    cout<<"Pila normal: ";
    showstack(&stack);

    //Mostrando pila invertida
    cout<<"\nPila invertida: ";
    showstackInvertida(&stack);
    return 0;
}

void inicializar(Pilas *stack){
    *stack = NULL;
}

bool Empty(Pilas *stack){
    return *stack == NULL;
}

void push(Pilas *stack,int n){
    nodo *AuxNodo = new nodo(); //new: palabra reservada para guardar espacio en memoria
    AuxNodo ->dato = n;         
    AuxNodo->siguiente = *stack;
    *stack = AuxNodo;
}

void pop(Pilas *stack){
    if(!Empty(stack)){
        nodo *aux = *stack;
        *stack = (*stack)->siguiente;
        delete aux; // delete: palabra reservada para liberar espacio en memoria
    }
    else{
        return;
    }
}

void showstack(Pilas *stack){
    nodo *clone = *stack;
    bool isEmpty = false;
    while(!isEmpty){
        if(!Empty(&clone)){
            cout<<clone->dato<<" , ";
            clone = clone->siguiente;
        }
        else{
            isEmpty = true;
        }
    }
}

void showstackInvertida(Pilas *stack){
    nodo *clone = *stack;
    nodo *invertida = NULL;
    int dato = 0;
    bool isEmpty = false;

    //rellenando la pila invertida
    while(!isEmpty){
        if(!Empty(&clone)){
            dato = clone->dato;
            push(&invertida,dato);
            clone = clone->siguiente;
        }
        else{
            isEmpty = true;
        }
    }

    while (!Empty(&invertida)){
        cout<<invertida->dato<<" , ";
        pop(&invertida);
    }
    
}