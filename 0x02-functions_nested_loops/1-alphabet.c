#include "main.h"
/**
 *main- intry of program
 * description: function prints loweR case alphabet
 * Return: always 0 success
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
