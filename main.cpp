#include <iostream>
#include "StringUtill.h"

using namespace std;





int main()
{

	char TextArray[6] = { 'A', 'P', 'P', 'L', 'E','\0' };
	int Count = 0; // 문자열 개수
	
	Count = GetCharArrayLength(TextArray, 7);
	
	cout <<"총 " << Count << " 개" << endl;
	Replace(TextArray, 7, 'P', 'B');
	
	WhereIsCharInArray(TextArray,'L',7);


	return 0;
}