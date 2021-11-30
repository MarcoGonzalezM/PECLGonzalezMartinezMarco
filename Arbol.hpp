#ifndef ARBOL_HPP
#define ARBOL_HPP
#include "NodoArbol.hpp"
#include <vector>

class Arbol{
public:
    Arbol();
    void insertar(Paciente * valor);
    void preordenIzq();
    void preordenDer();
    void inorden();
    void dibujar();
    int contarHabImpares();
    pnodoAbb subArbolIzq();
    pnodoAbb subArbolDer();
    ~Arbol();

private:
    pnodoAbb raiz;
    pnodoAbb insertar(pnodoAbb, Paciente *);
    void preorden(pnodoAbb);
    void inorden(pnodoAbb);
    int contarHabImpares(pnodoAbb);
    int altura(pnodoAbb);
    void dibujarNodo(vector<string>& output, vector<string> linkAbove, pnodoAbb nodo, int nivel, int minPos, char linkChar);
};

#endif // ARBOL_HPP
