#include "main.h"
/**
 * print_alphabet_x10- intry of program
 *description: function print lower case letter 10 times
 */
void print_alphabet_x10(void)
{
	char alpha;
	int i;

	i = 0;
	while (i < 10)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
		i++;
		}
}
