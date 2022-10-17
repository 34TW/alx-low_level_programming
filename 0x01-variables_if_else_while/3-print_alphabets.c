#include <stdio.h>

/**
 * main-the start of the program
 * Description: print putchar in lowercase and uppercase letter
 * Return: always 0
 */
int main(void)
{
	char x;
	char y;

	x = 'a';
	y = 'A';
	while
		(x <= 'z')
		{
			putchar(x);
		x++;
		}
	while
		(y <= 'Z')
		{
			putchar(y);
			y++;
		}
	putchar('\n');
	return (0);
}


