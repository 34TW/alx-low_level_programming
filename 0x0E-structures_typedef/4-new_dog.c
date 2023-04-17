#include <stdlib.h>
#include "dog.h"
/**
 *_strlen - function count string length
 *@s: argument pointer to char
 *Return: the length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

#include <stdlib.h>
#include "dog.h"
/**
 **_strcpy- function copy the string pointer src to dest
 *@dest: argumnet first
 *@src:argument second
 *Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j++)
		if (dest[j] != '\0')
	{
		dest[j] = src[i];
	}
	return (dest);
}

#include <stdio.h>
#include <stdlib.h>
#include  "dog.h"
/**
 **new_dog- new dog struct
 *@name: argument first
 *@age: argument second
 *@owner: argument third
 *Return: dog struct element
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}






