/* Program to find all words longer than 10 characters - uses
 * functions
 */
#define MAXLENGTH	99
#define WORDLENGTH	10
#define IN			1
#define OUT			0
#include <stdio.h>
int inputword(char[],int);
int main(void)
{
	int len,wlen;
	char size[MAXLENGTH];
	wlen = 0;
	while((len = inputword(size,MAXLENGTH)) > 0)
	{
		if(len == WORDLENGTH)
		{
			printf("\n%s",size);
		}
	}
}
int inputword(char word[], int range)
{
	int c,i;
	while(i < range && (c = getchar()) != EOF)
	{
		word[i] = c;
		++i;
	}
	word[i] = '\0';
	return i;
}