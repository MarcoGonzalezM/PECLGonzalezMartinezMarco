#include "Controlador.hpp"

Controlador::Controlador(){
}

int Controlador::pacientesEnPila(){
        return pila1.getLongitud();
    }
int Controlador::pacientesEnSalaA(){
        return colaA.getLongitud();
    }
int Controlador::pacientesEnSalaB(){
        return colaB.getLongitud();
    }
int Controlador::pacientesEnSalaC(){
        return colaC.getLongitud();
    }
int Controlador::pacientesEnSalaD(){
        return colaD.getLongitud();
    }
    
void Controlador::genera12Pacientes()
{
	for(int i=0; i<12; i++) {
		Paciente p = Paciente(i,i);
		pila1.insertar(&p);
		}
	cout<< "\t Pacientes en la pila -> " << pila1.getLongitud() << "\n Pacientes en las colas:" << setw(20) << "\n Sala A-> "
	<< colaA.getLongitud() << setw(20) << "Sala B-> " << colaB.getLongitud() << setw(20) << "Sala C-> " << colaC.getLongitud()
	<< setw(20) << "Sala D-> " << colaD.getLongitud() << "\n Pacientes en las listas: \n" << setw(30) << "Quir\242fano "
	"Apendicitis-> " /*<< Lista.longitudA */<< setw(30) << "Quir\242fano hernias-> " /*<< Lista.longitudH*/ << "\n Pacientes "
	"en el \240rbol -> " /*<< arbolLongitud */<< endl;
	}

void Controlador::muestraPacientes(){
	pila1.mostrar();
}

void Controlador::borraPacientesPila(){
	while (pila1.getLongitud()>0){
        pila1.extraer();
    }
}

void Controlador::encolarPacientes(){
	while (pila1.getLongitud()>0){
        Paciente* p = pila1.extraer();
        if (p->esHernia()) {
            if (colaC.getLongitud()>colaD.getLongitud()){
                colaD.insertar(p);
            }else{
                colaC.insertar(p);
            }
        }else{
            if (colaA.getLongitud()>colaB.getLongitud()){
                colaB.insertar(p);
            }else{
                colaA.insertar(p);
            }        
        }
    }
}

Controlador::~Controlador()
{
}

