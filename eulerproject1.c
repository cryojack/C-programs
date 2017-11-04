/* program to find the largest palindrome made from
 * the product of 3 digit numbers - uses functions
 */
#define MAXLEN	999
#include <stdio.h>
int multiply(int,int);
int reverse(int);
int checkpalindrome(int,int);
int main()
{
	int palindrome,temp,largest,count;
	int i,j;
	palindrome = temp = largest = count = 0;
	i = j = 100;

	while(i <= MAXLEN)
	{
		palindrome = multiply(i,j);
		temp = reverse(palindrome);
		if((checkpalindrome(palindrome,temp)) == 1)
		{
			++count;
			if(temp > largest)
			{
				largest = temp;
			}
		}
		++j;
		if(j > MAXLEN)
		{
			j = 100;
			++i;
		}
	}
	printf("\nLargest palindrome formed by a product of 3 digit numbers : %d",largest);
	printf("\nNo. of palindromes formed by a product of 3 digit numbers : %d",count);
}
int checkpalindrome(int num, int revnum)
{
	if(num == revnum)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int multiply(int i, int j)
{
	return i * j;
}
int reverse(int num)
{
	int rem,temp,revnum;
	rem = revnum = 0;
	temp = num;
	while(temp != 0)
	{
		rem = temp % 10;
		revnum = revnum * 10 + rem;
		temp = temp / 10;
	}
	return revnum;
}