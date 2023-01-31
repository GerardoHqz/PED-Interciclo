// #1.  Calcular los productos de dos arreglos de un mismo tamaño n, luego verificar si un producto es par o 
// impar. Por último, almacenar los pares e impares en dos pilas diferentes y mostrar en consola los valores de 
// cada pila. Los arreglos iniciales pueden hacerse de manera quemada o dinámica pidiéndole al usuario que ingrese 
// los n valores para ambos arreglos

#include <iostream>
//libreria para llamar pilas
#include <stack>

using namespace std;

void showStack(stack<int>);

int main(){

    //inicializar y crear pilas
    stack<int> stackPar;
    stack<int> stackImpar;

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

    cout<<"calculando producto... y separando pares e impares...."<<endl;
    for(int i = 0;i < cant; i++){
        //realizamos el producto
        arrayProducto[i] = array1[i] * array2[i];
        if(arrayProducto[i] % 2 == 0)
            stackPar.push(arrayProducto[i]);
        
        else
            stackImpar.push(arrayProducto[i]);
        
    }

    //mostrando pila par
    cout<<"Pila par: ";
    showStack(stackPar);
    cout<<endl<<endl;
    //mostrando pila impar
    cout<<"Pila impar: ";
    showStack(stackImpar);

    return 0;
}

void showStack(stack<int> stacks){
    stack<int>clone = stacks;

    while(!clone.empty()){
        cout<<clone.top()<<" ";
        clone.pop();
    }
}