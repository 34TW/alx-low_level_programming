#include "main.h"
/**
 *string_toupper-function changes string char from lower to upper case
 *@n:pointer
 *Return:always char
 */
char *string_toupper(char *)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
		i++;
	}
	return (n);
}
