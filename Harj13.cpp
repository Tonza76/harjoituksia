//Harjoitus 13 (Palautus vko 43)
//Tee ohjelma, joka kysyy etunimesi ja sukunimesi.Ohjelma
//yhdist�� nimet yhdeksi merkkijonoksi ja tulostaa ne
//lopuksi nayt�lle.
//
//
//a) Kayta cstring - kirjastoa(C:n merkkitaulukot)
//tehd�ksesi merkkijonojen yhdist�misen
//b) Kayta string - kirjastoa(C++:n merkkijonot)
//tehd�ksesi merkkijonojen yhdist�misen  TEE, JOS ON AIKAA
//
//Esimerkki
//Anna etunimi : Aku
//Anna sukunimi : Ankka
//Nimesi oli : Aku Ankka
//***************************************************************************
#include <iostream>
using namespace std;
#include <cstring>
int main()
{	
	char etunimi[15];
	char sukunimi[15];
	cout << "Anna etunimi: \n";
	cin >> etunimi;
	cout << "Anna sukunimi: \n";
	cin >> sukunimi;
	strcpy(etunimi, sukunimi);
	cout << "Nimesi on:" << etunimi << sukunimi;
}