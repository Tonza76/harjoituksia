//***************************************************************
//Tee ohjelma, joka tulostaa annetut kolme lukua suuruus-
//j�rjestyksess�(pienimm�st� suurimpaan) n�yt�lle
//(katso harj. 1 suunnitelma)
//a) k�yt� kokonaislukuja
//b) k�yt� liukulukuja(= reaalilukuja)
//***************************************************************
#include <iostream>
using namespace std;
int main()
{
	int Luku1;
	int Luku2;
	int Luku3;
	int ehto;
	cout << "Anna kolme lukua, L1 , L2 , L3:\n ";
	cin >> Luku1 >> Luku2 >> Luku3;
	if (Luku1 < Luku2 && Luku1 < Luku3 && Luku2 < Luku3)
	{
	
		cout << Luku1 << Luku2 << Luku3;
	}
		else if (Luku1 > Luku2 && Luku1 < Luku3 && Luku2 < Luku3)
		{
			cout << Luku2 << Luku1 << Luku3;
		}
			else if (Luku1 > Luku2 && Luku1 > Luku3 && Luku2 < Luku3)
			{
				cout << Luku2 << Luku3 << Luku1;
			}
				else if (Luku1 < Luku2 && Luku1 > Luku3 && Luku2 > Luku3)
				{
					cout << Luku3 << Luku1 << Luku2;
				}
					else if (Luku1 > Luku2 && Luku1 > Luku3 && Luku2 < Luku3)
					{
						cout << Luku2 << Luku1 << Luku3;

					}
						else if (Luku1 < Luku2 && Luku1 < Luku3 && Luku2 > Luku3)
						{
							cout << Luku1 << Luku3 << Luku2;

						}
							else if (Luku1 > Luku2 && Luku1 > Luku3 && Luku2 > Luku3)
							{
								cout << Luku3 << Luku2 << Luku1;
							}
		
}
