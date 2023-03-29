#include "main.h"
#include <stdio.h>

/**
 *print_array-function print n array
 *@a:parameter first int
 *@n:parameter second int
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
		continue;
		if (a[n] != a[n - 1])
			printf(",");
		printf(" ");
	}
	if (i == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
