#include  "function_pointers.h"
/**
 *int_index- function intry
 *@array: argument first
 *@size: argument second
 *@cmp: pointer to function compare
 *Return: always int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
