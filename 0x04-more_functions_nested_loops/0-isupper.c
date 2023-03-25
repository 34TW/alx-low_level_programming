#include "main.h"

/**
 * _isupper- function checked for upper case letter
 * @c:parameter check int
 *Return:1 succes otherwise 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <=  'Z')
	{
		return (1);
	}
	else
		return (0);
}

