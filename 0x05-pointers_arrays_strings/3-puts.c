#include "main.h"
/**
 *_puts-function print string
 *@str:parameter pointer ponit to char
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
