#include<iostream>

using namespace std;

// 배열의 길이를 반환
int GetCharArrayLength(char* Array, int Size) { // Size를 추가로 받아서 실행횟수를 제한해야함


	for (int i = 0; i < Size; i++)
	{
		if (Array[i] == 0)
		{
			return i + 1;
		}
	}

	return Size;

}

// 해당 문자를 바꿔줌
void Replace(char* String, int Size, char FindCharacter, char ReplaceCharacter)
{
	for (int i = 0; i < Size; i++)
	{
		if (String[i] == FindCharacter)
		{
			String[i] = ReplaceCharacter;
			
		}
	}
	cout << FindCharacter << " 을/를 " << ReplaceCharacter << " 로 변경함" << endl;
}

// 문자가 있는 인덱스 번호 반환
int WhereIsCharInArray(char* Array, char Target, int Size) 
{

	for (int i = 0; i < Size; i++)
	{
		if (Array[i] == Target)
		{

			cout << i << " 번째에 있음" << endl;
			return i;
		}
	}
	return -1;
}

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
