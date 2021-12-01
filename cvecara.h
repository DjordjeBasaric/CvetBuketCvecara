#ifndef _cvecara_h_
#define _cvecara_h_
#include <string>
#include "buket.h"
#include "cvet.h"
using namespace std;

class Cvecara {
	
	struct Elem {
		Elem* sled = nullptr;
		Buket buket;
		Elem(Buket b1, Elem* next = nullptr) : buket(b1), sled(next) {};
	};
	Elem* prvi = nullptr;
	int zarada = 1000;
	
	public:
		Cvecara() = default;
		void dodaj(Buket b1);
		void prodaja(int pozicija);
		void ispis();
		friend void operator<<(ostream& os, Cvecara c) {
			c.ispis();
		}
};
/*
Цвећара садржи произвољан број букета уређених растуће по продајној цени и целобројну
зараду која је при стварању 1000. Ствара се празна, након чега је букете могуће додати
појединачно.Додавање букета се игнорише уколико је проценат(у односу на набавну цену)
од продаје букета мањи од 20 % .При додавању букета у цвећару, зарада цвећаре се умањује
за набавну цену букета.Могуће је продати букет са задате позиције.Продати букет се
уклања из цвећаре, а потом се увећава зарада цвећаре за продајну цену букета.Могуће је
исписати цвећару у излазни ток(it << buket), тако што се у првом реду исписује зарада у
облику zarada = зарадаRSD, а потом се букети исписују у појединачним редовима.
*/


#endif