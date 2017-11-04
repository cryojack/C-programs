/* This program is a demo of a small game - uses functions
 */
#define BOARD	16
#include <stdio.h>
void printBoard(int size);
int playerInput(char key);
int main(void)
{
	printBoard(BOARD);
}
void printBoard(int size)
{
	int i,j;
	for(i = 0 ; i < 8 ; ++i)
	{
		for(j = 0 ; j < i ; ++j)
		{
			putchar('*');
		}
	}
}