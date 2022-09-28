#include "main.h"

/**
*factorial - factorial function
*@n: the string
*
*Return: the factorial of @n
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
