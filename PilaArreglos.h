#include <string>
using namespace std;
#include <iostream>
#define MAX 100 //Limite del tamaño de la pila

//Aqui definimos la clase

template <typename E>
class PilaArreglos{
	public:   //Métodos publicos de la pila
		PilaArreglos();//Constructor
        ~PilaArreglos();//Destructor
		bool push(E x);
		bool pop();
		E top() const;
		bool esVacia() const;
		int tamanio() const;
		std::string toString();
		void imprime();
        void HacerVacia();
	private:  //Atributos privados
		E arreglo[MAX];
		int numElementos;	
};

template <typename E>
PilaArreglos<E>::PilaArreglos(){ //Constructor
	numElementos=0;
}

template <typename E>
PilaArreglos<E>::~PilaArreglos(){
}

template <typename E>
bool PilaArreglos<E>::push(E x){  //Métdo push
bool res=false;     
arreglo[MAX-tamanio()-1]=x;  //Agregamos el elemento X una posición antes del tope con respecto al arreglo
numElementos++; //incrementamos el numero de elementos
res=true;
return res;
}
template <typename E>
bool PilaArreglos<E>::pop(){  //Método pop
bool res=false;
numElementos--;   //Arrastramos el numero de elementos e ignoramos el elemento eliminado, se sobreescribira en su posición si insertamos un elemento nuevo
res=true;
return res;
}
template <typename E>
E PilaArreglos<E>::top() const{ //Método top
	return arreglo[ MAX - numElementos]; //Regresamos el elemento de hasta arriba de la cola
}
template <typename E>
bool PilaArreglos<E>::esVacia() const{ //Método es Vacia
bool res=false;
if(numElementos==0){    //Si los elementos son 0 entonces es vacia de lo contrario no lo es
    return true;
}
return res;
}
template <typename E>
int PilaArreglos<E>::tamanio()const{//Método tamanio
return numElementos;//Regresamos la cantidad de elementos
}
template <typename E>
std::string PilaArreglos<E>::toString(){//Método to_string
std :: string s=""; //Inicializamos el string que vamos a regresar
for (int i=MAX-1;i>=MAX-tamanio();i--){ //Recorremos la pila
    s+= to_string(arreglo[i]);//Concatenamos los elementos de la pila
}
return s;
}
template <typename E>
void PilaArreglos<E>:: imprime(){ //Método imprime
    
    for (int i=MAX-1;i>=MAX-tamanio();i--){ //Recorremos la pila
         cout<<arreglo[i]<<" ";// Imprimimos cada elemento
}
}
template <typename E>
void PilaArreglos<E>:: HacerVacia(){
    numElementos=0;
}

