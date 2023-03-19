#include <stdio.h>
/**
 * main- function print base 10
 * Return: always 0 success
 */
int main(void)
{
	int n;
	char num_base[10] = "0123456789";

	for (n = 0; n < 10; n++)
	{
		putchar(num_base[n]);
	}
	putchar('\n');
	return (0);
}

