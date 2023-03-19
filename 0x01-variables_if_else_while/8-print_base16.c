#include <stdio.h>
/**
 * main- fumction prints hexa decimal number
 * Return: always 0 success
 */
int main(void)
{
	int i, j;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	for (j = 97; j <= 102; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
