#include "main.h"

/**
 * main - the start of the program
 * Description: print the last digit as return
 * Return : always 0
 */
int print_last_digit(int n)
{
	int x;
	
	if (n < 0)
	n = -n;
	x = n % 10;
	_putchar(x + '0');
	return (x);
}

