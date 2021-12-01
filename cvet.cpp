#include "cvet.h"
#include <iostream>

//Могуће је израчунати зараду од продаје цвета.Могуће је
//упоредити два цвета на једнакост(cvet1 == cvet2).Цветови су једнаки уколико су им
//једнаки називи
bool operator==(const Cvet& cvet1, const Cvet& cvet2) {

	if (strcmp(cvet1.naziv, cvet2.naziv) == 0) return true;
	else return false;
}
bool operator!=(const Cvet& cvet1, const Cvet& cvet2) {
	return !(cvet1 == cvet2);
}

ostream& operator<<(ostream& os, Cvet cvt)
{
	return os << cvt.naziv <<", ";
}
