#ifndef NODOLISTA_HPP
#define NODOLISTA_HPP
#include "Paciente.hpp"

class NodoLista
{
public:
	NodoLista(Paciente* v, NodoLista* sig);
	~NodoLista();

private:
	Paciente* valor;
	NodoLista* siguiente;
	friend class Lista;
};

typedef NodoLista* pnodoLista;
#endif // NODOLISTA_HPP
