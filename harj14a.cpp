//**************************************************************************************************
//TäSSä TEHTÄVÄSSÄ ON KÄYTETTÄVÄ C-kielen merkkitaulukoita! Taulukon määrittely on siis muotoa 
//char mjono[xx];

//Tee ohjelma, joka kysyy käyttäjältä 17 merkkiä
//pitkän merkkijonon(ei välilyäntejä).
//a) Ohjelma tulostaa merkkijonon käänteisessä järjestyksessä näytölle
//(tulostus tyyppiä "cout << mjono1[4];" jne)
//**************************************************************************************************
#include <iostream>
using namespace std;
#include<windows.h>   // Ääkkösten syöttöä varten!
int main()
{
	
	SetConsoleOutputCP(1252); // Ääkkösten syöttöä varten!
	char merkkijono[17 + 1];
	cout << "Anna 17 merkkia pitka merkkijono:\n ";
	cin.getline(merkkijono, 18);
	cout << "Syotit merkkijonon:\n " << merkkijono << endl;
	cout << "Kaannettyna: \n"; 
							   
	for (int i = 16; i >= 0; i--)
	{
		cout << merkkijono[i];

	}
	cout << endl;
}