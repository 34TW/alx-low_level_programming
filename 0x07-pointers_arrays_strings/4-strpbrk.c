#include "main.h"
/**
 *_strpbrk-function intry
 *@s:parameter first char
 *@accept:parameter second char
 *Return:s else 0
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
