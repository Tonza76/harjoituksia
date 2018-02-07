#include <iostream>				//kirjastotojen sis‰llytys esik‰sittelijaan
using namespace std;			// Standardi nimiavaruus otetaan kayttoon
#define MINIMI 10				//Symbolinen vakio
#define MAKSIMI 20				//Globaali vakio
int summa;						//Globaali muuttuja
void Laske(int, int);			//aliohjelman esittely
void main()						//p‰‰ohjelma alkaa
{								// ohjelma alkaa
	int luku1;					//p‰‰ohjelman muuttuja
	int luku2;					//p‰‰ohjelman muuttuja
	cout<<"Syota luku1: ";		// Syotetaan luku1
	cin>>luku1;					// Tulostetaan syotetty luku
	cout<<"Syota luku2: ";		// Syotetaan luku2
	cin>>luku2;					// Tulostetaan luku2
	Laske(luku1, luku2);		// Ohjelma laskee yhteen luvut 1 ja 2
	if (summa < MINIMI)			// Jos summa pienempi kuin MINIMI
		cout<<"\nSumma on pienempi kuin MINIMI:";// Tulostetaan tulos
	if (summa >= MINIMI)//Jos summa pienempi tai yhtasuuri kuin MINIMI ja pienempi kuin MAKSIMI
		cout<<"\nSumma MINIMIN ja MAKSIMIN valissa";// Tulostetaan tulos
	if (summa > MAKSIMI)		// Jos summa pienempi kuin MAKSIMI
		cout<<"\nSumma suurempi kuin MAKSIMI:";// Tulostetaan tulos
	
}								// ohjelma p‰‰ttyy
void Laske(int eka, int toka)  //aliohjelma alkaa
{								// ohjelma alkaa
	summa = eka + toka;			// aliohjelman laskutoimitus
}								// aliohjelma p‰‰ttyy