#include "Lista.hpp"

Lista::Lista() //las listas tienen que hacerse ordenadas
{
	primero = NULL;
	ultimo = NULL;
	longitud = 0;
}

void Lista::insertar(Paciente* v){    //INSERTAR EN ORDEN
	pnodoLista nuevo;
	nuevo = new NodoLista(v);
	if (primero){
		if (nuevo->valor->getID() < primero->valor->getID()){
			primero = nuevo;
        } else{
			pnodoLista aux = primero;
			while(aux->siguiente->valor->getID() < nuevo->valor->getID()) {
				aux = aux->siguiente;
			}
            if (aux->siguiente){
                nuevo->siguiente = aux->siguiente;
                aux->siguiente = nuevo;
            } else{
            ultimo->siguiente = nuevo;
            ultimo = nuevo;
            }
		}
	} else{
		primero = nuevo;
        ultimo = nuevo;
    }
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
	cout << "\tLos pacientes en lista: " << endl;
	while(aux) {
		aux->valor->mostrar();
		aux = aux->siguiente;
	}
}

Paciente* Lista::cabeza(){
	if (!primero)
		return NULL;
	return primero->valor;
}

Paciente* Lista::tail(){
	if (!ultimo)
		return NULL;
	return ultimo->valor;
}

int Lista::getLongitud(){
    return longitud;
}

Lista::~Lista()
{
}

