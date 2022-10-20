#include "main.h"

/**
 * main - the start of the program
 * Description: return value 1 if c lowercase or uppercase otherwise 0
 * Return: always 1 (sucess)
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c<= 'z') || (c >= 'A' && c <= 'Z'));
}
