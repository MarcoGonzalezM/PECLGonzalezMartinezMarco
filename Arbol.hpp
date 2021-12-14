#ifndef ARBOL_HPP
#define ARBOL_HPP
#include "NodoArbol.hpp"
#include <vector>

class Arbol{
public:
	Arbol();
	int getTamanno();
	void insertar(Paciente * valor);
	void inordenIzq();
	void inordenDer();
	void inorden();
	void dibujar();
	int contarHabImpares();
	pnodoAbb subArbolIzq();
	pnodoAbb subArbolDer();
	pnodoAbb minimo(pnodoAbb);
	pnodoAbb maximo(pnodoAbb);
	void mostrarHojas();
	void eliminarPaciente(int hab);
	~Arbol();
	
private:
	pnodoAbb raiz;
	int getTamanno(pnodoAbb);
	pnodoAbb insertar(pnodoAbb, Paciente *);
	void preorden(pnodoAbb);
	void inorden(pnodoAbb);
	int contarHabImpares(pnodoAbb);
	int altura(pnodoAbb);
	void mostrarHojas(pnodoAbb);
	pnodoAbb eliminarPaciente(pnodoAbb, int);
	pnodoAbb eliminarNodo(pnodoAbb);
	void dibujarNodo(vector<string>& output, vector<string> linkAbove, pnodoAbb nodo, int nivel, int minPos, char linkChar);
};

#endif // ARBOL_HPP
