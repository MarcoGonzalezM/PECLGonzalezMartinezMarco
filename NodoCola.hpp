#ifndef NODOCOLA_HPP
#define NODOCOLA_HPP

class NodoCola{
    public:
        NodoCola();
        ~NodoCola();
    private:
        Persona valor;
        NodoCola* sig;
        friend class Cola;
};

typedef NodoCola* pnodoCola

#endif // NODOCOLA_HPP
