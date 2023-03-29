#include "main.h"
/**
 *puts_half-function print number of string
 *@str:parameter pointer point to char
  */
void puts_half(char *str)
{
	int n, a;
	int i = 0;

	for (a = 0; str[a] != '\0'; a++)
		i++;
	n = i / 2;

	if ((i % 2) == 1)
	{
		n = ((i + 1) / 2);
	}
	for (a = n; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
