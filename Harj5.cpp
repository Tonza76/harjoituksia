#include <iostream>						// toimintaohje esikääntäjälle,aliohjelmakirjasto
using namespace std;					// käytetään standardi funktioita, ilman komento (std cout)
int luku1;								// maaritellaan luku1 kokonaisluvuksi
int luku2;								// maaritellaan luku2 kokonaisluvuksi
int main()								// pakollinen pääohjelman nimi
{
	cout << "Syota luku1: ";			// Annetaan luku1
	cin >> luku1;						// Syotetaan luku1
	cout << "Syota luku2: ";			// Annetaan luku2
	cin >> luku2;						// Syötetään luku 2
	if (luku1 != luku2)					// määritellään ehto sille jos luku 1 on erisuuri kuin luku 2
	cout << "BONGO:\n ";				// tulostetaan erisuuren tapauksessa BONGO
	else if (luku1 = luku2)				// jos luku 1 ja luku 2 ovat samoja 
	cout << "BINGO:\n ";				// tässä tulostetaan BINGO
}