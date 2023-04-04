#include "main.h"
/**
 *_strchr-function check first char in array pointer
 *@s:parameter first char pointer
 *@c:parameter second char
 *Return:char else NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (NULL);
}
