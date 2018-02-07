//*****************************************************************
//Harjoitus 15 (Palautus vko 45)
//
//Tee ohjelma, joka kysyy henkilötietosi seuraavasti :
//Anna(kaikki) etunimesi(merkkijono) :
//	Anna kengannumero(kokonaisluku) :
//	Anna sukunimi(merkkijono) :
//	Anna koulumatka(reaaliluku) :
//	Anna osoitteesi :
//Anna postinumero :
//
//Ohjelma tulostaa tiedot seuraavasti :
//sukunimi etunimet
//osoite
//postinumero
//kengannumero ja koulumatka
//
//Käytä C++:n cin - ja cout - olioita ohjelman toteuttamiseen.
//****************************************************************
#include <iostream>
using namespace std;
int main()
{
	char etunimet[30];
	int kengannumero;
	char sukunimi[30];
	float koulumatka;
	char osoite[30];
	int postinumero;
	cout << "Anna molemmat etunimesi: \n";
	cin.get(etunimet, 30);
	cout << "Anna kengannumero: \n";
	cin >> kengannumero;
	cout << "Anna sukunimi: \n";
	cin >> sukunimi;
	cout << "Anna koulumatka: \n";
	cin >> koulumatka;
	cout << "Anna osoite: \n";
	cin >> osoite;
	cout << "Anna postinumero: \n";
	cin >> postinumero;
	cout << "\n";
	cout << sukunimi << etunimet;
	cout << "\n";
	cout <<  osoite;
	cout << "\n";
	cout <<  postinumero;
	cout << "\n";
	cout <<  kengannumero << koulumatka;
	cout << "\n";



}