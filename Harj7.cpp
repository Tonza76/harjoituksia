//***************************************************************
//Tee ohjelma, joka kysyy käyttäjältä nimen, pituuden sentteinä ja painon kiloina. 
//Ohjelma laskee ja tulostaa käyttäjän ihannepainon(pituus - 100).Lisäksi
//ohjelma kertoo käyttäjän nykyisen painon eron kiloina verrattuna ihanne -
//painoon.
//****************************************************************
#include <iostream>
using namespace std;
void main()
{
	char nimi[11] ;
	int pituus;
	int paino;
	cout << "Anna nimesi:";
	cin >> nimi;
	cout << "Anna sinun pituutesi cm:";
	cin >> pituus;
	cout << "Anna painosi kg: ";
	cin >> paino;
	cout << "Painosi: " << paino << endl;
	cout << "Ihanne painosi kg: " << pituus - 100 << endl;
	cout << "Painosi yli ihannepainon kg: " << paino - (pituus - 100) << endl;
	


	
	



}