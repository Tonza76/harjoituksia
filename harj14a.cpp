//**************************************************************************************************
//T�SS� TEHT�V�SS� ON K�YTETT�V� C-kielen merkkitaulukoita! Taulukon m��rittely on siis muotoa 
//char mjono[xx];

//Tee ohjelma, joka kysyy k�ytt�j�lt� 17 merkki�
//pitk�n merkkijonon(ei v�lily�ntej�).
//a) Ohjelma tulostaa merkkijonon k��nteisess� j�rjestyksess� n�yt�lle
//(tulostus tyyppi� "cout << mjono1[4];" jne)
//**************************************************************************************************
#include <iostream>
using namespace std;
#include<windows.h>   // ��kk�sten sy�tt�� varten!
int main()
{
	
	SetConsoleOutputCP(1252); // ��kk�sten sy�tt�� varten!
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