#include <stdio.h>
/**
 * main- function print base 10  with comma and space
 * Return: always 0 success
 */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		putchar(',');
		putchar (' ');
	}
	putchar('\n');
	return (0);
}