#include "main.h"

/**
* factorial - factorial function
* @n: the string
*
* return:the factorial of n
*/
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
