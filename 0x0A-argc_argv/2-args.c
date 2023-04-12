#include "main.h"
#include <stdio.h>
/**
*main-function intry
*@argc:argument count int
*@argv:argument vector char
*Return:always int
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
