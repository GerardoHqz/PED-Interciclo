//ALGORITMO ORDENAMIENTO POR INSERCCION
#include<iostream>
#include<conio.h>
 
using namespace std;

int main(){
	int numeros[] = {3,3,4,1,5};
	
	//ALGORITMO
	int pos,aux;
	
	/*
		posicion = 
		auxiliar =  
		numeros[pos-1] = 
		numeros[pos] = 

		ARREGLO = {}
	*/

	for(int i=0;i<5;i++){
		pos = i;  //
		aux = numeros[i]; //
		
		while((pos>0) && (numeros[pos-1] > aux)){
			numeros[pos] = numeros[pos-1]; //
			pos--; //
		}
		numeros[pos] = aux;
	}
	//FIN
	
	//Mostrar datos
	cout<<"Orden Ascendente: ";
	for(int i=0;i<5;i++){
		cout<<numeros[i]<<" ";
	}
	
	cout<<"\nOrden Descendente: ";
	for(int i=4;i>=0;i--){
		cout<<numeros[i]<<" ";
	}
	
	getch();
	return 0;
}