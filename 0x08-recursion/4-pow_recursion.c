#include "main.h"

/**
 * _pow_recursion - the power of a number
 * @x: the number we are raising
 * @y: the power we are raising @x too
 *
 * Return: the power of @x
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
