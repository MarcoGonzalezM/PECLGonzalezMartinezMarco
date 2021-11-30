#include "Arbol.hpp"

Arbol::Arbol(){
}

Arbol::~Arbol(){
    raiz = NULL;
}

void Arbol::insertar(Paciente * valor){
    insertar(raiz,valor);
}

pnodoAbb Arbol::insertar(pnodoAbb nodo, Paciente * valor){
    //Me falla
    if (!nodo){
        nodo = pnodoAbb(valor);
    } else{
        if (valor<=nodo->valor){
            nodo->izq = insertar(nodo->izq, valor);
        } else {
            nodo->der = insertar(nodo->der, valor);
        }
    }
    return nodo;
}

void Arbol::preordenIzq(){
    preorden(raiz->izq);
}

void Arbol::preordenDer(){
    preorden(raiz->izq);
}


void Arbol::preorden(pnodoAbb nodo){
    if (nodo){
        nodo->valor->mostrar();
        preorden(nodo->izq);
        preorden(nodo->der);
    }
}

void Arbol::inorden(){
    inorden(raiz);
    }

void Arbol::inorden(pnodoAbb nodo){
    if (nodo){
        inorden(nodo->izq);
        nodo->valor->mostrar();
        inorden(nodo->der);
    }
}

int Arbol::contarHabImpares(){
    return contarHabImpares(raiz);
}

int Arbol::contarHabImpares(pnodoAbb nodo){
    if (!nodo or not(nodo->hayHabImpares())){
        return 0;
    } else {
        if(nodo->valor->getHabitacion()%2){
            return 1 + contarHabImpares(nodo->izq) + contarHabImpares(nodo->der);
        } else {
            return contarHabImpares(nodo->izq) + contarHabImpares(nodo->der);
        }
    }
}

pnodoAbb Arbol::subArbolIzq(){
    return raiz->izq;
}
pnodoAbb Arbol::subArbolDer(){
    return raiz->der;
}


int Arbol::altura(pnodoAbb nodo){
    if (!nodo->valor){
        return -1;
    } else {
        if (!nodo->izq || !nodo->der){
            return 0;
        } else {
            return 1 + max(altura(nodo->izq),altura(nodo->der));
        }
    }
}

void Arbol::dibujar(){
    int h = altura(raiz);
    vector<string> output(h), linkAbove(h);
    dibujarNodo(output, linkAbove, raiz, 0, 5, ' ');
    for(int i = 1; i < h; i++) {
        for(int j = 0; j < linkAbove[i].size(); j++) {
            if(linkAbove[i][j] != ' '){
                int size = output[i - 1].size();
                if(size < j + 1)
                    output[i - 1] += string(j + 1 - size, ' ');
                int jj = j;
                if(linkAbove[i][j] == 'L') {
                    while(output[i - 1][jj] == ' ')
                        jj++;
                    for(int k = j + 1; k < jj - 1; k++)
                        output[i - 1][k] = '_';
                } else if(linkAbove[i][j] == 'R') {
                    while(output[i - 1][jj] == ' ')
                        jj--;
                    for(int k = j - 1;k > jj + 1; k--)
                        output[i - 1][k] = '_';
                }
                linkAbove[i][j] = '|';
            }
        }
    }
    cout << '\n' << '\n';
    for(int i = 0; i < h; i++) {
        if(i)
            cout << linkAbove[i] << '\n';
        cout << output[i] << '\n';
    }
    cout << '\n' << '\n';
}

void Arbol::dibujarNodo(vector<string>& output, vector<string> linkAbove, pnodoAbb nodo, int nivel, int p, char linkChar){
    if(!nodo)
        return;
    int h = output.size();
    string SP = " ";
    if(p < 0) {
        string extra(-p, ' ');
        for(string& s : output)
            if(!s.empty())
                s = extra + s;
        for(string& s : linkAbove)
            if(!s.empty())
                s = extra + s;
    }
    if(nivel < h - 1)
    p = max(p, (int)output[nivel + 1].size());
    if(nivel > 0)
        p = max(p, (int)output[nivel - 1].size());
    p = max(p, (int)output[nivel].size());
    if(nodo->izq) {
        int numeroQueQuieroImprimirEnElArbol =
            nodo->izq->valor->getHabitacion(); // En vez de este valor, tenéis que coger el nº de habitación
        string izqdato = SP + to_string(numeroQueQuieroImprimirEnElArbol) + SP;
        dibujarNodo(output, linkAbove, nodo->izq, nivel + 1, p - izqdato.size(), 'L');
        p = max(p, (int)output[nivel + 1].size());
    }
    int space = p - output[nivel].size();
    if(space > 0)
        output[nivel] += string(space, ' ');
    int numeroQueQuieroImprimirEnElArbol =
        nodo->valor->getHabitacion(); // En vez de este valor, tenéis que coger el nº de habitación
    string nododato = SP + to_string(numeroQueQuieroImprimirEnElArbol) + SP;
    output[nivel] += nododato;
    space = p + SP.size() - linkAbove[nivel].size();
    if(space > 0)
        linkAbove[nivel] += string(space, ' ');
    linkAbove[nivel] += linkChar;
    if(nodo->der)
        dibujarNodo(output, linkAbove, nodo->der, nivel + 1, output[nivel].size(), 'R');    
}