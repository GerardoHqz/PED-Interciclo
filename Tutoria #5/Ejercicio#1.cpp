// #1.  Calcular los productos de dos arreglos de un mismo tamaño n, luego verificar si un producto es par o 
// impar. Por último, almacenar los pares e impares en dos pilas diferentes y mostrar en consola los valores de 
// cada pila. Los arreglos iniciales pueden hacerse de manera quemada o dinámica pidiéndole al usuario que ingrese 
// los n valores para ambos arreglos
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

int main(){
    //creacion de pila par
    Pilas stackPar;
    inicializar(&stackPar);
    //creacion de pila impar
    Pilas stackImpar;
    inicializar(&stackImpar);

    //pidiendo datos
    int cant = 0, array1[15],array2[15],arrayProducto[15];
    cout<<"Ingrese la cantidad de datos que desea ingresar: ";
    cin>>cant;

    for(int i = 0; i < cant; i++){
        cout<<"Ingrese el dato ["<<i+1<<"] del arreglo #1: ";
        cin>>array1[i];
    }

    for(int i = 0; i < cant; i++){
        cout<<"Ingrese el dato ["<<i+1<<"] del arreglo #2: ";
        cin>>array2[i];
    }

    //calculando producto
    for(int i = 0; i < cant; i++){
        arrayProducto[i] = array1[i] * array2[i];
        if(arrayProducto[i] % 2 == 0){
            push(&stackPar,arrayProducto[i]);
        }
        else{
            push(&stackImpar,arrayProducto[i]);
        }
    }

    //mostrando pila par
    cout<<"Pila par: ";
    showstack(&stackPar);
    cout<<endl;
    //mostrando pila impar
    cout<<"Pila impar: ";
    showstack(&stackImpar);

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
