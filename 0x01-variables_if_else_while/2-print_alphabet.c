#include <stdio.h>

/**
 * main- the start of the program
 * Description: print putchar lowercase letter
 * Return: always 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
