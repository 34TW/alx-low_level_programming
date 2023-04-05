#include "main.h"
/**
 *factorial-function intry
 *@n:parameter int
 *Return:always int
 */
int factorial(int n)
{
	int i;

	if (n > 0)
	{
		i = n *  factorial(n - 1);
		return (i);
	}
	if (n == 0)
	{
		return (1);
	}
	return (-1);
}
