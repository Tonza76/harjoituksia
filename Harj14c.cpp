//*****************************************************************
//TäSSä TEHTÄVÄSSÄ ON KÄYTETTÄVÄ C-kielen merkkitaulukoita! Taulukon määrittely on siis muotoa 
//char mjono[xx];

//Tee ohjelma, joka kysyy käyttäjältä 17 merkkiä
//pitkän merkkijonon(ei välilyäntejä).
//a) Ohjelma tulostaa merkkijonon käänteisessä järjestyksessä näytölle
//(tulostus tyyppiä "cout << mjono1[4];" jne)
//b) Ohjelma kääntää annetun merkkijonon toiseen
//merkkijonoon ja tulostaa sen näytälle
//(tulostus tyyppiä "cout << mjono2;")
//c) merkkijono voi olla kuinka pitkä
//tahansa(max 100 kirjainta).
//Syötetyn merkkijonon pituutta ei saa
//laskea millään kirjastofunktiolla
//(esim.lenght tms.) Ohjelma
//tutkii onko annettu merkkijono
//palindromi ja ilmoittaa sen käyttäjälle.
//Välilyönnit jonossa ovat sallittuja.
//
//Käyttäjä syöttää jonon : ABC_Kissa_kavelee
//ohjelma tulostaa : eelevak_assiK_CBA
//***************************************************************************
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
	for (int i = 16, j=0; i >= 0; i--,j++)
	{
		merkkijono2[j] = merkkijono1[i];

	}

	//merkkijono2[0] = merkkijono1[16];
	//merkkijono2[1] = merkkijono1[15];
	merkkijono2[17] = '\0'; // laitetaan loppumerkki jono2 merkkijonoon
	cout << "Kaannettyna:";
	cout << merkkijono2 << endl;*/
}