#include "main.h"
#include <stdio.h>
/**
*main-function intry
*@argc:parameter argument count int
*@argv:parameter argument vector char
*Return:always int
*/
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
