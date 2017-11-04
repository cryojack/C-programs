/* Program to print the line with the most words
 */
#define IN	1
#define OUT	0
#define MAX	1000
#include <stdio.h>
int wordCount(char[],int);
void copyline(char[],char[]);
int main(void)
{
	int thislen,maxlen;
	char thisline[MAX],maxline[MAX];
	maxlen = 0;
	while((thislen = wordCount(thisline,MAX)) > 0)
	{
		if(thislen > maxlen)
		{
			maxlen = thislen;
			copyline(thisline,maxline);
			if(thislen == maxlen)
			{
				copyline(thisline,maxline);
			}
		}
	}
	printf("\n%s",maxline);
	printf("\nNo of words in this line - %d",maxlen);
	return 0;
}
int wordCount(char line[],int range)
{
	int c,i;
	int inword;
	int wcount;
	wcount = 0;
	inword = OUT;
	for(i = 0 ; i < range-1 && (c = getchar()) != EOF ; ++i)
	{
		line[i] = c;
		if(!(c == ' ' || c == '\t' || c == '\n' || c == '\b' || c == '\0' || c == '\r'))
		{
			if(inword == OUT)
			{
				inword = IN;
				++wcount;
			}
		}
		else
		{
			if(inword == IN)
			{
				inword = OUT;
			}
		}
		if(c == '\n')
		{
			return wcount;
			wcount = 0;
		}
	}
	line[i] = '\0';
}

void copyline(char from[], char to[])
{
	int i;
	i = 0;
	while((to[i] = from[i]) != '\0')
		++i;
}