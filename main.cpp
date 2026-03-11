#include <iostream>


using namespace std;


void WhereIsCharInArray(char* Array, char Target) // 문자 어디에 있음?
{
	int TargetIndex = 0;


	while (*(Array + TargetIndex) != '\0')
	{
		if (*(Array + TargetIndex) == Target)
		{
			cout << TargetIndex << "번 째에 있음" << endl;
			break;
		}
		
		TargetIndex++;
	}

}

void CharChangeInArray(char* Array, char Target, char NewChar) { // 특정 문자 변경

	char* P = Array;
	while (*P != '\0')
	{
		if (*P == Target)
		{
			*P = NewChar;
			cout << Target << "은/는" << *P << "로 변경되었다." << endl;
			break;
		}
		P++;
	}
}
int main()
{

	char TextArray[6] = { 'A', 'P', 'P', 'L', 'E','\0' };
	int Count = 0; // 문자열 개수
	while (true) 
	{
		char Text = *(TextArray + Count);
		if (Text == '\0')
		{
			
			break;
		}
		Count++;
	}
	cout <<"총" << Count << "개" << endl;
	
	CharChangeInArray(TextArray, 'P', 'B');
	WhereIsCharInArray(TextArray,'L');


	
	

	return 0;
}