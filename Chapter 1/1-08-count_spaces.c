#include <stdio.h>

#define TAB '\t'
#define SPACE ' '
#define NEWLINE '\n'

int main()
{
	int spaces, tabs, nls;
	spaces = tabs = nls = 0;

	char c;

	while( (c = getchar()) != EOF)
	{
		if(c == TAB) tabs++;
		if(c == SPACE) spaces++;
		if(c == NEWLINE) nls++;
	}
	printf("Spaces: %d\nTabs: %d\nNewlines: %d\n", spaces, tabs, nls);
	
	return 1;
}
