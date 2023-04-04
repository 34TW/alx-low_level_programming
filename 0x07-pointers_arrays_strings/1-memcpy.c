#include "main.h"
/**
 *_memcpy-function copy n memory of  area from src to dest
 *@dest:parameter first char
 *@src:parameter second char
 *@n:parameter third unsigned int
 *Return:always dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned  int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
