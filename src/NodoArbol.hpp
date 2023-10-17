#ifndef NODOARBOL_HPP
#define NODOARBOL_HPP
#include "Paciente.hpp"

class NodoArbol{
	public:
		NodoArbol(Paciente * valor);
		bool hayHabImpares();
		bool esHoja();
		Paciente * getPaciente();
		~NodoArbol();

	private:
		Paciente * valor;
		NodoArbol * izq;
		NodoArbol * der;
		friend class Arbol;
};
typedef NodoArbol * pnodoAbb;
#endif // NODOARBOL_HPP