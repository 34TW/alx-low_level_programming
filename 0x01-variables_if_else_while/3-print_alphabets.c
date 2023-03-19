#include <stdio.h>
/**
 * main- function print lower and upper case letter
 * Return: always 0 success
 */
int main(void)
{
	char alpha[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int n;

	for (n = 0; n < 26; n++)
	{
		putchar(alpha[n]);
	}
	for (n = 26; n < 52; n++)
	{
		putchar(alpha[n]);
	}
	putchar('\n');
			return (0);
			}

