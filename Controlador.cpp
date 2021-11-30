#include "Controlador.hpp"

Controlador::Controlador(){
    //Establecer la semilla de RNG
    srand((unsigned int)time(NULL));
    
    //Crear las listas de IDs y habitaciones y reordenarlas con el método random_shuffle
    for (int i=1; i<=49;i++){
        IDsA_libres[i] = i;
    }
    for (int i=51; i<=49;i++){
        IDsH_libres[i] = i;
    }
    for (int i=101; i<199;i++){
        habA_libres[i] = i;
    }
    for (int i=201; i<299;i++){
        habH_libres[i] = i;
    }
    random_shuffle(&IDsA_libres[0], &IDsA_libres[49]);
    random_shuffle(&IDsH_libres[0], &IDsH_libres[49]);
    random_shuffle(&habA_libres[0], &habA_libres[99]);
    random_shuffle(&habH_libres[0], &habH_libres[99]);
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
        if (p->esHernia()) {
            p->setID(IDsH_libres[i]);
            if (colaC.getLongitud()>colaD.getLongitud()){
                colaD.insertar(p);
            }else{
                colaC.insertar(p);
            }
        }else{
            p->setID(IDsA_libres[i]);
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

void Controlador::crearYDibujarArbol(){
    for (int i=0;pila1.getLongitud()>0;i++){
        Paciente * p = pila1.extraer();
        if (p->esHernia()) {
            p->setHabitacion(habH_libres[i]);
        }else{
            p->setHabitacion(habA_libres[i]);
        }
        abb1.insertar(p);
    }
    abb1.dibujar();
}

void Controlador::muestraPacientesApendicitisEnOrden(){
    abb1.preordenIzq();
}
void Controlador::muestraPacientesHerniasEnOrden(){
    abb1.preordenDer();
}
void Controlador::muestraPacientesInOrden(){
    abb1.inorden();
}
void Controlador::buscarPacientes(){
    //Mostrar paciente con menor número de habitación en Apendicitis
    cout << "Paciente con apendicitis cuyo número de habitación es el menor";
    pnodoAbb nodo = abb1.subArbolIzq();
    while (nodo.subArbolIzq()){
        
    }
}
void Controlador::contarPacientesHabImpar(){
    cout << abb1.contarHabImpares();    
}

Controlador::~Controlador(){
}