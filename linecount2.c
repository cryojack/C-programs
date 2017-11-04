// program to print a word every new line
#include <stdio.h>
int main()
{
	int c, inWord = 0;

	while((c = getchar()) != EOF)
	{
		if(!(c == ' ' || c == '\n' || c == '\r' || c == '\b' || c == '\0' || c == '\t'))
		{
			inWord = 1;
			putchar(c);
		}
		else if (inWord == 1)
		{
			inWord = 0;
			putchar('\n');
		}
	}
}