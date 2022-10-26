#include "main.h"

/**
* _strcat-concatennates two strings
* @dest: the first parameter
* @src: the second parameter
* Return: pointer to dest
*/
char *_strcat(char *dest, char *src)
{
	int x;
	int y;

	i = 0;
	while (dest[i] != '\0')
	{
	i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';
	return (dest);
}
