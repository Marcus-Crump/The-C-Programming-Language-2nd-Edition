#include <stdio.h>

int main()
{
	char c;
	while ( (c = getchar()) != EOF)
	{
		putchar(c);
	}
	printf("EOF value: %d\n",c);

	return 1;
}
