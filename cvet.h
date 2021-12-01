#ifndef _cvet_h_
#define _cvet_h_
#include <string>
#include <iostream>
using namespace std;

class Cvet {
	char* naziv;
	int nabavna;
	int prodajna;

public:
	Cvet(char* naz, int nab, int prod) : naziv(naz), nabavna(nab), prodajna(prod){} //stvaranje

	char* dohvNaziv() const { return naziv; }
	int dohvNabavna() const { return nabavna; }
	int dohvProdajna() const { return prodajna; }
	int zarada() { return nabavna - prodajna; }
	//friend bool poredjenje(const Cvet& cvet1, const Cvet& cvet2) {//const je da cvet1 necemo menjati dok se fukncija bude izvrsavala
		
	//void ispiscvet() const;

	friend bool operator==(const Cvet& cvet1, const Cvet& cvet2);
	friend bool operator!=(const Cvet& cvet1, const Cvet& cvet2);
	friend ostream& operator << (ostream& os, Cvet cvt);
};

#endif
