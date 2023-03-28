#include "main.h"
/**
 *puts2-function print string even char
 *@str:parameter pointer point to char
 */
void puts2(char *str)
{
	int longi = 0;
	char *y = str;
	int t = 0;
	int  j;

	while (*y != '\0')
	{
		y++;
		longi++;
	}
	t = longi - 1;
	for (j = 0; j <= t; j++)
	{
	if (j % 2 == 0)
	{
	_putchar(str[j]);
	}
	}
	_putchar('\n');
}
