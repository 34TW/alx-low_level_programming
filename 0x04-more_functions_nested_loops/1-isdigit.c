#include "main.h"

/**
 * _isdigit - check the number from 0 to 9
 * @c: the character
 * Return: 0 and 1
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
