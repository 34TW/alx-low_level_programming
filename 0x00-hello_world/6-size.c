#include <stdio.h>
/**
 * main-function printf print all datatype size of size
 *return: always 0 success
 */
int main(void)
{
	printf("size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of an long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of an long long int: %lu byte(s)\n", sizeof(long long int));
	printf("size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}

