#include <stdio.h>
#define PERIOD '.'
int main()
{
	char ch;
	int charcount = 0;
	while ((ch = getchar()) != PERIOD)
	{
		if (ch != '"' && ch != '\'')
			charcount ++;
	}
	printf("There are %d non_quote characters.\n", charcount);
	return 0;
}