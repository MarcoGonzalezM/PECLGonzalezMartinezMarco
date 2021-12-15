#ifndef CONTROLADOR_HPP
#define CONTROLADOR_HPP
#include <iomanip>
#include <algorithm>
#include "Cola.hpp"
#include "Pila.hpp"
#include "Lista.hpp"
#include "Arbol.hpp"

class Controlador{
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
	int pacientesEnSistema();
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
    void crearYDibujarArbol();
    void muestraPacientesApendicitisEnOrden();
    void muestraPacientesHerniasEnOrden();
    void muestraPacientesInOrden();
    void buscarPacientesArbol();
    void contarPacientesHabImpar();
    void mostrarPacientesHoja();
    void eliminarPaciente();
	void borraPacientesArbol();
	~Controlador();

private:
    Pila pila1;
    Cola colaA, colaB, colaC, colaD;
	Lista listaA, listaH;
    //https://www.geeksforgeeks.org/initialize-a-vector-in-cpp-different-ways/
    vector<int> IDsA_libres;
    vector<int> IDsH_libres;
    vector<int> habA_libres;
    vector<int> habH_libres;
    Arbol abb1;
};

#endif // CONTROLADOR_HPP
