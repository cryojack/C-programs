/* Program to print the longest line - uses functions
 */
#define MAXLINE 1000
#include <stdio.h>
int inputline(char[],int);
void copyline(char[],char[]);
int main(void)
{
	int thislen,maxlen;
	char thisline[MAXLINE], maxline[MAXLINE];
	while((thislen = inputline(thisline,MAXLINE)) > 0)
	{
		if(thislen > maxlen)
		{
			maxlen = thislen;
			copyline(thisline,maxline);
		}
	}
	if(maxlen > 0)
	{
		printf("%s",maxline);
	}
}
int inputline(char line[],int range)
{
	int c,i;
	for(i = 0 ; i < range - 1 && (c = getchar()) != EOF && c != '\n' ; ++i)
		line[i] = c;
	if(c == '\n')
	{
		line[i] = c;
		++i;
	}
	line[i] = '\0';
	return i;
}
void copyline(char from[],char to[])
{
	int i;
	i = 0;
	while((to[i] = from[i]) != '\0')
		++i;
}