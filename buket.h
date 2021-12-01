#ifndef _buket_h_
#define _buket_h_
#include <string>
#include <iostream>
#include "cvet.h"

using namespace std;

class Buket {
	struct Elem {
		Cvet cve;
		Elem* sled = nullptr;
		int obisao = 0;
		Elem(Cvet cvt, Elem* next = nullptr) : cve(cvt), sled(next) {} // konstruktor strukture elem
	};
	Elem* prvi = nullptr;
	int nab_buket = 0;//zato sto se stvara prazan
	int prod_buket = 0;
	




public:

	Buket() = default;// ovim kontruktorom se kreira buket,povratio sam podrazumevani konstruktor,zato sto se njegova podrazumevana vrednost bez argumenata obrisati(njegova definicija se brise ako se pozove bilo koji drugi kontruktor
	

	void dodaj(Cvet cve);
	
	int nab_cena() { return nab_buket; }
	
	int prod_cena() { return prod_buket; }
	
	int zarada() const { return nab_buket - prod_buket; }
	
	
	friend bool operator>(const Buket& b1,const Buket& b2);
	
	friend void operator<<(ostream& os, Buket b) {
		b.ispisi();
	}

	void ispisi();
	Buket(const Buket& b);//kopirajuci konstruktor
	Buket(Buket&& b);//premestajuci konstruktor
	~Buket();//destruktor
};





#endif