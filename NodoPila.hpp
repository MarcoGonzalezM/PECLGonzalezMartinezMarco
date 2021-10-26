#ifndef NODOPILA_HPP
#define NODOPILA_HPP
#include "Paciente.hpp"

using namespace std;

class NodoPila{
    public:
        NodoPila(Paciente* v, NodoPila* sig);
        ~NodoPila();
    private:
        Paciente* valor;
        NodoPila* siguiente;
        friend class Pila;
};

typedef NodoPila* pnodoPila;

#endif // NODOPILA_HPP
