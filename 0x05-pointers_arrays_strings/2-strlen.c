#include "main.h"
/**
 *_strlen-function return word  length of string
 *@s:parameter pointer point to char
 *Return:always int
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
