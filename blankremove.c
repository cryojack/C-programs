/* Program to delete trailing blanks and empty lines
 */
#define MAXLINE	9999
#include <stdio.h>
int ngetline(char[],int);
void copyline(char[],char[]);
void formatline(char[]);
int main(void)
{
	int thislen;
	char thisline[MAXLINE],maxline[MAXLINE];
	while(thislen = (ngetline(thisline,MAXLINE)) > 0)
	{
		formatline(thisline,maxline);
	}
	printf("%s",maxline);
}

int ngetline(char line[],int range)
{
	int i,c;
	for(i = 0 ;
		i < range-1 && ((c = getchar()) != EOF) && c != '\n' ;
		++i)
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