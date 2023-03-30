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

	for (index = 0; index < n; index++)
	{
		n--;
		tmp = a[index];
		a[index] = a[n];
		a[n] = tmp;
	}
}
