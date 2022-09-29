#include "main.h"

/**
 * primeFind - the find sqrt function
 * @b: the guess number
 * @p: the prime number
 * Return: wether number is prime
 */
int primeFind(int p, int b)
{
	if (p <= 1)
		return (0);
	if (p % b == 0 && b > 1)
		return (0);
	if (p / b < b)
		return (1);
	return (primeFind(p, b + 1));
}
/**
 * is_prime_number - the sqrt recursion function
 * @n: the number to be checked
 *Return: 1 or 0
 */
int is_prime_number(int n)
{
	return (primeFind(n, 2));
}

