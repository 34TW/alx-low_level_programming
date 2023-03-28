#include "main.h"
/**
 *swap_int-function swap two pointer point int
 *@a:first pointer point to first int
 *@b:second pointer point to int second
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
