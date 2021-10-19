#ifndef COLA_HPP
#define COLA_HPP
#include "NodoCola.hpp"

class Cola{
    public:
        Cola();
        ~Cola();
        void insertar (Paciente* v);
        Paciente* extraer();
        Paciente* primero();
        void mostrar();
        int getLongitud();
        
    private:
        pnodoCola primero, ultimo;
        int longitud;

};

#endif // COLA_HPP