#include "Cola.hpp"

Cola::Cola(){
    primero = NULL;
    ultimo = NULL;
    longitud = 0;
}

void Cola::insertar(Paciente* v){
    pnodoCola nuevo;
    nuevo = new NodoCola(v);
    if (ultimo)
        ultimo->siguiente = nuevo;
    ultimo = nuevo;
    
    if (!primero)
        primero = nuevo;
    longitud++;
}

Paciente* Cola::extraer(){
    pnodoCola nodo;
    Paciente* v;
    nodo = primero;
    if (!nodo)
        return NULL;
    primero = primero->siguiente;
    v = nodo->valor;
    delete nodo;
    if (!primero)
        ultimo = NULL;    
    longitud--;
    return v;
}

Paciente* Cola::cima(){
    if (!primero)
        return NULL;
    return primero->valor;
}

void Cola::mostrar(){
    pnodoCola nodo = primero;
    cout << "El valor de la cola es: " << endl;
    while (nodo){
        nodo->valor->mostrar();
        nodo = nodo->siguiente;
        }
    cout << endl;
    }

int Cola::getLongitud(){
    return this->longitud;
}

Cola::~Cola(){
    pnodoCola aux;
    while (aux){
        aux = primero;
        primero = primero->siguiente;
        delete aux;
        }
}