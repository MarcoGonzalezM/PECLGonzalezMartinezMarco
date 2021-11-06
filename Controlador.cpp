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
    
void Controlador::genera12Pacientes(){
	for(int i=1; i<13; i++) {
		Paciente* p = new Paciente(i,i);
		pila1.insertar(p);
    }
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

void Controlador::muestraPacientesSalasAyB(){
    colaA.mostrar();
    colaB.mostrar();
}
	
void Controlador::muestraPacientesSalasCyD(){
    colaC.mostrar();
    colaD.mostrar();
}
    
void Controlador::borraPacientesColas(){
	while (colaA.getLongitud()>0){
        colaA.extraer();
    }
    while (colaB.getLongitud()>0){
        colaB.extraer();
    }
	while (colaC.getLongitud()>0){
        colaC.extraer();
    }
    while (colaD.getLongitud()>0){
        colaD.extraer();
    }
}

Controlador::~Controlador(){
}

