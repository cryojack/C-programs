// program to print a histogram of the length of words in an input - vertical version
#define IN		1
#define OUT		0
#define MAXLEN	20		// defining the max length of words - any
#include <stdio.h>		// words above that length will be ignored

int main(void)
{
	int c,inWord;
	int i,j;
	int nchar,top;
	int wlength[MAXLEN];
	i = j = nchar = top = 0;
	inWord = OUT;

	for (i = 0 ; i < MAXLEN ; ++i)		// Set all array values to
	{									// EOL characters
		wlength[i] = '\0';
	}
	while((c = getchar()) != EOF)		// Main loop
	{
		if(!(c == ' ' || c == '\n' || c == '\r' || c == '\b' || c == '\0' || c == '\t'))
		{
			++nchar;
			inWord = IN;
			if(nchar > top)
				top = nchar;
			
			if(top > MAXLEN)
				top = MAXLEN;
		}
		else if(inWord == IN)
		{
			if((nchar > 0) && (nchar <= MAXLEN))
				++wlength[nchar - 1];

			inWord = OUT;
			nchar = 0;
		}
	}
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
	printf("\nPrinting horizontal histogram\n");
	//for(i = 1 ; i < )
}