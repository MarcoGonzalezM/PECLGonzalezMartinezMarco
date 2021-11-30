#ifndef ARBOL_HPP
#define ARBOL_HPP
#include "NodoArbol.hpp"
#include <vector>

class Arbol{
public:
    Arbol();
    void insertar(Paciente * valor);
    void inorden();
    void dibujar();
    ~Arbol();

private:
    pnodoAbb raiz;
    pnodoAbb insertar(pnodoAbb, Paciente *);
    void inorden(pnodoAbb);
    int altura(pnodoAbb);
    void dibujarNodo(vector<string>& output, vector<string> linkAbove, pnodoAbb nodo, int nivel, int minPos, char linkChar);
};

#endif // ARBOL_HPP
