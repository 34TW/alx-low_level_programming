#include <stdio.h>
/**
 * main- function print base 10
 * Return: always 0 success
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}
