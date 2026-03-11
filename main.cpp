#include <iostream>
#include "StringUtill.h"

using namespace std;



int ShowFlexArray(int Num) {
	
	int* NumArray = nullptr; // 변수 채우기 전에 초기화와 비슷
	NumArray = new int[Num];
	if (!NumArray) // (NumArray == nullptr)
	{
		return -1;
	}

	for (int i = 0; i < Num; i++)
	{
		NumArray[i] = i + 1;
		cout << NumArray[i] << " ";
	}
	delete[] NumArray;
	
	return 0;	
}

int main()
{
	int Basket = 0;
	int ChangeTime = 0;
	int FirstBasket = 0;
	int LastBasket = 0;
	
	cin >> Basket >> ChangeTime;

	int* Baskets = new int[Basket];
	int* TempBaskets = new int[Basket];

	for (int i = 0; i < Basket; i++)
	{
		Baskets[i] = i + 1;
		TempBaskets[i] = i + 1;
	}

	for (int i = 0; i < ChangeTime; i++)
	{
		cin >> FirstBasket >> LastBasket;

		for (int j = LastBasket; j < FirstBasket; j--) {
			int k = FirstBasket;
			k++;
			Baskets[j] = TempBaskets[k];
		}


	}
	
	delete[] Baskets;
	delete[] TempBaskets;

	return 0;
}