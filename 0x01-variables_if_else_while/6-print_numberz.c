#include <stdio.h>

/**
 * main- the start of the program
 * Description: prints integer zero to nine
 * Return: always 0
 */
int main(void)
{
	int x;

	x = 0;
	while (x < 10)
	{
		putchar(x + '0');
		x++;
	}
	putchar('\n');
	return (0);
}




