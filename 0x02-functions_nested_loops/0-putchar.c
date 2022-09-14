#include "main.h"

/**
*_putchar - prints _putchar
*
*
*Return: Always 0
*/
int _putchar(void)
{
	int counter = 0;

	int chars[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};

	while (counter < 8)
	{
		putchar(chars[counter]);
		counter++;
	}
	putchar('\n');
	return (0);
}
