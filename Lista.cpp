#include "Lista.hpp"

Lista::Lista() //las listas tienen que hacerse ordenadas
{
	cabeza = NULL;
	ultimo = NULL;
	longitud = 0;
}

Paciente* Lista::insertar(Paciente v*){    //INSERTAR EN ORDEN
	pnodoLista nuevo, previo;
	nuevo = new NodoLista(v);
	previo = new NodoLista(v);
	if (primero)
		if (v<primero)
			sig = primero;
			primero = v;
		else{
			pnodoLista aux = primero;
			while(aux<v) {
				aux = aux->siguiente;
				
			}
		}
		ultimo->siguiente = nuevo;
	ultimo = nuevo;
	else (!primero)
		primero = nuevo;
	longitud++;
}

Paciente* Lista::extraer(){
	pnodoLista nodo;
	Paciente* v;
	nodo = primero;        //los pacientes van a entrar por prioridad y ya estan ordenados al entrar en lista
    if (!nodo)
        return NULL;
    primero = nodo->siguiente;
    v = nodo->valor;
    delete nodo;
    if (!primero)
        ultimo = NULL;    
    longitud--;
    return v;
}

void Lista::mostrar(){
	pnodoLista aux = primero;
	cout << "\tLos pacientes en lista: ";
	while(aux) {
		cout << " -> " << aux->valor;
		aux = aux->siguiente;
	}
	cout << endl;
}

Paciente* Lista::cabeza(){
	pnodoLista nodo;
	if (!primero)
		return 0;
	return primero->valor;
}

Paciente* Lista::tail(){
	pnodoLista nodo;
	if (!ultimo)
		return 0;
	return ultimo->valor;
}


Lista::~Lista()
{
}

