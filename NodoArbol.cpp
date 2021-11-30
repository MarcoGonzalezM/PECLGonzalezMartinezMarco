#include "NodoArbol.hpp"

NodoArbol::NodoArbol(Paciente * valor){
    this->valor = valor;
    this->izq = nullptr;
    this->der = nullptr;
}

NodoArbol::~NodoArbol()
{
}

