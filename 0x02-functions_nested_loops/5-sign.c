#include "main.h"

/**
 * main - the start of the program
 * Description : print char with the return value
 * Return : alwyas 0
 */
int print_sign(int n)
{
	int n;

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
