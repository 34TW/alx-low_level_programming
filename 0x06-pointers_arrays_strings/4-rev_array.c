#include "main.h"
/**
 *reverse_array-function print inverse string
 *@a:parameter first int
 *@n:parameter second int
 */
void reverse_array(int *a, int n)
{
	int tmp;
	int index;

	for (index = n - 1; index >= n / 2; index--)
	{
			tmp = a[n - 1 - index];
			a[n - 1 - index] = a[index];
			a[index] = tmp;
	}
}
