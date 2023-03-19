#include <stdio.h>
/**
 * main- function print base base 10 two number
 * Return: always 0 success
 */
int main(void)
{
	int n, m;

	for (n = '0'; n < '9'; n++)
	{
		for (m = n + 1; m <= '9'; m++)
		{
			if (m != n)
			{
		putchar(n);
		putchar(m);
		if (n == '8' && m == '9')
			continue;
		putchar(',');
		putchar(' ');
	}
		}
	}
	putchar('\n');
	return (0);
}
