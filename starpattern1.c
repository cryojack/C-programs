//star pattern program
#define RANGE	20
#include <stdio.h>

int main()
{
	for (int i = 0 ; i < RANGE ; ++i)
	{
		for (int j = 0 ; j < i ; ++j)
		{
			putchar('*');
		}
		putchar('\n');
	}
}