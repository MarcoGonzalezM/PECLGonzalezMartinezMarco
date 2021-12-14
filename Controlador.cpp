#include "Controlador.hpp"

Controlador::Controlador(){
    //Establecer la semilla de RNG
    srand((unsigned int)time(NULL));
    
    //Crear las listas de IDs y habitaciones y reordenarlas con el método random_shuffle
    for (int i=1; i<=49;i++){
        IDsA_libres.push_back(i);
    }
    for (int i=51; i<=99;i++){
        IDsH_libres.push_back(i);
    }
    for (int i=101; i<199;i++){
        habA_libres.push_back(i);
    }
    for (int i=201; i<299;i++){
        habH_libres.push_back(i);
    }
    
    //https://stackoverflow.com/questions/6926433/how-to-shuffle-a-stdvector
    random_shuffle(IDsA_libres.begin(), IDsA_libres.end());
    random_shuffle(IDsH_libres.begin(), IDsH_libres.end());
    random_shuffle(habA_libres.begin(), habA_libres.end());
    random_shuffle(habH_libres.begin(), habH_libres.end());
	
	Paciente * p = new Paciente();
	p->setHabitacion(200);
	abb1.insertar(p);

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
int Controlador::pacientesEnArbol(){
	return abb1.getTamanno();
}
    
void Controlador::genera12Pacientes(){
	if (pila1.getLongitud()==48){
		cout << "El n\243mero de pacientes en pila est\240 al m\240ximo (48)." << endl;
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
            p->setID(IDsH_libres.back());
            IDsH_libres.pop_back();
            p->setHabitacion(habH_libres.back());
            habH_libres.pop_back();
            if (colaC.getLongitud()>colaD.getLongitud()){
                colaD.insertar(p);
            }else{
                colaC.insertar(p);
            }
        }else{
            p->setID(IDsA_libres.back());
            IDsA_libres.pop_back();
            p->setHabitacion(habA_libres.back());
            habA_libres.pop_back();
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
		IDsA_libres.push_back(colaA.cima()->getID());
		habA_libres.push_back(colaA.cima()->getHabitacion());
		colaA.extraer();
    }
    while (colaB.getLongitud()>0){
		IDsA_libres.push_back(colaB.cima()->getID());
		habA_libres.push_back(colaB.cima()->getHabitacion());
		colaB.extraer();
    }
	while (colaC.getLongitud()>0){
		IDsH_libres.push_back(colaC.cima()->getID());
		habH_libres.push_back(colaC.cima()->getHabitacion());
		colaC.extraer();
    }
    while (colaD.getLongitud()>0){
		IDsH_libres.push_back(colaD.cima()->getID());
		habH_libres.push_back(colaD.cima()->getHabitacion());
		colaD.extraer();
    }
random_shuffle(IDsA_libres.begin(), IDsA_libres.end());
random_shuffle(IDsH_libres.begin(), IDsH_libres.end());
random_shuffle(habA_libres.begin(), habA_libres.end());
random_shuffle(habH_libres.begin(), habH_libres.end());
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
		IDsA_libres.push_back(listaA.cabeza()->getID());
		habA_libres.push_back(listaA.cabeza()->getHabitacion());
		listaA.extraer();
	}
	while (listaH.getLongitud()>0){
		IDsH_libres.push_back(listaH.cabeza()->getID());
		habH_libres.push_back(listaH.cabeza()->getHabitacion());
		listaH.extraer();
	}
random_shuffle(IDsA_libres.begin(), IDsA_libres.end());
random_shuffle(IDsH_libres.begin(), IDsH_libres.end());
random_shuffle(habA_libres.begin(), habA_libres.end());
random_shuffle(habH_libres.begin(), habH_libres.end());
}

void Controlador::reiniciar(){
	borraPacientesPila();
	borraPacientesColas();
	borraPacientesListas();
}

void Controlador::crearYDibujarArbol(){
	for (int i=0;listaA.getLongitud()>0;i++){
		Paciente * p = listaA.extraer();
		abb1.insertar(p);
	}
	for (int i=0;listaH.getLongitud()>0;i++){
		Paciente * p = listaH.extraer();
		abb1.insertar(p);
	}
//abb1.dibujar();
}

void Controlador::muestraPacientesApendicitisEnOrden(){
	cout << "Pacientes con Apendicitis en orden:\n";
	abb1.inordenIzq();
}
void Controlador::muestraPacientesHerniasEnOrden(){
	cout << "Pacientes con Hernias en orden:\n";
	abb1.inordenDer();
}
void Controlador::muestraPacientesInOrden(){
	cout << "Inorden del \240rbol:\n";
	abb1.inordenIzq();
	abb1.inordenDer();
	//abb1.inorden();
}
void Controlador::buscarPacientesArbol(){
	//Mostrar paciente con menor número de habitación en Apendicitis
	cout << "Paciente con Apendicitis cuyo n\243mero de habitaci\242n es el menor" << "\n\t";
	abb1.minimo(abb1.subArbolIzq())->getPaciente()->mostrar();
	//Mostrar paciente con mayor número de habitación en Apendicitis
	cout << "Paciente con Apendicitis cuyo n\243mero de habitaci\242n es el mayor" << "\n\t";
	abb1.maximo(abb1.subArbolIzq())->getPaciente()->mostrar();
	//Mostrar paciente con menor número de habitación en Hernias
	cout << "Paciente con Hernias cuyo n\243mero de habitaci\242n es el menor" << "\n\t";
	abb1.minimo(abb1.subArbolDer())->getPaciente()->mostrar();
	//Mostrar paciente con mayor número de habitación en Hernias
	cout << "Paciente con Hernias cuyo n\243mero de habitaci\242n es el mayor" << "\n\t";
	abb1.maximo(abb1.subArbolDer())->getPaciente()->mostrar();
}
void Controlador::contarPacientesHabImpar(){
    cout << "N\243mero de pacientes curos n\243meros de habitaci\242n son impares: " << abb1.contarHabImpares() << "\n";    
}

void Controlador::mostrarPacientesHoja(){
	cout << "Pacientes almacenados en nodos hoja:\n";
	abb1.mostrarHojas();
}

void Controlador::eliminarPaciente(){
	
	int hab;
	cout << "Indica la habitaci\242n del paciente que quieres eliminar: ";
	cin >> hab;
	cout << "\n";
	//abb1.dibujar();
	cout << "\265rbol antes de eliminar el nodo " << hab << ".\n";
	abb1.eliminarPaciente(hab);
	//abb1.dibujar();
	cout << "\265rbol tras eliminar el nodo " << hab <<".\n";
}

void Controlador::borraPacientesArbol(){
	while(abb1.getTamanno()>1){
		abb1.eliminarPaciente(1);
	}
}

Controlador::~Controlador(){
}