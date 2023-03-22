#include "main.h"

/**
 *_islower-function checked lowercase alphabet
 * @c : the parameter checked the lowercase letter
 * Return:1 success and else 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	return (0);
}
