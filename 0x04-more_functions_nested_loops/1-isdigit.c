#include "main.h"
/**
 *_isdigit-function check base 10
 *@c:parameter checked int
 *Return:0 success otherwise 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
