/* This program converts a decimal no. to binary
 */
#define DIVISOR 2
#define MAX		100
#include <stdio.h>
int getNum(int[],int);
void getBinary(int[],int[]);
int main(void)
{
	int num;
	int num_deci[MAX],num_binary[MAX];
	printf("Please enter a number to be converted\n");
	if((num = getNum(num_deci,MAX)) > 0)
	{
		getBinary(num_deci,num_binary);
	}
	else
		printf("Should have non-zero input\n");

	printf("\nbinary of %d is %d",num_deci,num_binary);
}
int getNum(int num[],int range)
{
	int i,n;
	while((n = getchar()) != EOF)
	{
		if(n >= '0' || n <= '9')
		{
			num[i] = n;
			++i;
		}
		else
			break;
	}

	return i;
}
void getBinary(int numdec[], int numbin[])
{
	int i;
	i = 0;
	while((numbin[i] = numdec[i]) != '\r')
		++i;
}