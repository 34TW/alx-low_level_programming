#include "function_pointers.h"
/**
 *print_name- function intry
 *@name:argument first
 *@f: pointer to function
 *Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL &&  f != NULL)
		f(name);
}
