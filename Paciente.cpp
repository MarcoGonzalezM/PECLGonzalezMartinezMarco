#include "Paciente.hpp"

Paciente::Paciente(){
	enfermedad = (rand() % 2);
	this->generarDNI();
}

bool Paciente::esHernia()
{
	return this->enfermedad; //1 es hernia
}
void Paciente::mostrar(){
	cout << "\t El paciente cuyo DNI es " << DNI << " tiene " << (enfermedad ? "hernia" : "apendicitis");
    if(ID){
		cout << " , su ID es: " << ID;
    } if(habitacion){
        cout  << ", su habitaci\242n asignada es: " << habitacion;
    }        
    cout << endl;
}

void Paciente::generarDNI(){
	char letras[]={'T','R','W','A','G','M','Y','F','P','D','X','B','N','J','Z','S','Q','V','H','L','C','K','E'};
	int numDNI = 0, aux = 1E7;
	for(int i=0; i<8; i++) {
		int num=rand() % 10;
		this->DNI[i]='0'+ num;
		numDNI = numDNI + num * aux;
		aux/=10;
	}
	this->DNI[8] = letras[numDNI%23];
	this->DNI[9] = '\0';
}

void Paciente::setID(int id){
    ID=id;
}

void Paciente::setHabitacion(int hab){
    habitacion=hab;
}


Paciente::~Paciente()
{
}

