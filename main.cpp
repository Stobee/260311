#include <iostream>


using namespace std;




int main()
{
	int Basket = 0;
	int ChangeTime = 0;
	int FirstBasket = 0;
	int LastBasket = 0;
	
	cin >> Basket >> ChangeTime;

	int* Baskets = new int[Basket];
	int BastketCount = 0;

	for (int i = 0; i < Basket; i++)
	{
		Baskets[i] = i + 1;
	}

	for (int i = 0; i < ChangeTime; i++)
	{
		cin >> FirstBasket >> LastBasket;

		for (int j = FirstBasket - 1; j < LastBasket - 1 ; j++) {
			int Temp = 0;
			BastketCount = LastBasket - 1;

			Temp = Baskets[j]; 
			Baskets[j] = Baskets[BastketCount];
			Baskets[BastketCount] = Temp;
			BastketCount--;
		}


	}
	for (int i = 0; i < Basket; i++)
	{
		cout << Baskets[i] << " ";
	}
	
	delete[] Baskets;
	

	return 0;
}