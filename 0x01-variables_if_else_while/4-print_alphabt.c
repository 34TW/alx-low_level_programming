#include <stdio.h>
/**
 * main- function print lower case letter execpt letter e and q
 * Return: always 0 success
 */
int main(void)
{
	char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
	int n;

	for (n = 0; n < 26; n++)
	{
		if (alpha[n] != 'q' && alpha[n] != 'e')
			putchar(alpha[n]);
	}
	putchar('\n');
	return (0);
}
