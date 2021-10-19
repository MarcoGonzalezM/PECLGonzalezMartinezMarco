#ifndef NODOCOLA_HPP
#define NODOCOLA_HPP
#include "Paciente.hpp"

class NodoCola{
    public:
        NodoCola();
        ~NodoCola();
    private:
        Paciente valor;
        NodoCola* sig;
        friend class Cola;
};

typedef NodoCola* pnodoCola

#endif // NODOCOLA_HPP
