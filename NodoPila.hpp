#ifndef NODOPILA_HPP
#define NODOPILA_HPP

using namespace std;

class NodoPila{
    public:
        NodoPila();
        ~NodoPila();
    private:
        Persona valor;
        NodoPila* sig;
        friend class Pila;
};

typedef NodoPila* pnodoPila;

#endif // NODOPILA_HPP
