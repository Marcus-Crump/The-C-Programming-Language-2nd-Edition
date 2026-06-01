#include <stdio.h>

#define MAXLINE 1000

int getline(char line[], int linesize);
void printline(char line[]);

int main()
{
	int len;

	char line[MAXLINE];
	
	while((len = getline(line, MAXLINE)) > 0)
	{
		if(len > 80) printline(line);
	}

	return 1;
}

int getline(char line[], int len)
{
	int c, i;

	for(len = 0; i<len-1 && (c=getchar()) != EOF && c!='\n'; ++i)
		line[i] = c;

	if(c == '\n')
	{
		line[i] = c;
		++i;
	}
	line[i] = '\0';

	return i;
}

void printline(char s[])
{
	int i;

	for(i = 0; s[i] != '\0'; ++i) putchar(s[i]);
}
