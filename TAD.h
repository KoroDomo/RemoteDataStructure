#pragma once
#include <string>

using namespace std;

class TAD {
private:
	string* E;
	int Dim;
	void copyData(string* acpy, int start, int end, short int paralel);
public:
	TAD();
	~TAD();
	void Alta(string x);
	string Baja();
	//overload 1 de baja
	string Baja(int posicion);
	string Buscar(string x);
};