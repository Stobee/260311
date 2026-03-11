#include <iostream>
#include "StringUtill.h"

using namespace std;



void ShowFlexArray(int Num) {
	
	int* NumArray = new int[Num];

	for (int i = 0; i < Num; i++)
	{
		NumArray[i] = i + 1;
		cout << NumArray[i] << " ";
	}
	delete[] NumArray;
				
}

int main()
{
	// 숫자를 입력 받아서 그걸 크기로 숫자 배열을 만듬
	// 1부터 크기까지 초기화 하고 출력하는 프로그램

	while (true)
	{	
		int Num = 0;
		cin >> Num;
		if (Num < 1000)
		{
			ShowFlexArray(Num);
			break;
		}
		else
		{
			cout << "1000보다 작은 수를 입력해주세요" << endl;
		}
	}

	
	

	return 0;
}