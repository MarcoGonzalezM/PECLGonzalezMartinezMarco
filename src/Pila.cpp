#include "Pila.hpp"

Pila::Pila(){
    ultimo = NULL;
    longitud = 0;
}

void Pila::insertar(Paciente* v){
        pnodoPila nuevo;
        nuevo = new NodoPila(v, ultimo);
        ultimo = nuevo;
        longitud++;
}

Paciente* Pila::extraer(){
    pnodoPila nodo;
    Paciente* v;
    if(!ultimo)
        return NULL;
    nodo = ultimo;
    ultimo = nodo->siguiente;
    v = nodo->valor;
    longitud--;
    delete nodo;
    return v;
}

Paciente* Pila::cima(){
    if(!ultimo)
        return NULL;
    return ultimo->valor;
}

void Pila::mostrar(){
    pnodoPila aux = ultimo;
    cout << "\tEl contenido de la pila es: " << endl;
    while(aux) {
        aux->valor->mostrar();
        aux = aux->siguiente;
    }
    cout << endl;
}

int Pila::getLongitud(){
    return this->longitud;
}

Pila::~Pila(){
    pnodoPila aux;
    while(ultimo) {
        aux = ultimo;
        ultimo = ultimo->siguiente;
        delete aux;
   }
}