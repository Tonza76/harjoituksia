//***************************************************************
//Tee ohjelma, joka kysyy k�ytt�j�lt� nimen, pituuden senttein� ja painon kiloina. 
//Ohjelma laskee ja tulostaa k�ytt�j�n ihannepainon(pituus - 100).Lis�ksi
//ohjelma kertoo k�ytt�j�n nykyisen painon eron kiloina verrattuna ihanne -
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