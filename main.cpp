#include "cvet.h"
#include "buket.h"
#include "cvecara.h"
#include <iostream>
using namespace std;

int main() {
	
	char ime1[] = "Lala";
	char ime2[] = "Nana";
	char ime3[] = "Nana";
	char ime4[] = "Trava";
	char ime5[] = "Nana";
	char ime6[] = "Konj";

	Cvet cvet1(ime1, 10, 200);
	Cvet cvet2(ime2, 10, 200);
	Cvet cvet3(ime3, 10, 200);
	Cvet cvet4(ime4, 10, 200);
	Cvet cvet5(ime5, 10, 200);
	Cvet cvet6(ime6, 10, 200);
	
	Buket b1;

	b1.dodaj(cvet1);
	b1.dodaj(cvet2);
	b1.dodaj(cvet3);
	b1.dodaj(cvet4);
	b1.dodaj(cvet5);
	b1.dodaj(cvet6);
	
	
	char ime7[] = "Ljubicica";
	char ime8[] = "Kamilica";
	char ime9[] = "Zutic";
	char ime10[] = "Magarac";
	char ime11[] = "Krava";
	char ime12[] = "Avion";

	Cvet cvet7(ime7, 10, 200);
	Cvet cvet8(ime8, 10, 200);
	Cvet cvet9(ime9, 10, 200);
	Cvet cvet10(ime10, 10, 200);
	Cvet cvet11(ime11, 10, 200);
	Cvet cvet12(ime12, 10, 200);

	Buket b2;

	

	b2.dodaj(cvet7);
	b2.dodaj(cvet8);
	b2.dodaj(cvet9);
	b2.dodaj(cvet10);
	b2.dodaj(cvet11);
	b2.dodaj(cvet12);

	//cout << b1;
	//putchar('\n');
	//b1.ispisi();
	//b1.ispisi();
	//b2.ispisi();
	
	//printf("%d %d", b1.nab_cena(), b2.nab_cena());

	char ime13[] = "Lala";
	char ime14[] = "Kamilica";
	char ime15[] = "Nana";
	char ime16[] = "Zutic";
	char ime17[] = "Bela rada";
	char ime18[] = "Ljubicica";

	Cvet cvet13(ime13, 10, 200);
	Cvet cvet14(ime14, 10, 200);
	Cvet cvet15(ime15, 10, 200);
	Cvet cvet16(ime16, 10, 200);
	Cvet cvet17(ime17, 10, 200);
	Cvet cvet18(ime18, 10, 200);

	

	Buket b3;
	
	

	b3.dodaj(cvet13);
	b3.dodaj(cvet14);
	b3.dodaj(cvet15);
	b3.dodaj(cvet16);
	b3.dodaj(cvet17);
	b3.dodaj(cvet18);
	
	Cvecara c1;

	c1.dodaj(b1);
	c1.dodaj(b2);
	c1.dodaj(b3);
	cout << c1;
	c1.prodaja(2);
	cout << c1;
	
	

	printf("\nZavrsio sam");


}