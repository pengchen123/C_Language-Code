#include<stdio.h>
#define ROWS 6
#define CHARS 10
int main()
{
	int row;
	int ch;
	for(row = 0;row<ROWS;row++)
	{
		for(ch='A';ch < ('A'+CHARS); ch++)
			printf("%c  ",ch);
		printf("\n");
		printf("\n");
	}
	return 0;
}