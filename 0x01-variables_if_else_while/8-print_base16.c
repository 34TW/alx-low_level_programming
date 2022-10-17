#include <stdio.h>
/**
 * main - the start of the program
 * Description: print base 16
 * Return: always 0
 */
int main(void)
{
	char x;
	int y;

	x = 'a';
	while (y < 10)
	{
		putchar(y + '0');
		y++;
	}
	while (x <= 'f')
	{
		putchar(x);
		x++;
	}
	return (0);
}
