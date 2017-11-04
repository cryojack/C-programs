// program to print a histogram of the length of words
#define MAXLEN	10
#include <stdio.h>
int main(void)
{
	int c;					/* main char variable */
	int i,j;				/* index counters */
	int nchar;				/* no. of characters */
	int inword;				/* in or out of a word */
	int currval,top;		/* current and highest value */
	int wlength[MAXLEN];	/* word length array */
	i = j = 0;
	nchar = 0;
	currval = top = 0;
	inword = 0;

	for (i = 0 ; i < MAXLEN ; ++i)
	{
		wlength[i] = 0;
	}
	while((c = getchar()) != EOF)
	{
		if(!(c == ' ' || c == '\n' || c == '\r' || c == '\b' || c == '\0' || c == '\t'))
		{
			++nchar;
			inword = 1;
			if(inword == 1)
			{
				if(nchar <= MAXLEN)
				{
					if(nchar > 0)
					{
						currval = ++wlength[nchar - 1];
						if(currval > top)
						{
							top = currval;
						}
					}
				}
			}
		}
		else
		{
			if(inword == 1)
			{
				inword = 0;
				nchar = 0;
			}
		}
	}
	//printf("\nnword %d\t nchar %d",nword,nchar);
	printf("\nPrinting horizontal histogram\n");
	printf("wlen nchar\n");
	for(i = 0 ; i < top ; ++i)
	{
		printf("%2d%4d |", i+1, wlength[i]);
		for(j = 0 ; j < wlength[i] ; ++j)
		{
			putchar('*');
		}
		putchar('\n');
	}
}