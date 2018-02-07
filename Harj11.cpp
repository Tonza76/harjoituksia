//***************************************************************
//Tee ohjelma, joka toimii laskimena.
//Käyttäjältä kysytään kaksi kokonaislukua,
//jonka jälkeen ohjelma antaa valikon
//laskutoimituksista.Valikko nayttaa
//seuraavalta :

//VALIKKO
//0. Lopetus
//1. Summa
//2. Erotus
//3. Tulo
//4. Osamaara
//5. Jakojaannos
//6.Syota uudet luvut laskemista varten
//Lopuksi ohjelma tulostaa valitun tuloksen naytölle.
//**************************************************************
#include <iostream>
using namespace std;
int main()
{
	int L1;									// maaritellaan muuttujat
	int L2;									// maaritellaan muuttujat
	int valinta;							// maaritellaan muuttujat
	cout << "Anna kokonaisluku: L1 \n";
	cin >> L1;
	cout << "Anna kokonaisluku: L2 \n";
	cin >> L2;
	cout << "VALIKKO:\n";
	cout << "0.Lopetus: \n";
	cout << "1.Summa: \n";
	cout << "2.Erotus:\n";
	cout << "3.Tulo: \n";
	cout << "4.Osamaara:\n";
	cout << "5.Jakojaannos:\n";
	cout << "6.Syota uudet luvut laskemista varten: \n";
	cin >> ws >> valinta;
	switch (valinta)									// switch aloitta switch lauseen
	{
	case 1: cout << "Summa: " << L1 + L2 << endl;	// case merkitsee kohdan mihin tietyllä arvolla päädytään
		break;											// brake hyppää ulos switch lauseesta
	case 2: cout << "Erotus: " << L1 - L2 << endl;
		break;
	case 3: cout << "Tulo: " << L1 * L2 << endl;
		break;
	case 4: cout << "Osamaara: " << L1 / L2 << endl;
		break;
	case 5: cout << "Jakojaannos: " << L1 % L2 << endl;

	default: cout << "Syota uudet luvut: ";

		return valinta;

	}

	
	
	
		
	
	
}