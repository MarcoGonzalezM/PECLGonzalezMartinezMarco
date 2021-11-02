#ifndef LISTA_HPP
#define LISTA_HPP
#include "NodoLista.hpp"

class Lista
{
public:
	Lista();
	~Lista();
	void insertar(Paciente* v);
	Paciente* extraer();
	Paciente* cabeza();
	Paciente* ultimo();
	void mostrar();
	int getLongitud();

private:
	pnodoLista primero, ultimo, resto;
	int longitud;

};

#endif // LISTA_HPP
