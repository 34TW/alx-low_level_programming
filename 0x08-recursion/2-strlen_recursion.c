#include "main.h"
/**
 *_strlen_recursion-function intry
 *@s:parameter first pointer char
 *Return:always i
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i = i + _strlen_recursion(s + 1);
	}
	return (i);
}
