#include "main.h"

/**
 * sqrt_find - the find sqrt function
 * @guess: the guess number
 * @sqrnum: the sqr number
 * Return: the sqare root
 */
int sqrt_find(int sqrnum, int guess)
{
	if (guess * guess > sqrnum)
		return (-1);
	if (guess * guess == sqrnum)
		return (guess);
	return (sqrt_find(sqrnum, guess + 1));
}
/**
 * _sqrt_recursion - the sqrt recursion function
 * @n: the square number
 *Return: the natural sqaure root
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt_find(n, 1));
}
