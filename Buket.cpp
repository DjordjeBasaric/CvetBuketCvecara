#include "buket.h"
#include <iostream>

void Buket::dodaj(Cvet cve){
	prvi = new Elem(cve, prvi); //dodajem novi element na pocectak ove liste;
	nab_buket += cve.dohvNabavna();
	prod_buket += cve.dohvProdajna();
	
}
	
//struct Elem {
//	Cvet cve;
//Elem* sled = nullptr;
//	int obisao = 0;
//	Elem(Cvet cvt, Elem* next = nullptr) : cve(cvt), sled(next) {} // konstruktor strukture elem
//};

bool operator >(const Buket& b1,const Buket& b2)
{
	if (b1.prod_buket > b2.prod_buket) return true;
	else return false;
}


void Buket::ispisi(){
	Elem* tek = prvi;
	
	if (tek == nullptr) {
		return;
	}
	printf("(");
	
	while (tek!=nullptr) {
		int brojac = 0;
		Elem* provera = tek->sled;
		while (provera) {
			if (tek->cve.dohvNaziv() == provera->cve.dohvNaziv() == 1 && brojac == 0) {//ovde samo iskoristio cvet1==cvet2
				brojac++;
				provera->obisao = brojac;
			}
			provera = provera->sled;
		}
		tek = tek->sled;
	}
	tek = prvi;
	while (tek) {
		if (tek->obisao == 0) {
			cout<< tek->cve.dohvNaziv()<<", ";
		}
		
		tek = tek->sled;
	}
	printf(") %dRSD", prod_buket); //ISPRAVITI U COUT
	
}




//KOPIJEE
Buket::Buket(const Buket& b) {//on radi duboku kopiju, tako da u tekuci objkeat prekopiramo u drugi
	nab_buket = b.nab_buket;
	prod_buket = b.prod_buket;
	
	Elem* tek = b.prvi;
	Elem* novi;
	Elem* posl=nullptr;

	while (tek) {
		novi = new Elem(tek->cve);
		if (!prvi) prvi = novi;
		else posl->sled = novi;
		posl = novi;
		tek = tek->sled;
	}


}
Buket::Buket(Buket&& b){//Pravi plitku kopiju
	nab_buket = b.nab_buket;
	prod_buket = b.prod_buket;
	prvi = b.prvi;
	b.prvi = nullptr; // obavezno staviti da ne bi povukao ceclu listu i obrisao je
}
//DESTRUKTOR
Buket::~Buket() {//MOZDAAA NIJEE DOBROO PROVERIITIIII
	Elem* tek = prvi, * stari;
	while (tek) {
		stari = tek;
		tek = tek->sled;
		
		delete stari;
		
		//samo oslobadja memoriju koju zauzima cvor liste
		if (tek == prvi) {
			prvi = tek;
		}
	}
}




