#ifndef NODOPILA_HPP
#define NODOPILA_HPP
#include "Paciente.hpp"

using namespace std;

class NodoPila{
    public:
        NodoPila();
        ~NodoPila();
    private:
        Paciente valor;
        NodoPila* sig;
        friend class Pila;
};

typedef NodoPila* pnodoPila;

#endif // NODOPILA_HPP
