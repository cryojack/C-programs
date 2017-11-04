// program to replace vowels with an asterisk (*)
#include <stdio.h>
int main()
{
	int c;
	
	while((c = getchar()) != EOF)
	{	
		if(!(c == '\n' || c == '\r' || c == '\b' || c == '\0'))
		{
			if(c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' ||
			c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U')
			{
				putchar('*');
			}
			else
			{
				putchar(c);
			}
		}
		if(c == '\n')
			putchar('\n');
	}
}