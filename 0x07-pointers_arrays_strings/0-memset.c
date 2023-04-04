#include "main.h"
/**
 *_memset-function print b memeory size n
 *@s:parameter fist pinter to char
 *@b:parameter second char
 *@n:parameter third unsigned int
 *Return:always s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
