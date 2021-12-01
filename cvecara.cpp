#include "cvecara.h"
#include <iostream>

void Cvecara::dodaj(Buket b1){
	if (((1, 2) * b1.nab_cena()) < b1.prod_cena()) {
		zarada -= b1.nab_cena();
		prvi = new Elem(b1, prvi);
	}
}



void Cvecara::prodaja(int pozicija) {
	Elem* tek = prvi, * stari=nullptr;

	int i = 0;
	while(tek) {
		if (i == pozicija) {
			break;
		}
		stari = tek;
		tek = tek->sled;
		i++;
	}
	if (tek != nullptr && stari!=nullptr) {
		zarada += tek->buket.prod_cena();
		stari->sled = tek->sled;
		
		delete tek;
	}
	else if (tek != nullptr && stari == nullptr){
		Elem* temp;
		temp = prvi;
		prvi = tek->sled;
		delete temp;
		
		
	}
	else printf("Ne postoji taj clan");
}

void Cvecara::ispis(){
	cout << "zarada= " << zarada << "RSD";//PROMENJENO IZ Printf
	putchar('\n');
	Elem* tek;
	for (tek = prvi; tek; tek = tek->sled) {

		tek->buket.ispisi();
		putchar('\n');
	}
}




/*
Могуће је продати букет са задате позиције. Продати букет се
уклања из цвећаре, а потом се увећава зарада цвећаре за продајну цену букета.


Могуће је исписати цвећару у излазни ток (it<<buket), тако што се у првом реду исписује зарада у
облику zarada=зарадаRSD, а потом се букети исписују у појединачним редовима.
*/

