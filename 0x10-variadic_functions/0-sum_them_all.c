#include "variadic_functions.h"
#include <stdarg.h>

/**
*sum_them_all- function intry point
*@n: argument to constant int
*Return: always int sum
*/

int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int sum = 0;
va_list ap;
va_start(ap, n);

for (i = 0; i < n; i++)
sum = sum + va_arg(ap, int);

va_end(ap);
return (sum);
}
