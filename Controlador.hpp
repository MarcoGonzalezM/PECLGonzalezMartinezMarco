#ifndef CONTROLADOR_HPP
#define CONTROLADOR_HPP
#include "Cola.hpp"
//#include "Lista.hpp"
#include "Pila.hpp"

class Controlador
{
public:
	Controlador();
	void genera12Pacientes();
	void muestraPacientes();
	void borraPacientesPila();
	void pacientesEnSalaA();
	void pacientesEnSalaB();
	void pacientesEnSalaC();
	void pacientesEnSalaD();
	void pacientesEnListaApendicitis();
	void pacientesEnListaHernias();
	void pacientesEnArbol();
	
	~Controlador();

private:
	
};

#endif // CONTROLADOR_HPP
