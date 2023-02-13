#include <iostream>
//llamando libreria de colas
//pilas: <stack>
//listas: <vector> 
#include <queue>

using namespace std;

void ShowQueue(queue<int>);

int main(){
    //declarando cola
    queue<int> cola;
    int dato = 0,option = 0;
    bool status = true;

    do{
        cout<<"1. Ingresar elemento a la cola\n";
        cout<<"2. Sacar elemento de la cola\n";
        cout<<"3. Mostrar elementos de la cola\n";
        cout<<"4. Salir\n";
        cout<<"Ingrese una opcion: ";
        cin>>option;
        cout<<"\n";

        switch(option){
            case 1:
                cout<<"Ingrese un elemento: ";
                cin>>dato;
                cola.push(dato);
                break;
            case 2:
                cola.pop();
                break;
            case 3:
                ShowQueue(cola);
                break;
            case 4:
                status = false;
                break;
            default:
                cout<<"Opcion invalida\n";
                break;
        };
    }while(status);

    return 0;
}

void ShowQueue(queue<int> cola){
    queue<int> clone = cola;
    while(!clone.empty()){
        cout<<clone.front()<<" ";
        clone.pop();
    }
    cout<<"\n";
}