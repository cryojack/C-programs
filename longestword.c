// program to print the size of the longest word
#define IN	1
#define OUT	0
#include <stdio.h>
int main ()
{
	int c;
	int nchar , inWord = OUT;
	int wlength = 0;
	
	while((c = getchar()) != EOF)
	{
		if(!(c == ' ' || c == '\n' || c == '\t' || c == '\r' || c == '\b' || c == '\0'))
		{
			++nchar;
			inWord = IN;
			if(nchar >= wlength)
			{
				wlength = nchar;
			}
		}
		else if(inWord == IN)
		{
			inWord = OUT;
			nchar = 0;
		}
		if(c == '\n')
			break;
	}
	printf("\nLongest word is %d characters long", wlength);
}