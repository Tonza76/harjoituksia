//**************************************************************************************************
//TäSSä TEHTÄVÄSSÄ ON KÄYTETTÄVÄ C-kielen merkkitaulukoita! Taulukon määrittely on siis muotoa 
//char mjono[xx];

//Tee ohjelma, joka kysyy käyttäjältä 17 merkkiä
//pitkän merkkijonon(ei välilyäntejä).
//b) Ohjelma kääntää annetun merkkijonon toiseen
//merkkijonoon ja tulostaa sen näytälle
//(tulostus tyyppiä "cout << mjono2;")
//**************************************************************************************************
#include <iostream>
using namespace std;
#include<windows.h>   // Ääkkösten syöttöä varten!
int main()
{

	char merkkijono1[17 + 1];
	char merkkijono2[17 + 1];
	cout << "Anna 17 merkkia pitka merkkijono:\n ";
	cin.getline(merkkijono1, 18);
	cout << "Syotit merkkijonon:\n " << merkkijono1 << endl;
	for (int i = 16, j = 0; i >= 0; i--, j++)
	{
		merkkijono2[j] = merkkijono1[i];

	}

	merkkijono2[0] = merkkijono1[16];
	merkkijono2[1] = merkkijono1[15];
	merkkijono2[17] = '\0';				// laitetaan loppumerkki jono2 merkkijonoon
	cout << "Kaannettyna:";
	cout << merkkijono2 << endl; 
}