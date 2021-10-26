#include "Controlador.hpp"
#include "Paciente.hpp"
#include "iostream"
#include "Cola.hpp"
#include "Pila.hpp"

Controlador::Controlador(){
    Pila pila1 = Pila();
    Cola colaA = Cola();
    Cola colaB = Cola();
    Cola colaC = Cola();
    Cola colaD = Cola();
}
void Controlador::genera12Pacientes()
{
	for(int i=0; i<12; i++) {
		Paciente p = Paciente();
		pila1.insertar(&p);
		}
	cout << "\t Pacientes en la pila -> " << pila1.getLongitud() << "\n Pacientes en las colas:" << setw(20) << "\n Sala A-> "
	<< /*Cola.getLongitud(A) <<*/ setw(20) << "Sala B-> " << /*Cola.longitud(B) <<*/ setw(20) << "Sala C-> " /*<< Cola.longitud(C)*/
	<< setw(20) << "Sala D-> " /*<< Cola.longitud(D)*/ << "\n Pacientes en las listas: \n" << setw(30) << "Quirofano "
	"Apendicitis-> " /*<< Lista.longitudA */<< setw(30) << "Quirofano hernias-> " /*<< Lista.longitudH*/ << "\n Pacientes "
	"en el arbol -> " /*<< arbolLongitud */<< endl;
	}

void Controlador::muestraPacientes()
{
	Paciente.mostrar();
}

void Controlador::borraPacientesPila()
{
	int n=Pila.getLongitud()
	for(int i=0; i<n; i++){
		Pila.extraer();
		}
}

void Controlador::encolarPacientes()
{
	
	
}

Controlador::~Controlador()
{
}

