/*Program to check whether a word is a palindrome.
 *This program will subtract the ASCII values of characters stored in *wlength and temp and then add the result - if the result is 0, the *word is a palindrome.
 *This program will only accept a word length of upto 30 characters */
#define MAXLEN	30	/* maximum length of words*/
#include <stdio.h>
int main(void)
{
	int c,i,wlen;
	int wlength[MAXLEN], temp[MAXLEN], palindrome[MAXLEN];
	int isPalindrome = 0;
	for (i = 0 ; i < MAXLEN ; ++i) /* set all values to EOL */
	{
		temp[i] = '\0';
		wlength[i] = '\0';
	}
	i = wlen = 0;
	while((c = getchar()) != EOF) /* Main loop */
	{
		if(!(c == ' ' || c == '\n' || c == '\r' || c == '\b' || c == '\0' || c == '\t'))
		{
			++wlen;
			if((wlen > 0) && (wlen <= MAXLEN))
			{
				wlength[i++] = c;
			}
			if(wlen > MAXLEN)
			{
				wlen = MAXLEN;
			}
		}
	}
	for(i = wlen ; i >= 0 ; --i)
	{
		temp[wlen - i - 1] = wlength[i];
	}
	if(c == EOF)
	{
		for(i = 0 ; i < wlen ; ++i)
		{
			if(wlength[i] == temp[i])
				palindrome[i] = 0;

			if(wlength[i] != temp[i])
				palindrome[i] = 1;
		}
		for(i = 0 ; i < wlen ; ++i)
		{
			isPalindrome = isPalindrome + palindrome[i];
		}
		if(isPalindrome == 0)
		{
			printf("\nPALINDROME");
		}
		if(isPalindrome != 0)
		{
			printf("\nNOT PALINDROME");
		}
	}
}