// program to replace multiple blanks with a single blank
#include <stdio.h>
int main()
{
	int c;

	while((c = getchar()) != EOF)
	{
		if(c == ' ')
		{
			putchar(' ');
			while((c = getchar()) == ' ')
				;
		}
		putchar(c);
	}
}