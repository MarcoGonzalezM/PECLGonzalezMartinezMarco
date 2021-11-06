#ifndef CONTROLADOR_HPP
#define CONTROLADOR_HPP
#include <iomanip>
#include "Cola.hpp"
#include "Pila.hpp"
#include "Lista.hpp"

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
    void borraPacientesListas();
    void reiniciar();
	~Controlador();

private:
    Pila pila1;
    Cola colaA, colaB, colaC, colaD;
	Lista listaA, listaH;
    int IDs_libres [98];
};

#endif // CONTROLADOR_HPP
