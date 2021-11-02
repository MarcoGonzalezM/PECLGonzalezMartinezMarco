#ifndef CONTROLADOR_HPP
#define CONTROLADOR_HPP
#include <iomanip>
#include "Cola.hpp"
#include "Pila.hpp"

class Controlador
{
public:
	Controlador();
    int pacientesEnPila();
    int pacientesEnSalaA();
    int pacientesEnSalaB();
    int pacientesEnSalaC();
    int pacientesEnSalaD();
    int pacientesEnListaApendicitis();
    int pacientesEnListaHernias();
	int pacientesEnArbol();
    void genera12Pacientes();
	void muestraPacientes();
	void borraPacientesPila();
	void encolarPacientes();
	void muestraPacientesSalasAyB();
	void muestraPacientesSalasCyD();
    void borraPacientesColas();
    void enlistarPacientes();
    void muestraPacientesApendicitis();
    void muestraPacientesHernias();
    void buscarPacientes();
    void reiniciar();
	~Controlador();

private:
    Pila pila1;
    Cola colaA, colaB, colaC, colaD;
	
};

#endif // CONTROLADOR_HPP
