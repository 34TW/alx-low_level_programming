#include "main.h"
int actual_sqrt_recursion(int n, int i);

/**
 *_sqrt_recursion-function intry
 *@n:parameter int
 *Return:always int
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}
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
		return (i);
	}
	else
	{
		return (actual_sqrt_recursion(n, i + 1));
	}
}
