#include "main.h"
/**
 *print_last_digit- function print last digit of number
 *@n:parameter checked last int
 *Return: always int
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
		return (last);
}
