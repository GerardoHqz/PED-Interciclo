// Crear un registro “Estudiante” que almacenará: nombre, apellido, estado (asignarle “Indefinido” como 
// valor inicial) y notas (definir “notas” como un arreglo de float de tamaño n). Luego crear una función 
// que reciba las notas del estudiante y calcule el promedio, una vez calculado el promedio de las notas, 
// modificar el estado de dicho estudiante dependiendo de su promedio, si su nota es menor a 6 modificarlo 
// a “Reprobado” y si es mayor o igual a 6 modificarlo a “Aprobado”. Por último, mostrar la información del 
// estudiante en consola.
#include <iostream>
#include <string>

using namespace std;

//creando estructura de datos
struct Estudiante{
    string nombre;
    string apellido;
    string estado = "Indefinido";
    float notas[];
};

//Prototipos de funciones
float CalculateProm(int);
void EstadoStudent(float);

//Declarando variable global
Estudiante student;

int main(){
    int cantNotas = 0;

    cout<<"****CALCULADORA DE PROMEDIOS DE NOTAS****";
    cout<<"\nIngrese el nombre del estudiante: ";
    cin>>student.nombre;
    cout<<"Ingrese el apellido del estudiante: ";
    cin>>student.apellido;
    cout<<"Cuantas notas ingresara: ";
    cin>>cantNotas;

    //LLamando funcion promedio y estado
    float promFinal = CalculateProm(cantNotas);
    EstadoStudent(promFinal);

    //Motrar la informacion
    cout<<"\n\nInformacion del estudiante\n";
    cout<<"Nombre: "<<student.nombre;
    cout<<"\nApellido: "<<student.apellido;
    cout<<"\nEstado: "<<student.estado;
    cout<<"\nPromedio: "<<promFinal;

    return 0;
}

float CalculateProm(int cantNotas){
    float suma = 0,promedio = 0;

    for (int i = 0; i<cantNotas; i++){
        cout<<"Ingrese la nota ["<<i+1<<"]: ";
        cin>>student.notas[i];
        suma += student.notas[i];  //suma = suma + student.notas[i]; -= , *=, /=
    }
    promedio = suma / cantNotas;

    return promedio;
}

void EstadoStudent(float prom){
    if(prom < 6){
        student.estado = "Reprobado";
    }
    else{
        student.estado = "Aprobado";
    }

}