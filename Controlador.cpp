#include "Controlador.hpp"

Controlador::Controlador(){
    for (int i=0; i<98;i++){
        if (i<49){
            IDs_libres[i] = i+1;
        } else {
            IDs_libres[i] = i+2;
        }
    }
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
int Controlador::pacientesEnListaApendicitis(){
        return listaA.getLongitud();
    }
int Controlador::pacientesEnListaHernias(){
        return listaH.getLongitud();
    }
    
void Controlador::genera12Pacientes(){
	if (pila1.getLongitud()==48){
		cout << "El número de pacientes en pila está al máximo (48)." << endl;
	}
	else{
		for(int i=1; i<13; i++) {
		Paciente* p = new Paciente();
		pila1.insertar(p);
		}
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
    for (int i=0;pila1.getLongitud()>0;i++){
        Paciente* p = pila1.extraer();
        p->setID(1 + i + 50*p->esHernia());
        p->setHabitacion(1 + i + 100 + 100*p->esHernia());
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
    cout << "Sala A:" << endl;
    colaA.mostrar();
    cout << "Sala B:" << endl;
    colaB.mostrar();
}
	
void Controlador::muestraPacientesSalasCyD(){
    cout << "Sala C:" << endl;
    colaC.mostrar();
    cout << "Sala D:" << endl;
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

void Controlador::enlistarPacientes(){
	while (colaA.getLongitud()>0){
        listaA.insertar(colaA.extraer());
    }
    while (colaB.getLongitud()>0){
        listaA.insertar(colaB.extraer());
    }
	while (colaC.getLongitud()>0){
        listaH.insertar(colaC.extraer());
    }
    while (colaD.getLongitud()>0){
        listaH.insertar(colaD.extraer());
    }
}    

void Controlador::muestraPacientesApendicitis(){
    listaA.mostrar();
}

void Controlador::muestraPacientesHernias(){
    listaH.mostrar();
}

void Controlador::buscarPacientes(){
    Paciente* pac1 = listaA.tail();
    Paciente* pac2 = listaH.cabeza();
    pac1->mostrar();
    pac2->mostrar();
}

void Controlador::borraPacientesListas(){
    while (listaA.getLongitud()>0){
        listaA.extraer();
    }
    while (listaH.getLongitud()>0){
        listaH.extraer();
    }
}

void Controlador::reiniciar(){
    borraPacientesPila();
    borraPacientesColas();
    borraPacientesListas();
}

Controlador::~Controlador(){
}