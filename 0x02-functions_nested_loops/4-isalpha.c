#include "main.h"

/**
* _isalpha- check for alphabet
* @c: character to be checked
* Return: retun 1 character is letter otherwise o
*/
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));

}
