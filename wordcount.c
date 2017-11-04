/* program to print the no. of characters, blanks, words and 
 * newlines
 */
#define IN	1
#define OUT	0
#include <stdio.h>
int main()
{
	int c,lchar;
	int nchar,nword,nblank,nlines,inWord;
	nchar = nword = nblank = nlines = lchar = 0;
	inWord = OUT;

	while((c = getchar()) != EOF)
	{
		if(!(c == ' ' || c == '\n' || c == '\t' || c == '\r' || c == '\b' || c == '\0'))
		{
			++nchar;
			if(inWord == OUT)
			{
				inWord = IN;
				++nword;
			}
		}
		else
		{
			if(inWord == IN)
			{
				inWord = OUT;
			}
		}

		if(c == ' ')
			++nblank;

		if(c == '\n')
			++nlines;

		if(c == EOF)
			break;
	}
	printf("\n%d Characters | %d Blanks | %d Words | %d Lines ",nchar,nblank,nword,nlines);
}