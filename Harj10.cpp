//***************************************************************
//Tee ohjelma, joka laskee syötetyistä kokonaisluvuista sekä positiivisten
//että negatiivisten kokonaislukujen osuuden.Lukujen syöttö lopetetaan
//syöttämällä luku 0.
//
//Tulostus:
//Syötit kokonaislukuja seuraavasti :
//----------------------------------
//Negatiiviset 7 kpl 70.00%
//Positiiviset 3 kpl 30.00%
//Yhteensä 10 kpl 100.00%
//****************************************************************
#include <iostream>
using namespace std;
int main()
{
	float Luku=1;		// annetaan reaaliluvut
	float Pos = 0;
	float Neg = 0;
	while (Luku != 0)	// Kun luku erisuuri(!=) kuin nolla laskenta lähtee eteenpäin
	{
		cout << "Anna kokonaisluku: \n";
		cin >> Luku;
		cout << "Syötit luvun: " << Luku << endl;
		if (Luku > 0)
		{
			Pos++;						// Ottaa positiivisen arvon ja lisää siihen yhden
		}
		if (Luku < 0)
		{
			Neg++;
		}
	}
	float Pos_pros = (Pos / (Pos + Neg)) * 100;  // Jos Pos ja Neg int mallia, jakolaskun tulos on 0.
	float Neg_pros = (Neg / (Pos + Neg)) * 100;
	float Luku_pros = ((Neg + Pos)/ (Neg + Pos)) * 100;
	cout << "Syötit kokonaislukuja: " << endl;
	cout << "Positiiviset: " << Pos << " Kpl " << Pos_pros << " % " << endl;
	cout << "Negatiiviset: " << Neg << " Kpl " << Neg_pros << " % " << endl;
	cout << "Yhteensä: " << Neg+Pos << " Kpl " << Luku_pros << " % " << endl;
}