#include "main.h"

/**
 * print_line- function print the line
 * @n: teh integer parameter
 * Return: void
 */
void print_line(int n)
{
	int m;

	if (n <= 0)
	_putchar('\n');
	else
	{
	for (m = 0 ; m <= n ; m++)
		_putchar(95);
	_putchar('\n');
	}
}

