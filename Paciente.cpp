#include "Paciente.hpp"

Paciente::Paciente(int ID, int habitacion)
{
	this->generarDNI();
	this->enfermedad = (rand() % 2);
}

void Paciente::mostrar()
{
	this->ID = 0;
	this->habitacion = 0;
	this->enfermedad = (rand() % 2);
	this->generarDNI();
}

void Paciente::esHernia()
{
	return this->enfermedad; //1 es hernia
}
void Paciente::mostrar()
{
	texto = " apendicitis."
	if(enfermedad)
		texto = " hernia."
	if(ID=0)
		cout << "\t El paciente cuyo DNI es " << DNI << " tiene " << texto  << endl;
	else
		cout << "\t El paciente cuyo DNI es " << DNI << " tiene " << texto << " , su ID es: " << ID << " y su "
		"habitacion asignada es: " << habitacion << endl;
}

void Paciente::generarDNI()
{
	char letras[]={'T','R','W','A','G','M','Y','F','P','D','X','B','N','J','Z','S','Q','V','H','L','C','K','E'};
	int numDNI = 0, aux = 1E7;
	for(int i=0, i<8; i++) {
		int num=rand() % 10;
		this->DNI[i]='0'+ num;
		numDNI = numDNI + num * aux;
		aux/=10;
	}
	this->DNI[8] = letras[numDNI%23];
	this->DNI[9] = '\0';
	}



Paciente::~Paciente()
{
}

