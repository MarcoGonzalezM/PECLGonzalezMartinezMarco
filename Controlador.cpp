#include "Controlador.hpp"
#include "Paciente.cpp"
#include "iostream"
Controlador::Controlador()
{
}
void Controlador::genera12Pacientes()
{
	for(int i=0; i<12; i++) {
		Paciente p = new Paciente;
		p->Pila.insertar;
		}
	cout << "\t Pacientes en la pila -> " << Pila.longitud << "\n Pacientes en las colas:" << setw(20) << "\n Sala A-> "
	<< /*Cola.longitud(A) <<*/ setw(20) << "Sala B-> " << /*Cola.longitud(B) <<*/ setw(20) << "Sala C-> " /*<< Cola.longitud(C)*/
	<< setw(20) << "Sala D-> " /*<< Cola.longitud(D)*/ << "\n Pacientes en las listas: \n" << setw(30) << "Quirofano "
	"Apendicitis-> " /*<< Lista.longitudA */<< setw(30) << "Quirofano hernias-> " */<< Lista.longitudH*/ << "\n Pacientes "
	"en el arbol -> " /*<< arbolLongitud */<< endl;
	}
	
void Controlador::muestraPacientes()
{
	Paciente.mostrar();
}
Controlador::~Controlador()
{
}

