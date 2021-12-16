#include "Arbol.hpp"

Arbol::Arbol(){
	raiz = NULL;
}

Arbol::~Arbol(){
}

int Arbol::getTamanno(){
	return getTamanno(raiz);
}

int Arbol::getTamanno(pnodoAbb nodo){
	if (!nodo){
		return 0;
	} else{
		if (nodo->esHoja()){
			return 1;
		}
		return 1 + getTamanno(nodo->izq) + getTamanno(nodo->der);
	}
}

void Arbol::insertar(Paciente * valor){
    raiz = insertar(raiz,valor);
}

pnodoAbb Arbol::insertar(pnodoAbb nodo, Paciente * pac){
	if (!nodo){
		nodo = new NodoArbol(pac);
	} else{
		if (pac->getHabitacion() <= nodo->valor->getHabitacion()){
			nodo->izq = insertar(nodo->izq, pac);
		} else {
			nodo->der= insertar(nodo->der, pac);
		}
	}
	return nodo;
}

void Arbol::inordenIzq(){
    inorden(raiz->izq);
}

void Arbol::inordenDer(){
    inorden(raiz->der);
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
	if (!raiz->hayHabImpares()){
		return 0;
	}
	return contarHabImpares(raiz);
}

int Arbol::contarHabImpares(pnodoAbb nodo){
	if (!nodo){
		return 0;
	} else {
			return nodo->valor->getHabitacion()%2 + contarHabImpares(nodo->izq) + contarHabImpares(nodo->der);
	}
}

pnodoAbb Arbol::subArbolIzq(){
	return raiz->izq;
}
pnodoAbb Arbol::subArbolDer(){
	return raiz->der;
}

pnodoAbb Arbol::minimo(){
	return minimo(raiz);
}

pnodoAbb Arbol::maximo(){
	return maximo(raiz);
}

pnodoAbb Arbol::minimo(pnodoAbb nodo){
	if (!nodo){
		return NULL;
	} else{
		if (!nodo->izq){
			return nodo;
		} else{
			return minimo(nodo->izq);
		}
	}
}

pnodoAbb Arbol::maximo(pnodoAbb nodo){
	if (!nodo){
		return NULL;
	} else{
		if (!nodo->der){
			return nodo;
		} else{
			return maximo(nodo->der);
		}
	}
}

void Arbol::mostrarHojas(){
	mostrarHojas(raiz);
}

void Arbol::mostrarHojas(pnodoAbb nodo){
	if (!nodo) return;
	if (nodo->esHoja()){
		nodo->valor->mostrar();
	} else {
		mostrarHojas(nodo->izq);
		mostrarHojas(nodo->der);
	}
}

void Arbol::eliminarPaciente(int hab){
	raiz = eliminarPaciente(raiz,hab);
}

pnodoAbb Arbol::eliminarPaciente(pnodoAbb nodo, int hab){
	if(nodo){
			if (hab==nodo->valor->getHabitacion()){
			nodo = eliminarNodo(nodo);
		} else {
			if (hab<nodo->valor->getHabitacion()){
				nodo->izq = eliminarPaciente(nodo->izq, hab);
			} else {
				nodo->der = eliminarPaciente(nodo->der, hab);
			}
		}
	}
	return nodo;
}

pnodoAbb Arbol::eliminarNodo(pnodoAbb nodo){
	if (!nodo){
		return nodo->izq;
	} else {
		if (nodo->esHoja()){
			return nodo->izq;
		}
		if (!nodo->izq){
			return nodo->der;
		} else {
			Paciente* aux = maximo(nodo->izq)->getPaciente(); 
			nodo->izq = eliminarPaciente(nodo->izq, aux->getHabitacion());
			nodo->valor = aux;
			return nodo;
		}
	}
}

int Arbol::altura(pnodoAbb nodo){
    if (!nodo){
        return 0;
    } else {
        if (nodo->esHoja()){
            return 0;
        } else {
            return 1 + max(altura(nodo->izq),altura(nodo->der));
        }
    }
}

void Arbol::dibujar(){
	int h = 1 + altura(raiz);
	vector<string> output(h), linkAbove(h);
	dibujarNodo(output, linkAbove, raiz, 0, 5, ' ');
	for(int i = 1; i < h; i++) {
		for(int j = 0; j < linkAbove[i].size(); j++) {
			if(linkAbove[i][j] != ' '){
				int size = output[i - 1].size();
				if(size < j + 1) output[i - 1] += string(j + 1 - size, ' ');
				int jj = j;
				if(linkAbove[i][j] == 'L') {
					while(output[i - 1][jj] == ' ') {
						jj++;
					}
					for(int k = j + 1; k < jj - 1; k++){
						output[i - 1][k] = '_';
					}
				} else if(linkAbove[i][j] == 'R') {
					while(output[i - 1][jj] == ' '){
						jj--;
					}
					for(int k = j - 1;k > jj + 1; k--){
						output[i - 1][k] = '_';
					}
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
            if(!s.empty()) s = extra + s;
        for(string& s : linkAbove)
            if(!s.empty()) s = extra + s;
    }
    if(nivel < h - 1) p = max(p, (int)output[nivel + 1].size());
    if(nivel > 0) p = max(p, (int)output[nivel - 1].size());
    p = max(p, (int)output[nivel].size());
    if(nodo->izq) {
        string izqdato = SP + to_string(nodo->izq->valor->getHabitacion()) + SP; // Se accede al número de habitación del paciente
        dibujarNodo(output, linkAbove, nodo->izq, nivel + 1, p - izqdato.size(), 'L');
        p = max(p, (int)output[nivel + 1].size());
    }
    int space = p - output[nivel].size();
    if(space > 0) output[nivel] += string(space, ' ');
    string nododato = SP + to_string(nodo->valor->getHabitacion()) + SP; // Se accede al número de habitación del paciente
    output[nivel] += nododato;
    space = p + SP.size() - linkAbove[nivel].size();
    if(space > 0) linkAbove[nivel] += string(space, ' ');
    linkAbove[nivel] += linkChar;
    if(nodo->der)
        dibujarNodo(output, linkAbove, nodo->der, nivel + 1, output[nivel].size(), 'R');    
}