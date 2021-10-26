#ifndef NODOCOLA_HPP
#define NODOCOLA_HPP
#include "Paciente.hpp"

class NodoCola{
    public:
        NodoCola(Paciente* v, NodoCola* sig);
        ~NodoCola();
    private:
        Paciente* valor;
        NodoCola* siguiente;
        friend class Cola;
};

typedef NodoCola* pnodoCola;

#endif // NODOCOLA_HPP
