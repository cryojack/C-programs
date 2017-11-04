//program to print each word on a newline
#define IN	1
#define OUT	0
#include <stdio.h>
int main()
{
	int c;
	int nchar,inWord = OUT;
	
	while ((c = getchar()) != EOF)
	{
		putchar(c);
		if(!(c == ' ' || c == '\n' || c == '\t' || c == '\r' || c == '\b' || c == '\0'))
		{
			++nchar;
			inWord = IN;
		}
		else if (inWord == IN)
		{
			putchar ('\n');
			inWord = OUT;
		}
	}
}