#include "main.h"
/**
 *_isalpha- function check whether lower and upper case letter
 * @c: checked the character lower and upper case letter
 * Return: 1 success else 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
		return (0);
}
