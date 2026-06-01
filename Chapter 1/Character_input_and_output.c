#include <stdio.h>

/* Copy input to output; 1st Version*/
main()
{
	int c;

	c = getchar();
	while (c != EOF) {
		putchar(c);
		c = getchar();
	}
}
