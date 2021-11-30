#include "NodoArbol.hpp"

NodoArbol::NodoArbol(Paciente * valor){
    this->valor = valor;
    this->izq = nullptr;
    this->der = nullptr;
}

bool NodoArbol::hayHabImpares(){
    if (!valor){
        return 0;
    } else {
        return valor->getHabitacion()%2 /*es Impar?*/ or izq->hayHabImpares() or der->hayHabImpares();
    }    
}

Paciente * NodoArbol::getPaciente(){
    return valor;
}

NodoArbol::~NodoArbol(){
    
}

