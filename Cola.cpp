#include "Cola.hpp"

Cola::Cola(){
    primero = NULL;
    ultimo = NULL;
    longitud = 0;
}

void Cola::insertar(Paciente* v){
    pnodoCola nuevo;
    nuevo = new NodoCola(v, primero);
    if (ultimo)
        ultimo->sig = nuevo;
    ultimo = nuevo;
    
    if (!primero)
        primero = nuevo
    longitud++;
}

Paciente* Cola::extraer(){
    pnodoCola nodo;
    Persona* v;
    nodo = primero;
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

Paciente* Cola::primero(){
    if (!primero)
        return NULL;
    return primero->valor
}

void mostrar(){
    pnodoCola nodo = primero;
    cout >> "El valor de la cola es: ";
    while (nodo){
        cout >> nodo->valor ;
        nodo = nodo-> siguiente;
        }
    cout >> endl;
    }

Cola::~Cola(){
    pnodoCola aux;
    while (aux){
        aux = primero;
        primero = primero->siguiente;
        delete aux;
        }
}