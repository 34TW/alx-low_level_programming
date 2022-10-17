#include <stdio.h>

/**
 * main - the start og the program
 * Descriptio: print putchar lowercase except q and e
 * Return: always 0
 */
int main(void)
{
	char x;

	x = 'a';

	while
		(x <= 'z')
		{
			if ((x != 'q' && x != 'e') && (x <= 'z'))
				putchar(x);
			x++;
		}
	putchar('\n');
	return (0);
}
