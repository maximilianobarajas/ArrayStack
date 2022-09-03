/***************************
Hola, aqui se encuentra nuestra implementación de pila mediante arreglos, de parte del equipo alpha.
******************************/
#include <stdio.h>
#include "PilaArreglos.h" //Importamos nuestro archivo con la plantilla
#include <iostream>
#include <string> //incluimos la clase string
using namespace std;
int main()
{
    PilaArreglos<int> pila1;  //Inicializamos una pila de enteros
    pila1.push(3);   //Agregamos valores a la pila
    pila1.push(4);
    pila1.push(4);
    pila1.push(9);
    string s=pila1.toString(); //probamos el método toString
    cout<<s<<endl; //Imprimimos la cadena creada
    cout<<"El tamaño es : "<<pila1.tamanio()<<endl; //imprimimos el tamaño de la pila
    cout<<"lA PILA ES:"<<endl; 
    pila1.imprime(); //Imprimimos la pila
    cout<<endl<<"El tope de la pila es: "<<pila1.top()<<endl;   //Imprimimos el tope de la pila
    cout<<"Despues de la operación pop la pila queda como "<<endl;
    pila1.pop(); //Eliminamos el tope con pop
    pila1.imprime(); //Imprimimos nuevamente la pila
    pila1.HacerVacia(); //Llamamos a hacer vacia


    cout<<endl<<"¿Es vacia? depues del método hacer vacia:"<<pila1.esVacia()<<endl; //Debe imprimir uno porque la hicimos vacia
    return 0;
}