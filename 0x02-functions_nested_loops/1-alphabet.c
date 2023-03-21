#include "main.h"
/**
 * print_alphabet-intry of function
 * description: function prints lower case alphabet
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
