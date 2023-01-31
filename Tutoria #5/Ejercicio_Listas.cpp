/*Ejercicio 2: Crear una lista que almacene "n" números reales  y calcular su suma y promedio.*/
#include <iostream>

struct Nodo{
	float dato;
	Nodo *siguiente;	
};

using namespace std;

void insertarLista(Nodo *&,float);
void mostrarLista(Nodo *);
void calcularSumaPromedio(Nodo *);

int main(){
    //declarar la lista
    Nodo *lista = NULL;
    float dato;
    char option;

    do{
        cout<<"Ingrese un numero: ";
        cin>>dato;
        insertarLista(lista,dato);
        cout<<"Desea ingresar otro numero? (s/n): ";
        cin>>option;
    }while(option == 's' || option == 'S');

    cout<<"\nMostrando la lista completa: ";
    mostrarLista(lista);

    //funcion calcular sumna y promedio
    calcularSumaPromedio(lista);

    return 0;
}

void insertarLista(Nodo *&lista,float n){
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;
    Nodo *aux1 = lista;
    Nodo *aux2;

    while((aux1 != NULL) && (aux1->dato < n)){
        aux2 = aux1;
        aux1 = aux1->siguiente;
    }

    if(lista == aux1){
        lista = nuevo_nodo;
    }
    else{
        aux2->siguiente = nuevo_nodo;
    }
    nuevo_nodo->siguiente = aux1;
    cout<<"\tElemento "<<n<<" insertado correctamente"<<endl;
}

void mostrarLista(Nodo *lista){
    Nodo *actual = new Nodo();
    actual = lista;
    while(actual != NULL){
        cout<<actual->dato<<" -> ";
        actual = actual->siguiente;
    }
}

void calcularSumaPromedio(Nodo *lista){
    float suma = 0, promedio = 0;
    int contador = 0;

    while(lista != NULL){
        suma += lista->dato;
        contador++; //para saber cuantos numeros tenemos en la lista
        lista = lista->siguiente;
    }

    promedio = suma / contador;

    cout<<"\nLa suma de los elementos de la lista es: "<<suma<<endl;
    cout<<"El promedio de los elementos de la lista es: "<<promedio<<endl;
}