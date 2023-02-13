
// #2 Se le solicita realizar un programa para poder cobrar a los 
// clientes, donde por cada cliente pedirá su nombre y el monto a 
// cobrar, el programa debe tener la opción de ingresar el nombre de 
// un cliente para registrarlo y la opción de cobrar cliente y tener una 
// opcion para ver todos los clientes en cola.

#include <iostream>
#include <queue>
#include <string>

using namespace std;

struct Cliente{
    string nombre;
    float monto;
};

void showQueue(queue<Cliente>);

int main(){
    //inicializando cola
    queue<Cliente> cola;
    Cliente client, clone;
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
                cola.push(client);
                cout<<"Cliente agregado a la cola\n";
                break;
            case 2: 
                if(cola.empty())
                    cout<<"No hay clientes en la cola\n";
                else{
                    client = cola.front();
                    cout<<"Cliente "<<client.nombre<<"\n";
                    cout<<"Monto a cobrar: $"<<client.monto<<"\n";
                    cout<<"Cliente cobrado\n";
                    cola.pop();
                }
                break;
            case 3:
                showQueue(cola);
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

void showQueue(queue<Cliente> cola){
    queue<Cliente> clone = cola;
    while(!clone.empty()){
        cout<<"Cliente: "<<clone.front().nombre<<"\n";
        clone.pop();
    }
    cout<<"\n";
}