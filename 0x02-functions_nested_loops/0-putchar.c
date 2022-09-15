#include "main.h"

/**
*_putchar - prints _putchar
*
*Return: Always 0
*/
void _putchar(void)
{
	int counter = 0;

	int chars[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};

	while (counter < 8)
	{
		putchar(chars[counter]);
		counter++;
	}
	putchar('\n');
}

/**
*main - executes the _putchar function
*
*Return: 0
*/
int main(void)
{
	_putchar()
	return (0);
}
