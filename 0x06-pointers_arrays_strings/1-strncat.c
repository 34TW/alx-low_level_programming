#include "main.h"
/**
 *_strncat- function concatenate two string with int n
 *@dest:parameter first char
 *@src:parameter second char
 *@n:parameter third int
 *Return:always dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
