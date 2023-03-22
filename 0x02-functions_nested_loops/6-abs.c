#include "main.h"
/**
 *_abs- function print absolute value of intger
 *@i:check the intger
 *Return: always 0 success
 */
int _abs(int i)
{
	if (i < 0)
	{
		int abs_val;

		abs_val = i * -1;
		return (abs_val);
	}
	return (i);
}
