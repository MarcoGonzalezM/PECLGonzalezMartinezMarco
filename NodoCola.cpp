#include "NodoCola.hpp"

NodoCola::NodoCola(Paciente* v, NodoPila* sig){
    valor = v;
    siguiente = sig;
}

NodoCola::~NodoCola(){
}

