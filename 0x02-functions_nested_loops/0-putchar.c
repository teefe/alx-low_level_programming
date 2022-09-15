#include <stdio.h>
#include "main.h"

/**
*print_putchar - prints _putchar
*
*Return: Always 0
*/
void print_putchar(void)
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
	print_putchar();
	return (0);
}
