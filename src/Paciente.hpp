#ifndef PACIENTE_HPP
#define PACIENTE_HPP
#include <iostream>
using namespace std;

class Paciente  //dni, id(preoperatorio, por gravedad), n habita(a la par que id), bool enfermedad
{
public:
	Paciente();
	bool esHernia();
    int getID();
	void mostrar();
    void setID(int id);
    void setHabitacion(int hab);
    int getHabitacion();
	~Paciente();
	
private:
	char DNI[10];
	int ID;
	int habitacion;
	bool enfermedad;
	void generarDNI();

};

#endif // PACIENTE_HPP
