#include "main.h"

/**
 * print_alphabet_x10- the start of the program
 * Description : print the lower case alphabet 10 time
 */
void print_alphabet_x10(void)
{
	int x;
	int j;

	for (x = 0 ; x <= 10 ; x++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');

	}
