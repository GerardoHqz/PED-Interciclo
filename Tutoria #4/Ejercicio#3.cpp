//Crear una lista donde se le solicite al usuario ingresar una n cantidad de numeros hasta
//que el quiera luego buscar un numero en especifico e imprimir si se encontro o no
#include<iostream>
#include<conio.h>


using namespace std;


struct Nodo{
	int dato;
	Nodo *siguiente;	
};

void insertarLista(Nodo *&,int);
void buuscarNodo(Nodo *,int);

int main(){
    Nodo *lista = NULL;
    int dato, search;
    char option;

    do{
        cout<<"Digite un numero: ";
        cin>>dato;
        insertarLista(lista,dato);
        cout<<"Desea ingresar otro elemento (s/n): ";
        cin>>option;
    }while(option == 's' || option == 'S');

    cout<<"Ingrese un numero a buscar: ";
    cin>>search;

    buuscarNodo(lista,search);

    return 0;
}

void insertarLista(Nodo *&lista,int n){
	Nodo *nuevo_nodo = new Nodo();
	Nodo *aux;
	
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = NULL;
	
	if(lista == NULL){//lista vacia
		lista = nuevo_nodo;
	}
	else{
		aux = lista; //aux señala el inicio de la lista
		while(aux->siguiente != NULL){ //recorremos la lista
			aux = aux->siguiente;
		}
		aux->siguiente = nuevo_nodo;
	}
	cout<<"\tElemento "<<n<<" insertado a lista correctamente\n";
}

void buuscarNodo(Nodo *lista,int n){
    bool band = false;
    
    Nodo *actual = new Nodo();
    actual = lista;
    
    while((actual != NULL)){
        if(actual->dato == n){
            band = true;
        }
        actual = actual->siguiente;
    }
    
    if(band == true){
        cout<<"El elemento "<<n<<" si se encuentra en la lista";
    }
    else{
        cout<<"El elemento "<<n<<" no se encuentra en la lista";
    }
}