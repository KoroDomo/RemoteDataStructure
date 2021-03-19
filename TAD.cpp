
#include "TAD.h"
#include <fstream>
#include <sstream>
#include <string>
#include <string>

TAD::TAD() {
	this->Dim = 0;
}
TAD::~TAD() {
	delete E;
}
void TAD::Alta(string x) {
	string* acopy = E;
	Dim++;
	this->E = new string[Dim];
	copyData(acopy, 0, Dim - 1, 0);
	this->E[Dim - 1] = x;
}
void TAD::copyData(string* acpy, int start, int end, short int paralel) {
	for (int k = start; k < Dim; k++)
		this->E[k] = acpy[k + paralel];
}
string TAD::Baja() {
	string* acopy = E;
	string bajado = acopy[Dim - 1];
	Dim--;
	this->E = new string[Dim];
	copyData(acopy, 0, Dim, 0);
	return bajado;
}
string TAD::Baja(int posicion) {
	if (posicion < 0 || posicion > Dim - 1)
		return NULL;
	string* acopy = E;
	string bajado = acopy[posicion];
	Dim--;
	this->E = new string[Dim];
	copyData(acopy, 0, posicion, 0);
	copyData(acopy, posicion + 1, Dim + 1, 1);
	return bajado;
}
string TAD::Buscar(string delta) {
	string buscado = NULL;
	for (int k = 0; k < Dim; k++)
		if (E[k] == delta)
			buscado = E[k];
	return buscado;
}