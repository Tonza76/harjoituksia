#include <iostream>						// toimintaohje esik‰‰nt‰j‰lle,aliohjelmakirjasto
using namespace std;					// k‰ytet‰‰n standardi funktioita, ilman komento (std cout)
double luku1;
double luku2;
int main()								// pakollinen p‰‰ohjelman nimi
{
	cout << "Paljonko lompakossa on rahaa: ";	
	cin >> luku1;
	cout << "Paljonko lihapiirakka maksaa: ";
	cin >> luku2;						
	if (luku1 > luku2)					
		cout << "Sinulle j‰i viel‰ rahaa:\n ";				
	else if (luku1 < luku2)				
		cout << "Kannattaisiko paastota:\n ";				
}