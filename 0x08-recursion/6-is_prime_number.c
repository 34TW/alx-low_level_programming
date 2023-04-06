#include "main.h"
int check_prime(int n,int i);
/**
 *is_prime_number-function intry
 *@n:parameter int
 *Return:always 1
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}
#include "main.h"
/**
 *check_prime-function inty
 *@n:paramter first int
 *@i:parameter second int
 *Return:always int
 */
int check_prime(int n,int i)
{
	if (n <= i)
		return (0);
	if ((n % i) == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);
	return (check_prime(n, i + 1));
}
