#include "main.h"
/**
 *_pow_recursion-function intry
 *@x:parameter first int
 *@y:parameter second int
 *Return:always int
 */
int _pow_recursion(int x, int y)
{
	int n;

	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}

		return (n = x * _pow_recursion(x, y - 1));
}
