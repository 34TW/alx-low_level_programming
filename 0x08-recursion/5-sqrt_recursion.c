#include "main.h"
/**
 *actual_sqrt_recursion-function intry
 *@n:parameter int
 *@i:parameter second int
 *Return:always int
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i  > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (0);
	}
	else
	{
		return (actual_sqrt_recursion(n, i + 1));
	}
}
