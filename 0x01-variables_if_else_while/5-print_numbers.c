#include <stdio.h>

/**
 * main- the start of the program
 * Description: print zero to ten
 * Return: always 0
 */
int main(void)
{
	char x;

	for (x = 0; x < 10; x++)
	{
		putchar(x + '0');
	}
		putchar('\n');
	return (0);
}


