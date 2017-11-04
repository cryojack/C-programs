// program to print the longest word
#define IN		1
#define OUT		0
#define MAXLEN	30
#include <stdio.h>
int main()
{
	int c,i,j,wlen;
	int wlength[MAXLEN], temp[MAXLEN];		// Arrays to store characters, including a temp array
	int inWord = OUT;						// State of the word - we're outside a word
	for (i = 0 ; i < MAXLEN ; ++i)			// Set array values to '\0'
	{
		temp[i] = ' ';
		wlength[i] = ' ';
	}
	i = j = wlen = 0;						// Reset the variables
	while((c = getchar()) != EOF)			// Main loop
	{
		if(!(c == ' ' || c == '\n' || c == '\r' || c == '\b' || c == '\0' || c == '\t'))
		{
			inWord = IN;
			temp[i++] = c;

			if((i > wlen) && (i < MAXLEN))
			{
				wlen = i;
				for(j = 0 ; j < wlen ; ++j)
				{
					wlength[j] = temp[j];
				}
			}
		}
		else if (inWord == 1)
		{
			inWord = OUT;
			i = 0;
		}
	}
	printf("\nThe longest word is ");		// Print the longest word, which is stored in wlength
	for(j = 0 ; j < wlen ; ++j)
	{
		putchar(wlength[j]);
	}	printf("\t\t[%d] characters",j);
}