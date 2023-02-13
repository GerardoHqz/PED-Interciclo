#include <iostream>

using namespace std;

struct Cliente{
    string nombre;
    float monto;
};

struct Nodo{
    Cliente elemento;
    Nodo* siguiente;
};

struct Cola{
    Nodo* frente;
    Nodo* final;
};

void initialize(Cola*);
bool empty(Cola*);
void push(Cola*,Cliente);
void pop(Cola*);
void ShowQueue(Cola*);

Cliente client, clone;
int main(){
    //inicializando cola
    Cola cola;
    int option = 0;
    bool status = true;

    do{
        cout<<"****MENU****\n";
        cout<<"1. Ingresar cliente a la cola\n";
        cout<<"2. Cobrar cliente\n";
        cout<<"3. Mostrar todos los clientes en cola\n";
        cout<<"4. Salir\n";
        cout<<"Ingrese una opcion: ";
        cin>>option;

        switch(option){
            case 1: 
                cin.ignore();
                cout<<"Ingrese el nombre del cliente: ";
                getline(cin,client.nombre);
                cout<<"Ingrese el monto a cobrar: ";
                cin>>client.monto;
                push(&cola,client);
                cout<<"Cliente agregado a la cola\n\n";
                break;
            case 2: 
                if(empty(&cola))
                    cout<<"No hay clientes en la cola\n";
                else{
                    client = cola.frente->elemento;
                    cout<<"Cliente "<<client.nombre<<"\n";
                    cout<<"Monto a cobrar: $"<<client.monto<<"\n";
                    cout<<"Cliente cobrado\n";
                    pop(&cola);
                }
                break;
            case 3:
                ShowQueue(&cola);
                break;
            case 4:
                status = false;
                break;
            default:
                cout<<"Opcion no valida\n";
                break;
        }
    }while(status);

    return 0;
}

void initialize(Cola *queue){
    queue->frente = NULL;
    queue->final = NULL;
}

bool empty(Cola *queue){
    return(queue->frente == NULL) ? true:false;
}

void push(Cola *queue, Cliente dato){
    Nodo *aux = new Nodo;
    aux->elemento = dato;
    aux->siguiente = NULL;

    if(queue->final == NULL){
        queue->frente = aux;
    }
    else{
        (queue->final)->siguiente = aux;
    }     
    queue->final = aux;
}

void pop(Cola *queue){
    if(empty(queue)){
        cout<<"Underflow!\n";
        return;
    }
    Nodo *aux = queue->frente;
    queue->frente = aux->siguiente;
    
    if(queue->frente == NULL){
        queue->final = NULL;
    }
    delete(aux);
}

void ShowQueue(Cola *queue){
    Nodo *aux = queue->frente;
    if(empty(queue)){
        cout<<"La cola esta vacia\n";
    }
    else{
        while(aux){
            cout<<aux->elemento.nombre<<" ";
            aux = aux->siguiente;
        }
    }
    cout<<endl;
}


